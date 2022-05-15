# Copyright (c) Meta Platforms, Inc. and affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import time
import unittest
from datetime import datetime
from unittest.mock import MagicMock

from thrift.python.test.adapter.thrift_types import AdaptedInt, Bar, Datetime, Foo
from thrift.python.test.adapters.datetime import DatetimeAdapter


class AdapterTest(unittest.TestCase):
    def test_round_trip(self) -> None:
        now = datetime.fromtimestamp(int(time.time()))
        foo = Foo(created_at=now)
        self.assertIsInstance(foo.created_at, datetime)
        self.assertEqual(foo.created_at, now)

    def test_update(self) -> None:
        now = datetime.fromtimestamp(int(time.time()))
        foo = Foo(created_at=now)
        future = datetime.fromtimestamp(int(time.time()) + 100)
        foo = foo(created_at=future)
        self.assertEqual(foo.created_at, future)

    def test_union(self) -> None:
        now = datetime.fromtimestamp(int(time.time()))
        bar = Bar(ts=now)
        self.assertEqual(bar.ts, now)

    def test_adapter_called_with_field_id(self) -> None:
        mock_from_thrift_field = MagicMock(wraps=DatetimeAdapter.from_thrift_field)
        DatetimeAdapter.from_thrift_field = mock_from_thrift_field
        mock_to_thrift_field = MagicMock(wraps=DatetimeAdapter.to_thrift_field)
        DatetimeAdapter.to_thrift_field = mock_to_thrift_field

        now_ts = int(time.time())
        now = datetime.fromtimestamp(now_ts)
        foo = Foo(created_at=now)
        mock_to_thrift_field.assert_called_once_with(now, 1, foo)
        foo.created_at
        mock_from_thrift_field.assert_called_once_with(now_ts, 1, foo)

        mock_from_thrift_field.reset_mock()
        mock_to_thrift_field.reset_mock()
        bar = Bar(ts=now)
        mock_to_thrift_field.assert_called_once_with(now, 2, bar)
        bar.ts
        mock_from_thrift_field.assert_called_once_with(now_ts, 2, bar)

    def test_typedef_field(self) -> None:
        now = datetime.fromtimestamp(int(time.time()))
        foo = Foo(updated_at=now)
        self.assertIsInstance(foo.updated_at, datetime)
        self.assertEqual(foo.updated_at, now)

    def test_double_adapters(self) -> None:
        now = datetime.fromtimestamp(int(time.time()))
        foo = Foo(another_time=now)
        self.assertIsInstance(foo.another_time, datetime)
        self.assertEqual(foo.another_time, now)

    def test_typedefs(self) -> None:
        self.assertEqual(datetime, Datetime)
        self.assertEqual(int, AdaptedInt)

    def test_adapted_type_in_containers(self) -> None:
        int_list = [1, 2, 3]
        int_set = {4, 5, 6}
        int_to_datetime_map = {42: datetime.fromtimestamp(int(time.time()))}
        foo = Foo(
            int_list=int_list, int_set=int_set, int_to_datetime_map=int_to_datetime_map
        )
        self.assertEqual(foo.int_list, int_list)
        self.assertEqual(foo.int_set, int_set)
        self.assertEqual(foo.int_to_datetime_map, int_to_datetime_map)

    def test_adapted_container_of_adapted_type(self) -> None:
        str_list = ["1", "1", "2", "3", "5", "8", "13"]
        foo = Foo(adapted_list=str_list)
        self.assertEqual(foo.adapted_list, str_list)