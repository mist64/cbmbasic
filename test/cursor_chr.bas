10 SYS 1: REM Extensions on for LOCATE command
20 ? CHR$(147);"Screen clear and home";
30 ? CHR$(17);CHR$(17);CHR$(17);"DOWN 3 lines";
40 ? CHR$(17); CHR$(29); CHR$(29); CHR$(29);"Down 1, right 3";
50 ? CHR$(17);CHR$(17);CHR$(17);
60 ? CHR$(145); CHR$(157); CHR$(157); CHR$(157);"Down 3, up 1, left 3";
70 ? CHR$(19); CHR$(17); CHR$(17);"Home, down 2";
80 LOCATE 20,1
