/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// MRDT 2022 => Teensy 4.1 Timers
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <stdint.h>

static const uint8_t    INVALID    =  0;
static const uint8_t    T0_A       =  1;    // PIN_CONFLICTS    1, 44, 45             Arduino::analogWrite or roveware::PwmRead
static const uint8_t    T0_B       =  2;    // PIN_CONFLICTS    0, 42, 43             Arduino::analogWrite or RoveWare::PwmRead
static const uint8_t    T0_C       =  3;    // PIN_CONFLICTS    24, 46, 47            Arduino::analogWrite or RoveWare::PwmRead 
static const uint8_t    T0_D       =  4;    // PIN_CONFLICTS    7, 8, 25              Arduino::analogWrite or RoveWare::PwmRead
static const uint8_t    T1_A       =  5;    // PIN_CONFLICTS    4, 33                 Arduino::analogWrite or RoveWare::PwmRead
static const uint8_t    T1_B       =  6;    // NO_CONFLICTS     5                     Pin not wired on TI TivaC1294XL Launchpad
static const uint8_t    T1_C       =  7;    // PIN_CONFLICTS    6, 9                  Arduino::analogWrite or RoveWare::PwmRead
static const uint8_t    T1_D       =  8;    // PIN_CONFLICTS    36, 37                Arduino::analogWrite or RoveWare::PwmRead
static const uint8_t    T2_A       =  9;    // NO_CONFLICTS     54                    Pin not wired on TI TivaC1294XL Launchpad
static const uint8_t    T2_B       = 10;    // PIN_CONFLICTS    28, 29                Arduino::analogWrite or RoveWare::PwmRead
static const uint8_t    T2_C       = 11;    // NO_CONFLICTS     51                    Pin not wired on TI TivaC1294XL Launchpad
static const uint8_t    T3_A       = 12;    // NO_CONFLICTS     22                    Pin not wired on TI TivaC1294XL Launchpad
static const uint8_t    T3_B       = 13;    // NO_CONFLICTS     23                    Pin not wired on TI TivaC1294XL Launchpad
static const uint8_t    T3_C       = 14;    // NO_CONFLICTS     2,3                   Pin not wired on TI TivaC1294XL Launchpad
static const uint8_t    QT0_A      = 15;    // NO_CONFLICTS     10                    Pin not wired on TI TivaC1294XL Launchpad
static const uint8_t    QT0_B      = 16;    // NO_CONFLICTS     12                    Pin not wired on TI TivaC1294XL Launchpad
static const uint8_t    QT0_C      = 17;    // NO_CONFLICTS     11                    Pin not wired on TI TivaC1294XL Launchpad
static const uint8_t    QT1_A      = 18;    // NO_CONFLICTS     13                    Pin not wired on TI TivaC1294XL Launchpad
static const uint8_t    QT2_A      = 19;    // NO_CONFLICTS     19                    Pin not wired on TI TivaC1294XL Launchpad
static const uint8_t    QT2_B      = 20;    // NO_CONFLICTS     18                    Pin not wired on TI TivaC1294XL Launchpad
static const uint8_t    QT2_C      = 21;    // NO_CONFLICTS     14                    Pin not wired on TI TivaC1294XL Launchpad
static const uint8_t    QT2_D      = 22;    // NO_CONFLICTS     15
static const uint8_t    MAX_TIMER  = 22;