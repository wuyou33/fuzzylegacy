/*   Copyright 2019 Yuri Sa @yurisa2

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/* 
 * File:   EinsteinSum.cpp
 * Author: @yurisa2
 *
 * Created on 30 November 2019, 1:17 AM
 */

#include "fl/norm/s/EinsteinSum.h"

namespace fl {

    std::string EinsteinSum::className() const {
        return "EinsteinSum";
    }

    scalar EinsteinSum::compute(scalar a, scalar b) const {
        return (a + b) / (1.0 + a * b);
    }

    SNorm* EinsteinSum::constructor() {
        return new EinsteinSum;
    }
}