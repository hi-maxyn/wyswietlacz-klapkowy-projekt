//TEST ciągłych obrotów 6 motorków


// Piny przypisane do danego motorka (mogą być zmienione w razie innego podpięcia ale jest wskazane aby zachować każdą czwórkę blisko siebie)
int motor1[] = {33, 32, 31, 30};
int motor2[] = {37, 36, 35, 34};
int motor3[] = {41, 40, 39, 38};
int motor4[] = {45, 44, 43, 42};
int motor5[] = {25, 24, 23, 22};
int motor6[] = {29, 28, 27, 26};

// Sekwencja kroków
int seq[8][4] = {
  {1,0,0,0},
  {1,1,0,0},
  {0,1,0,0},
  {0,1,1,0},
  {0,0,1,0},
  {0,0,1,1},
  {0,0,0,1},
  {1,0,0,1}
};

void setup() {
  // Ustaw wszystkie piny silnika jako OUTPUT (WYJŚCIE)
  for(int i=0;i<4;i++){
    pinMode(motor1[i], OUTPUT);
 pinMode(motor2[i], OUTPUT);
    pinMode(motor3[i], OUTPUT);
    pinMode(motor4[i], OUTPUT);
    pinMode(motor5[i], OUTPUT);
    pinMode(motor6[i], OUTPUT);
  }
}

void loop() {
  // Przechodzenie przez sekwencję
  for(int step=0; step<8; step++){
    // Motor1
    for(int i=0;i<4;i++) digitalWrite(motor1[i], seq[step][i]);
    // Motor2
 for(int i=0;i<4;i++) digitalWrite(motor2[i], seq[step][i]);
    // Motor3
    for(int i=0;i<4;i++) digitalWrite(motor3[i], seq[step][i]);
    // Motor4
    for(int i=0;i<4;i++) digitalWrite(motor4[i], seq[step][i]);
    // Motor5
    for(int i=0;i<4;i++) digitalWrite(motor5[i], seq[step][i]);
    // Motor6
    for(int i=0;i<4;i++) digitalWrite(motor6[i], seq[step][i]);

    delay(2); // małe opóźnienie → dostosuj do prędkości (mniejsze liczby = szybsze)
  }
}