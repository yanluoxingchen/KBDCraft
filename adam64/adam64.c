/* Copyright 2022 yanluoxingchen
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
#include "adam64.h"

const is31_led PROGMEM g_is31_leds[DRIVER_LED_TOTAL] = {

    {0, CS14_SW1, CS13_SW1, CS15_SW1},
    {0, CS14_SW2, CS13_SW2, CS15_SW2},
    {0, CS14_SW3, CS13_SW3, CS15_SW3},
    {0, CS14_SW4, CS13_SW4, CS15_SW4},
    {0, CS14_SW5, CS13_SW5, CS15_SW5},
    {0, CS14_SW6, CS13_SW6, CS15_SW6},
    {0, CS14_SW7, CS13_SW7, CS15_SW7},
    {0, CS32_SW1, CS31_SW1, CS33_SW1},
    {0, CS32_SW2, CS31_SW2, CS33_SW2},
    {0, CS32_SW3, CS31_SW3, CS33_SW3},
    {0, CS32_SW4, CS31_SW4, CS33_SW4},
    {0, CS32_SW5, CS31_SW5, CS33_SW5},
    {0, CS32_SW6, CS31_SW6, CS33_SW6},
    {0, CS32_SW7, CS31_SW7, CS33_SW7},

    {0, CS23_SW1, CS24_SW1, CS22_SW1},
    {0, CS23_SW2, CS24_SW2, CS22_SW2},
    {0, CS23_SW3, CS24_SW3, CS22_SW3},
    {0, CS23_SW4, CS24_SW4, CS22_SW4},
    {0, CS23_SW5, CS24_SW5, CS22_SW5},
    {0, CS23_SW6, CS24_SW6, CS22_SW6},
    {0, CS23_SW7, CS24_SW7, CS22_SW7},
    {0, CS35_SW1, CS34_SW1, CS36_SW1},
    {0, CS35_SW2, CS34_SW2, CS36_SW2},
    {0, CS35_SW3, CS34_SW3, CS36_SW3},
    {0, CS35_SW4, CS34_SW4, CS36_SW4},
    {0, CS35_SW5, CS34_SW5, CS36_SW5},
    {0, CS35_SW6, CS34_SW6, CS36_SW6},
    {0, CS35_SW7, CS34_SW7, CS36_SW7},

    {0, CS17_SW1, CS16_SW1, CS18_SW1},
    {0, CS17_SW2, CS16_SW2, CS18_SW2},
    {0, CS17_SW3, CS16_SW3, CS18_SW3},
    {0, CS17_SW4, CS16_SW4, CS18_SW4},
    {0, CS17_SW5, CS16_SW5, CS18_SW5},
    {0, CS17_SW6, CS16_SW6, CS18_SW6},
    {0, CS17_SW7, CS16_SW7, CS18_SW7},
    {0, CS26_SW1, CS25_SW1, CS27_SW1},
    {0, CS26_SW2, CS25_SW2, CS27_SW2},
    {0, CS26_SW3, CS25_SW3, CS27_SW3},
    {0, CS26_SW4, CS25_SW4, CS27_SW4},
    {0, CS26_SW5, CS25_SW5, CS27_SW5},
    {0, CS26_SW7, CS25_SW7, CS27_SW7},

    {0, CS20_SW1, CS19_SW1, CS21_SW1},
    {0, CS20_SW2, CS19_SW2, CS21_SW2},
    {0, CS20_SW3, CS19_SW3, CS21_SW3},
    {0, CS20_SW4, CS19_SW4, CS21_SW4},
    {0, CS20_SW5, CS19_SW5, CS21_SW5},
    {0, CS20_SW6, CS19_SW6, CS21_SW6},
    {0, CS20_SW7, CS19_SW7, CS21_SW7},
    {0, CS29_SW1, CS28_SW1, CS30_SW1},
    {0, CS29_SW2, CS28_SW2, CS30_SW2},
    {0, CS29_SW3, CS28_SW3, CS30_SW3},
    {0, CS29_SW4, CS28_SW4, CS30_SW4},
    {0, CS29_SW5, CS28_SW5, CS30_SW5},
    {0, CS29_SW6, CS28_SW6, CS30_SW6},
    {0, CS29_SW7, CS28_SW7, CS30_SW7},

    {0, CS9_SW1, CS10_SW1, CS8_SW1},
    {0, CS9_SW2, CS10_SW2, CS8_SW2},
    {0, CS9_SW3, CS10_SW3, CS8_SW3},
    {0, CS9_SW6, CS10_SW6, CS8_SW6},
    {0, CS2_SW3, CS1_SW3, CS3_SW3},
    {0, CS2_SW4, CS1_SW4, CS3_SW4},
    {0, CS2_SW5, CS1_SW5, CS3_SW5},
    {0, CS2_SW6, CS1_SW6, CS3_SW6},
    {0, CS2_SW7, CS1_SW7, CS3_SW7}

};

led_config_t g_led_config = {
	{
		{   0,   1,    2,    3,     4,     5,    6,     7,     8,     9,    10,   11,   12,    13   },
        {   14,  15,   16,   17,    18,    19,   20,    21,    22,    23,   24,   25,   26,    27   },
		{   28,  29,   30,   31,    32,    33,   34,    35,    36,    37,   38,   39,   NO_LED,40   },
		{   41,  42,   43,   44,    45,    46,   47,    48,    49,    50,   51,   52,   53,    54   },
		{   55,  56,   57,   NO_LED,NO_LED,58,   NO_LED,NO_LED,NO_LED,59,   60,   61,   62,    63   }
	},{
    //    1        2         3         4         5         6         7          8          9          10         11         12         13         14         15         
		{0,0},  {16, 0},  {32, 0},  {48, 0},  {64, 0},  {80, 0},  {96, 0},  {112, 0},  {128, 0},  {144, 0},  {160, 0},  {176, 0},  {192, 0},   {208, 0}, 
	    {0,10}, {16, 10}, {32, 10}, {48, 10}, {64, 10}, {80, 10}, {96, 10}, {112, 10}, {128, 10}, {144, 10}, {160, 10}, {176, 10}, {192, 10},  {208, 10}, 
	    {0,20}, {16, 20}, {32, 20}, {48, 20}, {64, 20}, {80, 20}, {96, 20}, {112, 20}, {128, 20}, {144, 20}, {160, 20}, {176, 20},             {208, 20}, 
	    {0,30}, {16, 30}, {32, 30}, {48, 30}, {64, 30}, {80, 30}, {96, 30}, {112, 30}, {128, 30}, {144, 30}, {160, 30}, {176, 30}, {192, 30},  {208, 30}, 
        {0,40}, {16, 40}, {32, 40},                     {80, 40},                                 {144, 40}, {160, 40}, {176, 40}, {192, 40},  {208, 40}, 

	},{
    //  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15  
		4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,    
		4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,     
		4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,        4,     
		4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,    
        4,   4,   4,             4,                  4,   4,   4,   4,   4,   
    
	}
    
};

