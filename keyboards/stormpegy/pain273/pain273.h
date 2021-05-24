/* Copyright 2021 Stormpegy
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

#define LAYOUT_all(\
    L00, L01, L02, L03, L04, L05, L06, L07, L08, L09, \
    L10, L11, L12, L13, L14, L15, L16, L17, L18,      \
         L21, L22, L23, L24, L25, L26, L27, L28,      \
) \
    { \
    { L00, L01, L02, L03, L04, L05, L06, L07, L08, L09 }, \
    { L10, L11, L12, L13, L14, L15, L16, L17, L18      }, \
    {      L21, L22, L23, L24, L25, L26, L27, L28      }  \
}