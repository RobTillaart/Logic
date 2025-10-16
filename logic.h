#pragma once
//
//    FILE: logic.h
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.0
// PURPOSE: Arduino library for evaluation of larger logic conditions.
//    DATE: 2025-04-24
//     URL: https://github.com/RobTillaart/logic
//

/*
NOTES

variable of type logic could have
- operators NOT AND NAND OR NOR XOR
- constants true false (from bool)
- assign a == b
- equal
- implement PRINT

logic a(true);
logic b(true);
println(a AND b);



Functie  logic(b1, b2, 0b1001)

3e getal geeft waarheids tabel

Logic.setTable(bit mask)
C = Logic(a, b)

2 4
3 8
4 16
5 32
6 64 - not supported directly
Maar bv array?

Kan ik short evaluatie doen?

#defines AND  0x00000001

*/


#include "Arduino.h"

#define LOGIC_LIB_VERSION       (F("0.1.0"))


class logic
{
public:
  logic() {};
  void setTable(uint32_t table)
  {
    _table = table;
  }

  uint32_t getTable()
  {
    return _table;
  }

  bool eval(bool a, bool b)
  {
    uint32_t mask = 0x08;
    if (a) mask >>= 2;
    if (b) mask >>= 1;
    return (_table & mask);
  }

  bool eval(bool a, bool b, bool c)
  {
    uint32_t mask = 0x80;
    if (a) mask >>= 4;
    if (b) mask >>= 2;
    if (c) mask >>= 1;
    return (_table & mask);
  }

  bool eval(bool a, bool b, bool c, bool d)
  {
    uint32_t mask = 0x8000;
    if (a) mask >>= 8;
    if (b) mask >>= 4;
    if (c) mask >>= 2;
    if (d) mask >>= 1;
    return (_table & mask);
  }

  bool eval(bool a, bool b, bool c, bool d, bool e)
  {
    uint32_t mask = 0x80000000;
    if (a) mask >>= 16;
    if (b) mask >>= 8;
    if (c) mask >>= 4;
    if (d) mask >>= 2;
    if (e) mask >>= 1;
    return (_table & mask);
  }

private:
  uint32_t _table = 0;
  bool     _lastValue = false;
};

//  -- END OF FILE --

