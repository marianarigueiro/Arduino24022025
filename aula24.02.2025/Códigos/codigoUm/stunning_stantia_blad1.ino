// C++ code
//
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);
  delay(10000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(5000); // Wait for 1000 millisecond(s)

   digitalWrite (7, HIGH);
   delay(300);
   digitalWrite(7, LOW);
   delay(300);

   digitalWrite (4, HIGH);
   delay(1000);
   digitalWrite(4, LOW);
   delay(1000);
}
