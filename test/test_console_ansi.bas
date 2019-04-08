5 SYS 1: REM turn extensions on
10 REM Clear screen
20 PRINT CHR$(147)
30 REM Print some stuff at screen locations
40 FOR L=10 TO 20: LOCATE L,20:PRINT "At ";L;",20":NEXT L
50 REM Move cursor to location and save location
60 LOCATE 13,22:ANSISC 0
70 REM Move cursor to location, erase part of the line
80 LOCATE 15,22:ANSIEL 0
90 REM Restore cursor location and print something
100 ANSIRC 0:PRINT "Cursor restore worked"
110 LOCATE 24,1
