#include <LiquidCrystal.h>


String places[] = { "closet", "attic", "hospital", "Grandma's house", "bathroom stalls",
      "market", "Moon", "park", "Student Union", "underground", "forest", "Phoenix College", "bakery",
      "Pacific Ocean", "basement", "Garfield", "top of mountain", "ballpark", "pool" };

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  randomSeed(analogRead(0));

  pinMode(8, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int reading = digitalRead(8);

  if ( reading == HIGH ) {
    int index1 = random(0, 18);
    lcd.clear();
    lcd.print(places[index1]);
  }

  delay(50);

}
