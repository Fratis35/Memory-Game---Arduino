// Jogo da Memória

int n = 0;

int i = 0;

int k = 0;

int p=15;


int counter = 0;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
}

void loop()
{
      delay(500);
      digitalWrite(9, HIGH);
      delay(50);
      digitalWrite(10, HIGH);
      delay(50);
      digitalWrite(11, HIGH);
      delay(50);
      digitalWrite(12, HIGH);
      delay(500); // Wait for 400 millisecond(s)
      digitalWrite(9, LOW);
      delay(50);
      digitalWrite(10, LOW);
      delay(50);
      digitalWrite(11, LOW);
      delay(50);
      digitalWrite(12, LOW);
      delay(50);

  int v[p];
  for(int round = 1; round < p ;round++){
  v[round-1] = random(1, 5);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(2500/(4+round));

  for(n = 0 ; n < round ; n++){
  if (v[n] == 1) {
    digitalWrite(9, HIGH);
    delay(20000/(6*round+10)); // Wait for 3000 millisecond(s)
    digitalWrite(9, LOW);
    delay(2500/(4+round));
  }
  if (v[n] == 2) {
    digitalWrite(10, HIGH);
    delay(20000/(6*round+10)); // Wait for 3000 millisecond(s)
    digitalWrite(10, LOW);
    delay(2500/(4+round));
  }
  if (v[n] == 3) {
    digitalWrite(11, HIGH);
    delay(20000/(6*round+10)); // Wait for 3000 millisecond(s)
    digitalWrite(11, LOW);
    delay(2500/(4+round));
  }
  if (v[n] == 4) {
    digitalWrite(12, HIGH);
    delay(20000/(6*round+10)); // Wait for 3000 millisecond(s)
    digitalWrite(12, LOW);
    delay(2500/(4+round));
  }
  }

  for(int a = 0 ; a < round;a++){
  k=0;
  while (k==0) {
    if (digitalRead(2) == 1) {
      digitalWrite(9, HIGH);
      delay(10000/(9+round)); // Wait for 1000 millisecond(s)
      digitalWrite(9, LOW);
      delay(150);
      k = 1;
    } else if (digitalRead(3) == 1) {
        digitalWrite(10, HIGH);
        delay(10000/(9+round)); // Wait for 1000 millisecond(s)
        digitalWrite(10, LOW);
        delay(150);
        k = 2;
    } else if (digitalRead(4) == 1) {
          digitalWrite(11, HIGH);
          delay(10000/(9+round)); // Wait for 1000 millisecond(s)
          digitalWrite(11, LOW);
          delay(150);
          k = 3;
    } else if (digitalRead(5) == 1) {
            digitalWrite(12, HIGH);
            delay(10000/(9+round)); // Wait for 1000 millisecond(s)
            digitalWrite(12, LOW);
            delay(150);
            k = 4;
    } else {
        k=0;
      }
  }
    
  if (k != v[a]) {
    for (counter = 0; counter < 5; ++counter) {
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      delay(400); // Wait for 400 millisecond(s)
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(400);
      round = 0;
    }
  }
  delay(120);
  }
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(1000); // Espera 1 segundo
  }
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    delay(2000);
    
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    delay(1000); // Espera 1 segundo antes de reiniciar o jogo
}
