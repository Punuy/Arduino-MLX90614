#include <Wire.h>
#include <Adafruit_MLX90614.h>

Adafruit_MLX90614 mlx = Adafruit_MLX90614();

const int buzzer=13; //กำหนด PIN ของ buzzer
const int threshold=37; //กำหนดอุณหภูมิ

void setup() {
  Serial.begin(9600);
  Serial.println("Adafruit MLX90614 test"); 
  pinMode(2,OUTPUT);
  mlx.begin();  
}

void loop() {
  Serial.print("Ambient = "); Serial.print(mlx.readAmbientTempC()); 
  Serial.print("*C\tObject = "); Serial.print(mlx.readObjectTempC()); Serial.println("*C");
  Serial.print("Ambient = "); Serial.print(mlx.readAmbientTempF()); 
  Serial.print("*F\tObject = "); Serial.print(mlx.readObjectTempF()); Serial.println("*F");\
  Serial.println();

  if (mlx.readObjectTempC()>threshold){
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
  }
  
  delay(500);
}