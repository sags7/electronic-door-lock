void servoControl(int angle, int periods = 1, int period = 20000, int pulse = 1500)
{
  pulse = (angle * 11) + 500;
  for (int i = 1; i <= periods; i++)
  {
    digitalWrite(servoData, HIGH);
    delayMicroseconds(pulse);
    digitalWrite(servoData, LOW);
    delayMicroseconds(period - pulse);
  }
}
