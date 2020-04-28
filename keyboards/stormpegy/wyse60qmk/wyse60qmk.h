/* Copyright 2019 Stormpegy
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

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_Default( \
    K000, K010, K001, K011,     K002, K012, K003, K013,     K014, K005, K015, K006,     K016, K007, K017, K008,     K018, K009, \
    K020, K030, K021, K031, K022, K032, K023, K033, K024, K034, K025, K035, K026, K036, K027,           K037, K028, K038, K029, \
    K040, K050, K041, K051, K042, K052, K043, K053, K044, K054, K045, K055, K046, K056, K047,           K057, K048, K058, K049, \
    K060, K070, K061, K071, K062, K072, K063, K073, K064, K074, K065, K075,       K076, K067,           K077, K068, K078, K069, \
    K080, K090, K081, K091, K082, K092, K083, K093, K084, K094, K085, K095, K086, K096, K087,           K097, K088, K098, K089, \
    K100,                               K103,                         K115, K106, K116, K107,           K117, K108             \
) \
{ \
 /*ROW0*/   { K000, K001, K002, K003, KC_NO, K005, K006, K007, K008, K009  }, \
/*ROW1*/    { K010, K011, K012, K013, K014, K015, K016, K017, K018, KC_NO }, \
/*ROW2*/    { K020, K021, K022, K023, K024, K025, K026, K027, K028, K029}, \
/*ROW3*/    { K030, K031, K032, K033, K034, K035, K036, K037, K038, KC_NO}, \
/*ROW4*/    { K040, K041, K042, K043, K044, K045, K046, K047, K048, K049}, \
/*ROW5*/    { K050, K051, K052, K053, K054, K055, K056, K057, K058, KC_NO}, \
/*ROW6*/    { K060, K061, K062, K063, K064, K065, KC_NO, K067, K068, K069}, \
/*ROW7*/    { K070, K071, K072, K073, K074, K075, K076, K077, K078, KC_NO}, \
/*ROW8*/    { K080, K081, K082, K083, K084, K085, K086, K087, K088, K089}, \
/*ROW9*/    { K090, K091, K092, K093, K094, K095, K096, K097, K098, KC_NO}, \
/*ROW10*/   { K100, KC_NO, KC_NO, K103, KC_NO, KC_NO, K106, K107, K108, KC_NO}, \
/*ROW11*/   { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K115, K116, K117, KC_NO, KC_NO}, \
}
