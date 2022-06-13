

void enable()
{
  digitalWrite(ENE, HIGH);
  delay(pulseWidth);
  digitalWrite(ENE, LOW);
}

void configureScreen()
{
  digitalWrite(REG, LOW);
  delay(pulseWidth);

  digitalWrite(DB7, LOW);
  digitalWrite(DB6, LOW);
  digitalWrite(DB5, HIGH);
  digitalWrite(DB4, LOW);
  enable();

  digitalWrite(DB7, LOW);
  digitalWrite(DB6, LOW);
  digitalWrite(DB5, HIGH);
  digitalWrite(DB4, LOW);
  enable();

  digitalWrite(DB7, HIGH);
  digitalWrite(DB6, HIGH);
  digitalWrite(DB5, LOW);
  digitalWrite(DB4, LOW);
  enable();
}

void clearDisplay()
{
  delay(pulseWidth);
  cursorPosition = 1;
  digitalWrite(REG, LOW);
  delay(pulseWidth);

  digitalWrite(DB7, LOW);
  digitalWrite(DB6, LOW);
  digitalWrite(DB5, LOW);
  digitalWrite(DB4, LOW);
  enable();

  digitalWrite(DB7, LOW);
  digitalWrite(DB6, LOW);
  digitalWrite(DB5, LOW);
  digitalWrite(DB4, HIGH);
  enable();
}

void enableCursor()
{
  digitalWrite(REG, LOW);
  delay(pulseWidth);

  digitalWrite(DB7, LOW);
  digitalWrite(DB6, LOW);
  digitalWrite(DB5, LOW);
  digitalWrite(DB4, LOW);
  enable();

  digitalWrite(DB7, HIGH);
  digitalWrite(DB6, HIGH);
  digitalWrite(DB5, HIGH);
  digitalWrite(DB4, HIGH);
  enable();
}

void disableCursor()
{
  digitalWrite(REG, LOW);
  delay(pulseWidth);

  digitalWrite(DB7, LOW);
  digitalWrite(DB6, LOW);
  digitalWrite(DB5, LOW);
  digitalWrite(DB4, LOW);
  enable();

  digitalWrite(DB7, HIGH);
  digitalWrite(DB6, HIGH);
  digitalWrite(DB5, LOW);
  digitalWrite(DB4, LOW);
  enable();
}

void secondLine()
{
  cursorPosition = 1;
  digitalWrite(REG, LOW);
  delay(pulseWidth);

  digitalWrite(DB7, 1);
  digitalWrite(DB6, 1);
  digitalWrite(DB5, 0);
  digitalWrite(DB4, 0);
  enable();

  digitalWrite(DB7, 0);
  digitalWrite(DB6, 0);
  digitalWrite(DB5, 0);
  digitalWrite(DB4, 0);
  enable();
}
//----------------------------------------------------------------------
void lcdShowChar(char letter)
{
  switch (letter)
  {

    case '0':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      break;

    case '1':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case '2':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case '3':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      break;

    case '4':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      break;

    case '5':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case '6':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case '7':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      break;

    case '8':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      break;

    case '9':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'A':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'a':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'B':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'b':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'C':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'c':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'D':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'd':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'E':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'e':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'F':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'f':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'G':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'g':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'H':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'h':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'I':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'i':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'J':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'j':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'K':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'k':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'L':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'l':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'M':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'm':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'N':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'n':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'O':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'o':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'P':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'p':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'Q':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'q':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'R':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'r':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'S':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 's':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'T':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 't':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'U':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'u':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'V':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'v':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'W':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'w':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'X':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'x':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'Y':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'y':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      break;

    case 'Z':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case 'z':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case ' ':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 0);
      digitalWrite(DB4, 0);
      enable();
      break;

    case '*':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case ':':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      break;

    case '?':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      digitalWrite(DB7, 1);
      digitalWrite(DB6, 1);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      break;

    case '#':
      enableCursor();
      digitalWrite(REG, HIGH);
      delay(pulseWidth);

      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 0);
      enable();
      digitalWrite(DB7, 0);
      digitalWrite(DB6, 0);
      digitalWrite(DB5, 1);
      digitalWrite(DB4, 1);
      enable();
      break;
  }
}


void lcdPrint(String sentence, short lineLength = 16)
{
  delay(pulseWidth);
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
  delay(pulseWidth);
  digitalWrite(lcdOnPin, HIGH);
  delay(pulseWidth);
  configureScreen();
  enableCursor();
  clearDisplay();
}

void backspace() {
  if (cursorPosition > 1) {
    digitalWrite(REG, LOW);
    delay(pulseWidth);

    digitalWrite(DB7, 0);
    digitalWrite(DB6, 0);
    digitalWrite(DB5, 0);
    digitalWrite(DB4, 1);
    enable();

    digitalWrite(DB7, 0);
    digitalWrite(DB6, 0);
    digitalWrite(DB5, 0);
    digitalWrite(DB4, 0);
    enable();

    cursorPosition--;
    lcdPrint(" ");

    digitalWrite(REG, LOW);
    delay(pulseWidth);

    digitalWrite(DB7, 0);
    digitalWrite(DB6, 0);
    digitalWrite(DB5, 0);
    digitalWrite(DB4, 1);
    enable();

    digitalWrite(DB7, 0);
    digitalWrite(DB6, 0);
    digitalWrite(DB5, 0);
    digitalWrite(DB4, 0);
    enable();

    cursorPosition--;
  }
  else if (cursorPosition == 1) {
    lcdPrint(" ");

    digitalWrite(REG, LOW);
    delay(pulseWidth);

    digitalWrite(DB7, 0);
    digitalWrite(DB6, 0);
    digitalWrite(DB5, 0);
    digitalWrite(DB4, 1);
    enable();

    digitalWrite(DB7, 0);
    digitalWrite(DB6, 0);
    digitalWrite(DB5, 0);
    digitalWrite(DB4, 0);
    enable();

    cursorPosition--;
  }
}
