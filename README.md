
[![Arduino CI](https://github.com/RobTillaart/logic/workflows/Arduino%20CI/badge.svg)](https://github.com/marketplace/actions/arduino_ci)
[![Arduino-lint](https://github.com/RobTillaart/logic/actions/workflows/arduino-lint.yml/badge.svg)](https://github.com/RobTillaart/logic/actions/workflows/arduino-lint.yml)
[![JSON check](https://github.com/RobTillaart/logic/actions/workflows/jsoncheck.yml/badge.svg)](https://github.com/RobTillaart/logic/actions/workflows/jsoncheck.yml)
[![GitHub issues](https://img.shields.io/github/issues/RobTillaart/logic.svg)](https://github.com/RobTillaart/logic/issues)

[![License: MIT](https://img.shields.io/badge/license-MIT-green.svg)](https://github.com/RobTillaart/logic/blob/master/LICENSE)
[![GitHub release](https://img.shields.io/github/release/RobTillaart/logic.svg?maxAge=3600)](https://github.com/RobTillaart/logic/releases)
[![PlatformIO Registry](https://badges.registry.platformio.org/packages/robtillaart/library/logic.svg)](https://registry.platformio.org/libraries/robtillaart/logic)


# logic

Arduino library for evaluation of larger logic conditions.


## Description

**Experimental**

This library is to evaluate larger or more complex logic conditions in a nice way.


### Related

- https://github.com/RobTillaart/logic


### Tested

Test on Arduino UNO R3


### Performance


|  function  |  time (us)  |  Notes  |
|:----------:|:-----------:|:--------|
|    2 bit   |             |  default 
|    3 bit   |             |
|    4 bit   |             |
|    5 bit   |             |
|    2 bit   |             |


TODO: run performance sketch on hardware.


## Interface

```cpp
#include "logic.h"
```

### Constructor

- **logic()** 
- **void setTable(uint32_t table)**
- **uint32_t getTable()**


TODO explain table 

### Eval

- **bool eval(bool a, bool b)**
- **bool eval(bool a, bool b, bool c)**
- **bool eval(bool a, bool b, bool c, bool d)**
- **bool eval(bool a, bool b, bool c, bool d, bool e)**


## Future

#### Must

- improve documentation
- test performance

#### Should

- optimize possible?
  - from the number?
  - short circuit eval

#### Could

- investigate array of booleans + array of bits for the answers?
- keep last value?
- true-count() = how many of the params are TRUE.
  - e.g. to test if at least N conditions are met

#### Wont

- **bool eval(bool a)** too simple.
- print interface? (overkill)

## Support

If you appreciate my libraries, you can support the development and maintenance.
Improve the quality of the libraries by providing issues and Pull Requests, or
donate through PayPal or GitHub sponsors.

Thank you,


