#include <Wire.h>
#include "MLX90614.h"
 
esl::MLX90614 mlx90614;

void setup() {
Serial.begin(115200);
while (!Serial) ; // for Leonardo or Pro Micro
Wire.begin();
mlx90614.init( );
Serial.print( "Address = 0x" );
Serial.println( mlx90614.readSlaveAddress(), HEX );
}
 
void loop() {
float f;
Serial.print( "อุณหภูมิโดยรอบ. (Ta): " );
f = mlx90614.readAmbientTemperature(); // อุณหภูมิโดยรอบ
if ( !mlx90614.is_crc_error() ) {
Serial.println(f);
}
Serial.print( "อุณหภูมิวัตถุ. (To): " );
f = mlx90614.readObjectTemperature(); // อุณหภูมิวัตถุ
if ( !mlx90614.is_crc_error() ) {
Serial.println(f);
}
delay(1000); // อัพเดตทุกๆ 1วิ (1000 = 1วินาที)
}