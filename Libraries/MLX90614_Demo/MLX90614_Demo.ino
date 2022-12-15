//////////////////////////////////////////////////////////////////////////////
/*
 * Author: RSP @Embedded System Lab (ESL), KMUTNB, Bangkok/Thailand
 * Date: 2015-06-11
 * 
 * GY-906 MLX90614-BAA (B=3V version, A=single zone, A=filter inside) 
 * -> Connect Vcc=+3.3V, SDA = A4, SCL = A5, and GND to the Arduino Uno
 */
//////////////////////////////////////////////////////////////////////////////

#include <Wire.h>
#include "MLX90614.h"

esl::MLX90614 mlx90614;

void setup() {
  Serial.begin(115200);
  while (!Serial) ;  // for Leonardo or Pro Micro
  Wire.begin();
  mlx90614.init( );
  Serial.print( "Address = 0x" );
  Serial.println( mlx90614.readSlaveAddress(), HEX );
}

void loop() {
  float f;
  Serial.print( "Ambient temp. (Ta): " );
  f = mlx90614.readAmbientTemperature(); // ambient temperature
  if ( !mlx90614.is_crc_error() ) {
    Serial.println(f);
  } 
  Serial.print( "Object1 temp. (To): " );
  f = mlx90614.readObjectTemperature(); // object1 temperature
  if ( !mlx90614.is_crc_error() ) {
    Serial.println(f);
  } 
  delay(1000);
}

//////////////////////////////////////////////////////////////////////////////
