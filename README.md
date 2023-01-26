# arduino-buzzer

Bu kod, buzzer modülünün 2 numaralı pinde bağlı olduğunu varsaymaktadır. Bu kod, buzzer modülünün her 500ms aralıklarla 500ms aralıklarla 1000Hz ses üretebilmesi için tone verir ve bu ses üretiminin durdurulması için noTone kullanır.

```c++
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
```

Öncelikle, buzzer modülünün bağlı olduğu pin numarasını belirlemelisiniz. Bu pin numarası, yukarıdaki kodda 2 olarak tanımlanmıştır. Daha sonra, setup() fonksiyonunda, buzzer modülünün çıkış olarak tanımlanması için pinMode(buzzerPin, OUTPUT) komutunu kullanmalısınız.

loop() fonksiyonunda, buzzer modülünün istediğiniz ses frekansını üretebilmesi için tone(buzzerPin, frequency) komutunu kullanabilirsiniz. Örnekte, frequency değeri 1000 olarak tanımlanmıştır. Bu komut, buzzer modülünün 1000Hz ses üretebilmesi için ton verir.

Ayrıca, delay(time) komutu ile buzzer modülünün ses üretebilmesi arasındaki zaman aralığını belirleyebilirsiniz. Örnekte, 500ms aralıklarla ses üretilmektedir.

Eğer buzzer modülünün ses üretimini durdurmak istiyorsanız noTone(buzzerPin) komutunu kullanabilirsiniz.
