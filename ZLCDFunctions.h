

void enable()
{
  digitalWrite(ENE, HIGH);
  delayMicroseconds(pulseWidth);
  digitalWrite(ENE, LOW);
}

void sendBus (int b7, int b6, int b5, int b4, int b3, int b2, int b1, int b0, bool bit4 = true, int rs = 1) {
  if (bit4 == true) {
    digitalWrite(REG, rs);
    delayMicroseconds(pulseWidth);

    digitalWrite(DB7, b7);
    digitalWrite(DB6, b6);
    digitalWrite(DB5, b5);
    digitalWrite(DB4, b4);
    enable();

    digitalWrite(DB7, b3);
    digitalWrite(DB6, b2);
    digitalWrite(DB5, b1);
    digitalWrite(DB4, b0);
    enable();
  }
  else {
    digitalWrite(REG, rs);
    delayMicroseconds(pulseWidth);

    digitalWrite(DB7, b7);
    digitalWrite(DB6, b6);
    digitalWrite(DB5, b5);
    digitalWrite(DB4, b4);
    digitalWrite(DB3, b3);
    digitalWrite(DB2, b2);
    digitalWrite(DB1, b1);
    digitalWrite(DB0, b0);
    enable();

  }
}
void configureScreen()
{
  digitalWrite(REG, LOW);
  delayMicroseconds(pulseWidth);

  digitalWrite(DB7, LOW);
  digitalWrite(DB6, LOW);
  digitalWrite(DB5, HIGH);
  digitalWrite(DB4, LOW);
  enable();

  sendBus(0, 0, 1, 0, 1, 1, 0, 0, true, 0);

  ////need to add 8BIT configuration
}

void clearDisplay()
{
  cursorPosition = 1;
  sendBus(0, 0, 0, 0, 0, 0, 0, 1, true, 0);
}

void enableCursor()
{
  sendBus(0, 0, 0, 0, 1, 1, 1, 1, true, 0);
}

void disableCursor()
{
  sendBus(0, 0, 0, 0, 1, 1, 0, 0, true, 0);
}

void secondLine()
{
  sendBus(1, 1, 0, 0, 0, 0, 0, 0, true, 0);
  cursorPosition = 1;
}

void firstLine()
{
  sendBus(1, 0, 0, 0, 0, 0, 0, 0, true, 0);
  cursorPosition = 1;
}

