#include "setup.h";
#include "ZLCDFunctions.h";
#include "servoControl.h";
#include "keypad.h";
#include <EEPROM.h>


bool doonce = true;
String savedPassword = "";
String inputPassword = "";

bool star(String s = "") {
  if (s == "*") {
    backspace();
    inputPassword.remove(inputPassword.length() - 1);
    return true;
  }
  return false;
}
bool hashtag(String s = "") {
  if (s == "#") {
    if (savedPassword == inputPassword) {
      clearDisplay();
      lcdPrint("Access Granted!!");
      secondLine();
      inputPassword = "";
    }
    else {
      clearDisplay();
      lcdPrint("Access Denied!!");
      secondLine();
      inputPassword = "";
    }
    return true;
  }
  return false;
}


bool shown = false;
void passwordScreen() {
  if (shown == false) {
    clearDisplay();
    lcdPrint("Enter Password: ");
    secondLine();
    shown = true;
  }
  if (btnReleased() != "") {
    if (!star(lastBtn) && !hashtag(lastBtn)) {
      lcdPrint("*");
      inputPassword += lastBtn;
    }
    lastBtn = "";
  }
}

void setPassword () {
  EEPROM.write(0, 7);
  EEPROM.write(1, 6);
  EEPROM.write(2, 5);
  EEPROM.write(3, 4);
}

void loop() {
  if (doonce == true)
  {
    bootUp();
    savedPassword += EEPROM.read(0);
    savedPassword += EEPROM.read(1);
    savedPassword += EEPROM.read(2);
    savedPassword += EEPROM.read(3);
    //setPassword();
    doonce = false;
  }
  passwordScreen();
}


/*
     if (btnReleased() != "") {
       lcdPrint(lastBtn);
       lastBtn = "";
     }
*/
