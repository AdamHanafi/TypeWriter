import processing.serial.*;

Serial myPort;
String portName = "/dev/tty.usbmodem1411";

//Boolean pressing = false;
//Boolean pressedOnce = true;
//int pressCycle = 0;

void setup() {
  size(400, 400);
  myPort = new Serial(this, portName, 9600);
  background(0);
}

void draw() {
  //if (pressing) {
  //  //print more, and delay, but delay first,
  //  pressCycle++;
  //  if (pressCycle > 30) {
  //    printSerial(key);
  //    println("repeat");
  //    pressCycle = 0;
  //  }
  //}

}

void keyPressed() {
  background(0);
  //print to serial so arduino responds
      char c = key;
    int code = keyCode;
    println("." + c + "." + "code: " + code);

    if (c == ' ') {
      //space
      textSize(140);
      text("space", 10, 250);
    } else {
      textSize(280);
      text(c, 120, 270);
    }

    switch (code) {  
    case 10:
      printSerial('R');//for enter button
      println("return");
      return;
    default:
      break;
    }

    printSerial(c);
}

void keyReleased() {
  background(0);
  //pressing = false;
  //pressedOnce = false;
}

void printSerial(char c) {
  if (myPort != null) {
    myPort.write(c);  
  }
}