//----------------------------------------------------------------------
void lcdShowChar(char letter)
{
  switch (letter)
  {

    case '0':
      enableCursor();
      sendBus(0, 0, 1, 1, 0, 0, 0, 0, true, 1);
      break;

    case '1':
      enableCursor();
      sendBus(0, 0, 1, 1, 0, 0, 0, 1, true, 1);
      break;

    case '2':
      enableCursor();
      sendBus(0, 0, 1, 1, 0, 0, 1, 0, true, 1);
      break;

    case '3':
      enableCursor();
      sendBus(0, 0, 1, 1, 0, 0, 1, 1, true, 1);
      break;

    case '4':
      enableCursor();
      sendBus(0, 0, 1, 1, 0, 1, 0, 0, true, 1);
      break;

    case '5':
      enableCursor();
      sendBus(0, 0, 1, 1, 0, 1, 0, 1, true, 1);
      break;

    case '6':
      enableCursor();
      sendBus(0, 0, 1, 1, 0, 1, 1, 0, true, 1);
      break;

    case '7':
      enableCursor();
      sendBus(0, 0, 1, 1, 0, 1, 1, 1, true, 1);
      break;

    case '8':
      enableCursor();
      sendBus(0, 0, 1, 1, 1, 0, 0, 0, true, 1);
      break;

    case '9':
      enableCursor();
      sendBus(0, 0, 1, 1, 1, 0, 0, 1, true, 1);
      break;

    case 'A':
      enableCursor();
      sendBus(0, 1, 0, 0, 0, 0, 0, 1, true, 1);
      break;

    case 'a':
      enableCursor();
      sendBus(0, 1, 1, 0, 0, 0, 0, 1, true, 1);
      break;

    case 'B':
      enableCursor();
      sendBus(0, 1, 0, 0, 0, 0, 1, 0, true, 1);
      break;

    case 'b':
      enableCursor();
      sendBus(0, 1, 1, 0, 0, 0, 1, 0, true, 1);
      break;

    case 'C':
      enableCursor();
      sendBus(0, 1, 0, 0, 0, 0, 1, 1, true, 1);
      break;

    case 'c':
      enableCursor();
      sendBus(0, 1, 1, 0, 0, 0, 1, 1, true, 1);
      break;

    case 'D':
      enableCursor();
      sendBus(0, 1, 0, 0, 0, 1, 0, 0, true, 1);
      break;

    case 'd':
      enableCursor();
      sendBus(0, 1, 1, 0, 0, 1, 0, 0, true, 1);
      break;

    case 'E':
      enableCursor();
      sendBus(0, 1, 0, 0, 0, 1, 0, 1, true, 1);
      break;

    case 'e':
      enableCursor();
      sendBus(0, 1, 1, 0, 0, 1, 0, 1, true, 1);
      break;

    case 'F':
      enableCursor();
      sendBus(0, 1, 0, 0, 0, 1, 1, 0, true, 1);
      break;

    case 'f':
      enableCursor();
      sendBus(0, 1, 1, 0, 0, 1, 1, 0, true, 1);
      break;

    case 'G':
      enableCursor();
      sendBus(0, 1, 0, 0, 0, 1, 1, 1, true, 1);
      break;

    case 'g':
      enableCursor();
      sendBus(0, 1, 1, 0, 0, 1, 1, 1, true, 1);
      break;

    case 'H':
      enableCursor();
      sendBus(0, 1, 0, 0, 1, 0, 0, 0, true, 1);
      break;

    case 'h':
      enableCursor();
      sendBus(0, 1, 1, 0, 1, 0, 0, 0, true, 1);
      break;

    case 'I':
      enableCursor();
      sendBus(0, 1, 0, 0, 1, 0, 0, 1, true, 1);
      break;

    case 'i':
      enableCursor();
      sendBus(0, 1, 1, 0, 1, 0, 0, 1, true, 1);
      break;

    case 'J':
      enableCursor();
      sendBus(0, 1, 0, 0, 1, 0, 1, 0, true, 1);
      break;

    case 'j':
      enableCursor();
      sendBus(0, 1, 1, 0, 1, 0, 1, 0, true, 1);
      break;

    case 'K':
      enableCursor();
      sendBus(0, 1, 0, 0, 1, 0, 1, 1, true, 1);
      break;

    case 'k':
      enableCursor();
      sendBus(0, 1, 1, 0, 1, 0, 1, 1, true, 1);
      break;

    case 'L':
      enableCursor();
      sendBus(0, 1, 0, 0, 1, 1, 0, 0, true, 1);
      break;

    case 'l':
      sendBus(0, 1, 1, 0, 1, 1, 0, 0, true, 1);
      break;

    case 'M':
      enableCursor();
      sendBus(0, 1, 0, 0, 1, 1, 0, 1, true, 1);
      break;

    case 'm':
      enableCursor();
      sendBus(0, 1, 1, 0, 1, 1, 0, 1, true, 1);
      break;

    case 'N':
      enableCursor();
      sendBus(0, 1, 0, 0, 1, 1, 1, 0, true, 1);
      break;

    case 'n':
      enableCursor();
      sendBus(0, 1, 1, 0, 1, 1, 1, 0, true, 1);
      break;

    case 'O':
      enableCursor();
      sendBus(0, 1, 0, 0, 1, 1, 1, 1, true, 1);
      break;

    case 'o':
      enableCursor();
      sendBus(0, 1, 1, 0, 1, 1, 1, 1, true, 1);
      break;

    case 'P':
      enableCursor();
      sendBus(0, 1, 0, 1, 0, 0, 0, 0, true, 1);
      break;

    case 'p':
      enableCursor();
      sendBus(0, 1, 1, 1, 0, 0, 0, 0, true, 1);
      break;

    case 'Q':
      enableCursor();
      sendBus(0, 1, 0, 1, 0, 0, 0, 1, true, 1);
      break;

    case 'q':
      enableCursor();
      sendBus(0, 1, 1, 1, 0, 0, 0, 1, true, 1);
      break;

    case 'R':
      enableCursor();
      sendBus(0, 1, 0, 1, 0, 0, 1, 0, true, 1);
      break;

    case 'r':
      enableCursor();
      sendBus(0, 1, 1, 1, 0, 0, 1, 0, true, 1);
      break;

    case 'S':
      enableCursor();
      sendBus(0, 1, 0, 1, 0, 0, 1, 1, true, 1);
      break;

    case 's':
      enableCursor();
      sendBus(0, 1, 1, 1, 0, 0, 1, 1, true, 1);
      break;

    case 'T':
      enableCursor();
      sendBus(0, 1, 0, 1, 0, 1, 0, 0, true, 1);
      break;

    case 't':
      enableCursor();
      sendBus(0, 1, 1, 1, 0, 1, 0, 0, true, 1);
      break;

    case 'U':
      enableCursor();
      sendBus(0, 1, 0, 1, 0, 1, 0, 1, true, 1);
      break;

    case 'u':
      enableCursor();
      sendBus(0, 1, 1, 1, 0, 1, 0, 1, true, 1);
      break;

    case 'V':
      enableCursor();
      sendBus(0, 1, 0, 1, 0, 1, 1, 0, true, 1);
      break;

    case 'v':
      enableCursor();
      sendBus(0, 1, 1, 1, 0, 1, 1, 0, true, 1);
      break;

    case 'W':
      enableCursor();
      sendBus(0, 1, 0, 1, 0, 1, 1, 1, true, 1);
      break;

    case 'w':
      enableCursor();
      sendBus(0, 1, 1, 1, 0, 1, 1, 1, true, 1);
      break;

    case 'X':
      enableCursor();
      sendBus(0, 1, 0, 1, 1, 0, 0, 0, true, 1);
      break;

    case 'x':
      enableCursor();
      sendBus(0, 1, 1, 1, 1, 0, 0, 0, true, 1);
      break;

    case 'Y':
      enableCursor();
      sendBus(0, 1, 0, 1, 1, 0, 0, 1, true, 1);
      break;

    case 'y':
      enableCursor();
      sendBus(0, 1, 1, 1, 1, 0, 0, 1, true, 1);
      break;

    case 'Z':
      enableCursor();
      sendBus(0, 1, 0, 1, 1, 0, 1, 0, true, 1);
      break;

    case 'z':
      enableCursor();
      sendBus(0, 1, 1, 1, 1, 0, 1, 0, true, 1);
      break;

    case ' ':
      enableCursor();
      sendBus(0, 0, 1, 0, 0, 0, 0, 0, true, 1);
      break;

    case '*':
      enableCursor();
      sendBus(0, 0, 1, 0, 1, 0, 1, 0, true, 1);
      break;

    case ':':
      enableCursor();
      sendBus(0, 0, 1, 1, 1, 0, 1, 0, true, 1);
      break;

    case '?':
      enableCursor();
      sendBus(0, 0, 1, 1, 1, 1, 1, 1, true, 1);
      break;

    case '#':
      enableCursor();
      sendBus(0, 0, 1, 0, 0, 0, 1, 1, true, 1);
      break;

    case '!':
      enableCursor();
      sendBus(0, 0, 1, 0, 0, 0, 0, 1, true, 1);
      break;
  }
}


