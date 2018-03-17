# TypeWriter
Typewriter sketch for controlling an electric brother typewriter. Can print from SD card or take computer keyboard input.


There are 8 + and 8 - pins in the typewriter, each connected to their dedicated transistors. When the Arduino opens two transistors (in a combination of + and - pins), a path is opened for the typewriter to read input and print a character. I mapped out all the characters for every combination of + and - inputs (there are 64, not including special characters that are activated with the shift key) and now have the Arduino controlled through serial input through a Processing program that takes my laptop keyboard input. There is an optional FilePrint mode that allows you to print a txt file automatically with an SD card shield.
