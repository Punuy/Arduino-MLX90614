## **Arduino MLX90614 วัดอุณภูมิโดยไม่สัมผัส พร้อมเสียงเตือน**

[TH](https://github.com/Punuy/Arduino-MLX90614/blob/main/README.md) | EN(soon)

### **หัวข้อ** (คลิกไปที่หัวข้อนั้นๆได้เลย)

*   [เกี่ยวกับวงจร](https://github.com/Punuy/Arduino-MLX90614/edit/main/README.md#%E0%B9%80%E0%B8%81%E0%B8%B5%E0%B9%88%E0%B8%A2%E0%B8%A7%E0%B8%81%E0%B8%B1%E0%B8%9A%E0%B8%A7%E0%B8%87%E0%B8%88%E0%B8%A3)
*   [ต่อวงจร](https://github.com/Punuy/Arduino-MLX90614/edit/main/README.md#%E0%B8%95%E0%B9%88%E0%B8%AD%E0%B8%A7%E0%B8%87%E0%B8%88%E0%B8%A3)
*   [หลักการทำงาน](https://github.com/Punuy/Arduino-MLX90614/edit/main/README.md#%E0%B8%AB%E0%B8%A5%E0%B8%B1%E0%B8%81%E0%B8%81%E0%B8%B2%E0%B8%A3%E0%B8%97%E0%B8%B3%E0%B8%87%E0%B8%B2%E0%B8%99)
*   [เกี่ยวกับ Code](https://github.com/Punuy/Arduino-MLX90614#%E0%B9%80%E0%B8%81%E0%B8%B5%E0%B9%88%E0%B8%A2%E0%B8%A7%E0%B8%81%E0%B8%B1%E0%B8%9A-code)
*   ต่อยอดอนาคต

## เกี่ยวกับวงจร

อุปกรณ์ที่ใช้

*   Arduino Nano
*   Buzzer Module
*   MLX90614

## Arduino และ Arduino Nano

Arduino เป็นบอร์ดไมโครคอนโทรลเลอร์ สามารถใช้งานควบคุมบอร์ดว่าต้องทำอะไร โดยส่งชุดคำสั่งไปยังไมโครคอนโทรลเลอร์บนบอร์ด ในการทำเช่นนั้นคุณต้องใช้ภาษา Arduino ซึ่งมีคำสั่งเพิ่มขึ้นมาเพื่อเขียนในรูปแบบภาษา C++ และใช้ซอฟต์แวร์ Arduino IDE เป็นหลักในการประมวลผล

Arduino Nano เป็นบอร์ดขนาดจิ๋ว เหมือนกับรุ่น UNO แต่มีจำนวน input/output น้อยกว่าเพราะต้องการให้มีขนาดเล็ก

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/f478ac5f06dbee68f5b5225ed9a39d9c2e0b3b4435ae8f79.png)

## Buzzer Module

โมดูลเสียง หรือ Active Buzzer Module สามารถสร้างเสียงเตือนได้ง่าย โดยการต่อขา I/O ของ Active Buzzer กับขา I/O ของ Arduino หรือไมโครคอนโทรลเลอร์ได้โดยตรง และต่อกับขา VCC ของ Active Buzzer กับไฟเลี้ยง 3.3-5VDC และขา GND กับ GND ในการสั่งให้ Active Buzzer มีเสียง ทำได้โดยการสั่งขาที่ต่อกับ Active Buzzer ใหัเป็น LOW

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/5e4abd36fe5c048c5108095836e5a222d03b8309be5300f4.png)

## MLX90614

MLX90614 เป็นเซนเซอร์วัดอุณหภูมิแบบไร้การสัมผัส โดยใช้หลักการแปลงแสงอินฟาเรดที่ส่งออกจากตัววัตถุซึ่งจะมีสีแตกต่างกัน ให้เป็นค่าอุณหภูมิ

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/27515ac891faaec4b441c87bdc697743cf7f0ba931586026.png)

---

## ต่อวงจร

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/6e73337bc2d1d340794b5d564cf79e002ec2281f325df3da.png)

| MLX90614 | Arduino |   | Buzzer | Arduino |
| --- | --- | --- | --- | --- |
| VCC | 3.3V |   | VCC | 3.3-5V |
| GND | GND |   | GND | GND |
| SDA | A4 |   | I/O | D13 |
| SCL | A5 |   |   |   |

---

## หลักการทำงาน

เร็วๆนี้

---

## เกี่ยวกับ Code

#### Code ทดสอบ MLX90614 (วัดอุณหภูมิโดยรอบ และ วัตถุ)

```cpp
// เรียก Libreries
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
```

#### Code ทดสอบ Buzzer Module (ปิด-เปิด วนซ้ำทุก 1วินาที)

```cpp
int buzzer = 13;            // กำหนด output buzzer

void setup() {
pinMode(buzzer, OUTPUT);    // set output buzzer
}

void loop() {
digitalWrite(buzzer, HIGH); // เปิด buzzer
delay(1000);                // ดีเลย์ 1วิ (1000 = 1วินาที)
digitalWrite(buzzer, LOW);  // ปิด buzzer
delay(1000);                // ดีเลย์ 1วิ (1000 = 1วินาที)
}
```

#### Code ใช้งานจริง

```cpp
กำลังแปล~~~
```

---

## ต่อยอดอนาคต

*   เพิ่มแบตเตอรี่
*   คิดยังไม่ออก