void lcdPrint(String sentence, short lineLength = 16)
{
  delayMicroseconds(pulseWidth);
  if (sentence.length() <= lineLength - cursorPosition)
  {
    for (int i = 0; i < sentence.length(); i++)
    {
      lcdShowChar(sentence[i]);
      cursorPosition++;
    }
  }
  else
  {
    for (int i = 0; i < lineLength; i++)
    {
      lcdShowChar(sentence[i]);
    }
    secondLine();
    for (int i = lineLength; i < lineLength * 2; i++)
    {
      lcdShowChar(sentence[i]);
    }
  }
  return;
}

void bootUp () {
  digitalWrite(lcdOnPin, LOW);
  delayMicroseconds(pulseWidth);
  digitalWrite(lcdOnPin, HIGH);
  configureScreen();
  enableCursor();
  clearDisplay();
}

void backspace() {
  if (cursorPosition > 1) {
    sendBus(0, 0, 0, 1, 0, 0, 0, 0, true, 0);
    cursorPosition--;
    lcdPrint(" ");
    sendBus(0, 0, 0, 1, 0, 0, 0, 0, true, 0);
    cursorPosition--;
  }
  else if (cursorPosition == 1) {
    lcdPrint(" ");
    sendBus(0, 0, 0, 1, 0, 0, 0, 0, true, 0);
    cursorPosition--;
  }
}
