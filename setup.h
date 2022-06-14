const char DB0; // Set if using 8bit bus 
const char DB1; // Set if using 8bit bus 
const char DB2; // Set if using 8bit bus 
const char DB3; // Set if using 8bit bus 

const char DB4 = 8;
const char DB5 = 9;
const char DB6 = 10;
const char DB7 = 11;
const char REG = 12;
const char ENE = 13;

const short pulseWidth = 4;
const char lcdOnPin = A2;
short cursorPosition = 1;
//--------------------------------
const char row1 = A0;
const char row2 = 2;
const char row3 = 3;
const char row4 = 4;

const char col1 = 5;
const char col2 = 6;
const char col3 = 7;

const short rowsLength = 4;
const short colsLength = 3;
const char rows[rowsLength] = {row1, row2, row3, row4}; // Y
const char cols[colsLength] = {col1, col2, col3};       // X

const String keys[rowsLength][colsLength] = {
  {"1", "2", "3"},
  {"4", "5", "6"},
  {"7", "8", "9"},
  {"*", "0", "#"}
};
//--------------------------------
const char servoData = A5;
//--------------------------------
void setup()
{
  pinMode(REG, OUTPUT); // REGISTER SELECT PIN
  pinMode(ENE, OUTPUT); // ENABLE PIN

  pinMode(DB4, OUTPUT);
  pinMode(DB5, OUTPUT);
  pinMode(DB6, OUTPUT);
  pinMode(DB7, OUTPUT);
  //--------------------------------

  pinMode(row1, OUTPUT);
  pinMode(row2, OUTPUT);
  pinMode(row3, OUTPUT);
  pinMode(row4, OUTPUT);

  pinMode(col1, INPUT);
  pinMode(col2, INPUT);
  pinMode(col3, INPUT);

  pinMode(servoData, OUTPUT);
  pinMode(lcdOnPin, OUTPUT);
  Serial.begin(57600);
}

//----------------------------------------------------------------------
