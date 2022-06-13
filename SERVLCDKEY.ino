#include "setup.h";
#include "ZLCDFunctions.h";
#include "servoControl.h";
#include "keypad.h";
#include <EEPROM.h>
String lastReleased = "";

bool doonce = true;

void passwordScreen() {
  clearDisplay();
  lcdPrint("Enter Password: ");
  secondLine();
}

void star(String s = "") {
  if (s == "*") {
    clearDisplay();
    secondLine();
    lcdPrint(String(EEPROM.read(0)));
    lcdPrint(String(EEPROM.read(1)));
    lcdPrint(String(EEPROM.read(2)));
    lcdPrint(String(EEPROM.read(3)));

    lastBtn = "";
  }
}
void hashTag(String s = "") {
  if (s == "#") {
    backspace();
    lastBtn = "";
  }
}

void setPassword () {
  EEPROM.write(0, 7);
  EEPROM.write(1, 6);
  EEPROM.write(2, 5);
  EEPROM.write(3, 4);
}

String digitOne;
String digitTwo;
String digitThree;
String digitFour;
int currentDigit = 0;

void loop()
{
  if (doonce == true)
  {
    bootUp();
    passwordScreen();
    doonce = false;
    //setPassword();
  }

  if (btnReleased() != "") {
    lastReleased = lastBtn;
    star(lastBtn);
    hashTag(lastBtn);
    lcdPrint(lastBtn);
    lastBtn = "";
  }
  servoControl(lastReleased.toInt() * 20);
}
