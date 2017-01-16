/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Czech
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 * Translated by Petr Zahradnik, Computer Laboratory
 * Blog and video blog Zahradnik se bavi
 * http://www.zahradniksebavi.cz
 *
 */
#ifndef LANGUAGE_CZ_UTF_H
#define LANGUAGE_CZ_UTF_H

#define MAPPER_ISO8859_2
#define DISPLAY_CHARSET_ISO8859_2

#define WELCOME_MSG                         MACHINE_NAME " připraven."
#define MSG_SD_INSERTED                     "Karta vložena"
#define MSG_SD_REMOVED                      "Karta vyjmuta"
#define MSG_LCD_ENDSTOPS                    "Endstopy" // maximalne 8 znaku
#define MSG_MAIN                            "Hlavní nabídka"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Uvolnit motory"
#define MSG_AUTO_HOME                       "Domovská pozice"
#define MSG_AUTO_HOME_X                     "Domů osa X"
#define MSG_AUTO_HOME_Y                     "Domů osa Y"
#define MSG_AUTO_HOME_Z                     "Domů osa Z"
#define MSG_LEVEL_BED_HOMING                "Měření podložky"
#define MSG_LEVEL_BED_WAITING               "Kliknutím spusťte"
#define MSG_LEVEL_BED_NEXT_POINT            "Další bod"
#define MSG_LEVEL_BED_DONE                  "Měření hotovo!"
#define MSG_LEVEL_BED_CANCEL                "Storno"
#define MSG_SET_HOME_OFFSETS                "Nastavit ofsety"
#define MSG_HOME_OFFSETS_APPLIED            "Ofsety nastaveny"
#define MSG_SET_ORIGIN                      "Nastavit počátek"
#define MSG_PREHEAT_1                       "Zahřát PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " Vše"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " Podlož"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " Nast"
#define MSG_PREHEAT_2                       "Zahřát ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " Vše"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " Podlož"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " Nast"
#define MSG_COOLDOWN                        "Zchladit"
#define MSG_SWITCH_PS_ON                    "Zapnout napájení"
#define MSG_SWITCH_PS_OFF                   "Vypnout napájení"
#define MSG_EXTRUDE                         "Vytlačit (extr.)"
#define MSG_RETRACT                         "Zatlačit (retr.)"
#define MSG_MOVE_AXIS                       "Posunout osy"
#define MSG_LEVEL_BED                       "Vyrovnat podložku"
#define MSG_MOVE_X                          "Posunout X"
#define MSG_MOVE_Y                          "Posunout Y"
#define MSG_MOVE_Z                          "Posunout Z"
#define MSG_MOVE_E                          "Extrudér"
#define MSG_MOVE_01MM                       "Posunout o 0,1mm"
#define MSG_MOVE_1MM                        "Posunout o 1mm"
#define MSG_MOVE_10MM                       "Posunout o 10mm"
#define MSG_SPEED                           "Rychlost"
#define MSG_BED_Z                           "Výška podl."
#define MSG_NOZZLE                          "Tryska"
#define MSG_BED                             "Podložka"
#define MSG_FAN_SPEED                       "Rychlost vent."
#define MSG_FLOW                            "Průtok"
#define MSG_CONTROL                         "Ovládání"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fakt"
#define MSG_AUTOTEMP                        "Autoteplota"
#define MSG_ON                              "Zap"
#define MSG_OFF                             "Vyp"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Vybrat"
#define MSG_ACC                             "Zrychl"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retrakt"
#define MSG_A_TRAVEL                        "A-přejezd"
#define MSG_XSTEPS                          "Xkroků/mm"
#define MSG_YSTEPS                          "Ykroků/mm"
#define MSG_ZSTEPS                          "Zkroků/mm"
#define MSG_ESTEPS                          "Ekroků/mm"
#define MSG_E1STEPS                         "E1kroků/mm"
#define MSG_E2STEPS                         "E2kroků/mm"
#define MSG_E3STEPS                         "E3kroků/mm"
#define MSG_E4STEPS                         "E4kroků/mm"
#define MSG_TEMPERATURE                     "Teplota"
#define MSG_MOTION                          "Pohyb"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E na mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Prům."
#define MSG_CONTRAST                        "Kontrast LCD"
#define MSG_STORE_EPROM                     "Uložit nastavení"
#define MSG_LOAD_EPROM                      "Načíst nastavení"
#define MSG_RESTORE_FAILSAFE                "Obnovit výchozí"
#define MSG_REFRESH                         "Obnovit"
#define MSG_WATCH                           "Info obrazovka"
#define MSG_PREPARE                         "Příprava tisku"
#define MSG_TUNE                            "Doladění tisku"
#define MSG_PAUSE_PRINT                     "Pozastavit tisk"
#define MSG_RESUME_PRINT                    "Obnovit tisk"
#define MSG_STOP_PRINT                      "Zastavit tisk"
#define MSG_CARD_MENU                       "Tisknout z SD"
#define MSG_NO_CARD                         "Žádná SD karta"
#define MSG_DWELL                           "Uspáno..."
#define MSG_USERWAIT                        "Čekání na uživ..."
#define MSG_RESUMING                        "Obnovování tisku"
#define MSG_PRINT_ABORTED                   "Tisk zrušen"
#define MSG_NO_MOVE                         "Žádný pohyb."
#define MSG_KILLED                          "PŘERUŠENO. "
#define MSG_STOPPED                         "ZASTAVENO. "
#define MSG_CONTROL_RETRACT                 "Retrakt mm"
#define MSG_CONTROL_RETRACT_SWAP            "Výměna Re.mm"
#define MSG_CONTROL_RETRACTF                "Retraktovat  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Zvednutí Z mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Vyměnit filament"
#define MSG_INIT_SDCARD                     "Načíst SD kartu"
#define MSG_CNG_SDCARD                      "Vyměnit SD kartu"
#define MSG_ZPROBE_OUT                      "Sonda Z mimo podl"
#define MSG_BLTOUCH_SELFTEST                "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   "BLTouch Reset"
#define MSG_HOME                            "Domů"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "první"
#define MSG_ZPROBE_ZOFFSET                  "Z ofset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"
#define MSG_HEATING_FAILED_LCD              "Chyba zahřívání"
#define MSG_ERR_REDUNDANT_TEMP              "REDUND. TEPLOTA"
#define MSG_THERMAL_RUNAWAY                 "TEPLOTNÍ SKOK"
#define MSG_ERR_MAXTEMP                     "VYSOKÁ TEPLOTA"
#define MSG_ERR_MINTEMP                     "NÍZKÁ TEPLOTA"
#define MSG_ERR_MAXTEMP_BED                 "VYS. TEPL. PODL."
#define MSG_ERR_MINTEMP_BED                 "NÍZ. TEPL. PODL."
#define MSG_ERR_Z_HOMING                    "G28 Z ZAKÁZÁNO"
#define MSG_HALTED                          "TISK. ZASTAVENA"
#define MSG_PLEASE_RESET                    "Proveďte reset"
#define MSG_SHORT_DAY                       "d"
#define MSG_SHORT_HOUR                      "h"
#define MSG_SHORT_MINUTE                    "m"
#define MSG_HEATING                         "Zahřívání..."
#define MSG_HEATING_COMPLETE                "Zahřátí hotovo."
#define MSG_BED_HEATING                     "Zahřívání podl."
#define MSG_BED_DONE                        "Podložka hotova."
#define MSG_DELTA_CALIBRATE                 "Delta Kalibrace"
#define MSG_DELTA_CALIBRATE_X               "Kalibrovat X"
#define MSG_DELTA_CALIBRATE_Y               "Kalibrovat Y"
#define MSG_DELTA_CALIBRATE_Z               "Kalibrovat Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Kalibrovat Střed"
#define MSG_INFO_MENU                       "O tiskárně"
#define MSG_INFO_PRINTER_MENU               "Info o tiskárně"
#define MSG_INFO_STATS_MENU                 "Statistika"
#define MSG_INFO_BOARD_MENU                 "Info o desce"
#define MSG_INFO_THERMISTOR_MENU            "Termistory"
#define MSG_INFO_EXTRUDERS                  "Extrudery"
#define MSG_INFO_BAUDRATE                   "Rychlost"
#define MSG_INFO_PROTOCOL                   "Protokol"
#define MSG_LIGHTS_ON                       "Osvětlení Zap"
#define MSG_LIGHTS_OFF                      "Osvětlení Vyp"
#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Počet tisku"
  #define MSG_INFO_COMPLETED_PRINTS         "Dokončeno"
  #define MSG_INFO_PRINT_TIME               "Celkový čas"
  #define MSG_INFO_PRINT_LONGEST            "Nejdelší tisk"
  #define MSG_INFO_PRINT_FILAMENT           "Celkem vytlačeno"
