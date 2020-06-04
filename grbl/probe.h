/*
  probe.h - An embedded CNC Controller with rs274/ngc (g-code) support

  Part of GrblHAL

  Copyright (c) 2020 Terje Io

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __PROBE_H__
#define __PROBE_H__

// Values that define the probing state machine.

typedef enum {
    Probing_Off = 0,
    Probing_Active
} probing_state_t;

typedef union {
    uint8_t value;
    struct {
        uint8_t triggered   :1,
                connected   :1,
                unassigned  :6;
    };
} probe_state_t;

#endif