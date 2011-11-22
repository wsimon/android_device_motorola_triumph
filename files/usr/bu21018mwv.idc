# Copyright (C) 2010 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

#
# Input Device Calibration File for the Triumph (bu21018mwv) touch screen.
#
# These calibration values are derived from empirical measurements
# and may not be appropriate for use with other touch screens.
# Refer to the input device calibration documentation for more details.
#

# Touch Size
touch.touchSize.calibration = pressure

# Tool Size
# Driver reports tool size as an area measurement.
#
# Based on empirical measurements, we estimate the size of the tool
#

# Pressure
# Driver reports signal strength as pressure.
#
# A normal thumb touch typically registers about 100 signal strength
# units although we don't expect these values to be accurate.
touch.pressure.calibration = amplitude
touch.pressure.source = default
touch.pressure.scale = 0.01

# Size
touch.size.calibration = normalized

# Orientation
touch.orientation.calibration = none


