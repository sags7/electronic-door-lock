String checkKeypad()
{
  String btnPressed = "";
  for (int y = 0; y < rowsLength; y++)
  {
    digitalWrite(rows[y], HIGH);
    for (int x = 0; x < colsLength; x++)
    {
      if (digitalRead(cols[x]) == HIGH)
      {
        btnPressed = keys[y][x];
      }
    }
    digitalWrite(rows[y], LOW);
  }
  return btnPressed;
}

String lastBtn = "";
bool btnSent = true;

String btnReleased() {
  if (lastBtn == "") {
    lastBtn = checkKeypad();
    btnSent = false;
  }
  //  else if (lastBtn == checkKeypad()) {
  //  return "";
  // }
  else if (lastBtn != checkKeypad() && btnSent == false) {
    btnSent = true;
    return lastBtn;
  }
  return "";
}
