int buzzerPin = 2; //Buzzer modülünün bağlı olduğu pin numarası

void setup() {
  pinMode(buzzerPin, OUTPUT); //Buzzer modülünün çıkış olarak tanımlanması
  Serial.begin(9600); //Serial port bağlantısının başlatılması
}

void loop() {
  tone(buzzerPin, 1000); //Buzzer modülünün 1000Hz ses üretebilmesi için ton verilmesi
  delay(500); //500ms bekleme
  noTone(buzzerPin); //Buzzer modülünün ses üretiminin durdurulması
  delay(500); //500ms bekleme
}
