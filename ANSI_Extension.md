# ANSI display extensions

Use "SYS" 1 to turn on the extensions.

#ANSISGM Attr, Foreground, Background
	Set Graphics Mode.  See [ANSI escape sequences](http://ascii-table.com/ansi-escape-sequences.php) for the values.

#ANSIEL 0
	Erase line from current position to end of line

#ANSISC 0
	Save current cursor position.

#ANSIRC 0
	Restore cursor position

Note that these are highly dependant on the terminal program you are using.  Testing on PuTTY showed that blink does not work.  Instead, you get reverse screen with a dimmer background color.

# Compatibility

It has been tested with

* Raspian on a Raspberry PI 0 W using PuTTY running on Windows

