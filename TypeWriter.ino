char characters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
                     'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                     's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4',
                     '5', '6', '7', '8', '9', '0', ' ', ',', 'R', '.'
                    };

int combs[][2] = {
  {23, 35}, {29, 34}, {29, 33}, {26, 35}, {24, 32}, {24, 33}, {24, 35}, {25, 33}, {27, 34}, {25, 35},
  {27, 33}, {27, 35}, {28, 34}, {28, 32}, {26, 32}, {26, 34}, {23, 32}, {24, 34}, {26, 33}, {25, 32},
  {27, 32}, {29, 32}, {23, 34}, {28, 33}, {25, 34}, {23, 33}, {24, 30}, {24, 31}, {25, 30}, {25, 31}, {27, 30}, {27, 31},
  {26, 30}, {26, 31}, {29, 30}, {29, 31}, {22, 36}, {22, 30}, {23, 36}, {22, 31}
};

void setup() {
  Serial.begin(9600);

  //SETUP PINS
  for (int i = 22; i < 37; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }

  pinMode(8, OUTPUT);
}

void loop() {

    Serial.flush();
    if (Serial.available()) {
//      digitalWrite(22, HIGH);
//      digitalWrite(35, HIGH);
//      delay(1000);
//      digitalWrite(22, LOW);
//      digitalWrite(35, LOW);
      Serial.println("got input!");
      printCharacter(Serial.read());
    }
    delay(100);
}

void printCharacter(char c) {
  Serial.println(c);
  int availableCharacters = 40;
  for (int i = 0; i < availableCharacters; i++) {
    if (characters[i] == c) {
      Serial.print("Match found for: ");
      Serial.println(c);
      int pin1 = combs[i][0];
      int pin2 = combs[i][1];
      Serial.print("pins are: ");
      Serial.print(pin1);
      Serial.print(" and ");
      Serial.println(pin2);
      digitalWrite(pin1, HIGH);
      digitalWrite(pin2, HIGH);
      delay(40);
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, LOW);
      return;
    }
  }
  Serial.println("No match found");
}