#else
  #define MSG_INFO_PRINT_COUNT              "Tisky"
  #define MSG_INFO_COMPLETED_PRINTS         "Hotovo"
  #define MSG_INFO_PRINT_TIME               "Čas"
  #define MSG_INFO_PRINT_LONGEST            "Nejdelší"
  #define MSG_INFO_PRINT_FILAMENT           "Vytlačeno"
#endif
#define MSG_INFO_MIN_TEMP                   "Teplota min"
#define MSG_INFO_MAX_TEMP                   "Teplota max"
#define MSG_INFO_PSU                        "Nap. zdroj"
#define MSG_DRIVE_STRENGTH                  "Buzení motoru"
#define MSG_DAC_PERCENT                     "Motor %"
#define MSG_DAC_EEPROM_WRITE                "Uložit do EEPROM"

#define MSG_FILAMENT_CHANGE_HEADER          "VÝMĚNA FILAMENTU"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "CO DÁL?"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Ještě vytlačit"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Obnovit tisk"

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Čekejte prosím"
  #define MSG_FILAMENT_CHANGE_INIT_2          "na zahájení"
  #define MSG_FILAMENT_CHANGE_INIT_3          "výměny filamentu"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Čekejte prosím"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "na vysunutí"
  #define MSG_FILAMENT_CHANGE_UNLOAD_3        "filamentu"
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Vložte filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "a stiskněte"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "tlačítko..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Čekejte prosím"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "na zavedení"
  #define MSG_FILAMENT_CHANGE_LOAD_3          "filamentu"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Čekejte prosím"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "na vytlačení"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_3       "filamentu"
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Čekejte prosím"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "na pokračování"
  #define MSG_FILAMENT_CHANGE_RESUME_3        "tisku"
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Čekejte..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Vysouvání..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Vložte, klikněte"
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Zavadení..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Vytlačování..."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Pokračování..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_CZ_H
