# TypeWriter
Typewriter sketch for controlling an electric brother typewriter. Can print from SD card or take computer keyboard input.

There are 8 + and 8 - pins in the typewriter, each connected to their dedicated transistors. When the Arduino opens two transistors (in a combination of + and - pins), a path is opened for the typewriter to read input and print a character. I mapped out all the characters for every combination of + and - inputs (there are 64, not including special characters that are activated with the shift key) and now have the Arduino controlled through serial input through a Processing program that takes my laptop keyboard input. There is an optional FilePrint sketch that allows you to print a txt file automatically with an SD card shield.

* filePrinter.ino: Arduino sketch allowing autonomous typing from .txt file stored in SD card.
* TypeWriter.ino: Arduino sketch used along with Typewriter.pde to use computer keyboard input to control the typewriter.
* utf.txt: sample file to be stored in an SD card. Note: a SEEED SD Card shield was used for this project, but any SD shield should do the job.
* pin mapping.png: my *Brother Electronic typewriter*'s mapping to the control pins on the Arduino

## First Working Transistor Network
![First Working Transistor Network](https://challengepost-s3-challengepost.netdna-ssl.com/photos/production/software_photos/000/347/627/datas/gallery.jpg)

## Typewriter Printing History Homework from SD
![Typewriter with printed history homework](https://challengepost-s3-challengepost.netdna-ssl.com/photos/production/software_photos/000/347/626/datas/gallery.jpg)

### [Youtube demo](https://youtu.be/vh4UktaP08s)
