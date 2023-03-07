/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

use std::num::NonZeroI64;

use fbthrift::adapter::ThriftTypeAdapter;

#[derive(Debug, Clone, PartialEq)]
pub struct CustomString(pub String);

pub struct StringAdapter {}

impl ThriftTypeAdapter for StringAdapter {
    type ThriftType = String;
    type Error = std::convert::Infallible;

    type AdaptedType = CustomString;

    fn from_thrift(value: Self::ThriftType) -> Result<Self::AdaptedType, Self::Error> {
        Ok(CustomString(value))
    }

    fn to_thrift(value: &Self::AdaptedType) -> Self::ThriftType {
        value.0.clone()
    }
}

pub struct NonZeroI64Adapter {}

impl ThriftTypeAdapter for NonZeroI64Adapter {
    type ThriftType = i64;
    type Error = anyhow::Error;

    type AdaptedType = NonZeroI64;

    fn from_thrift(value: Self::ThriftType) -> Result<Self::AdaptedType, Self::Error> {
        match NonZeroI64::new(value) {
            Some(v) => Ok(v),
            None => {
                anyhow::bail!("Given i64 is not non-zero: {}", value);
            }
        }
    }

    fn to_thrift(value: &Self::AdaptedType) -> Self::ThriftType {
        value.get()
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct SortedVec(pub Vec<String>);

pub struct ListAdapter {}

impl ThriftTypeAdapter for ListAdapter {
    type ThriftType = Vec<String>;
    type Error = std::convert::Infallible;

    type AdaptedType = SortedVec;

    fn from_thrift(mut value: Self::ThriftType) -> Result<Self::AdaptedType, Self::Error> {
        value.sort();

        Ok(SortedVec(value))
    }

    fn to_thrift(value: &Self::AdaptedType) -> Self::ThriftType {
        value.0.clone()
    }
}
