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

import enum

from thrift.py3lite.client.request_channel import RequestChannel as RequestChannel

class Protocol(enum.Enum):
    BINARY: Protocol = ...
    COMPACT: Protocol = ...

class ClientType(enum.Enum):
    THRIFT_HEADER_CLIENT_TYPE: ClientType = ...
    THRIFT_ROCKET_CLIENT_TYPE: ClientType = ...
    THRIFT_HTTP_CLIENT_TYPE: ClientType = ...
