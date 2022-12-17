## **Arduino MLX90614 วัดอุณภูมิโดยไม่สัมผัส พร้อมเสียงเตือน**

[TH](https://github.com/Punuy/Arduino-MLX90614/blob/main/README.md) | EN(soon)

### **หัวข้อ** (คลิกไปที่หัวข้อนั้นๆได้เลย)

*   วิธีโหลดไฟล์
*   [เริ่มต้น Arduino IDE](https://github.com/Punuy/Arduino-MLX90614#%E0%B8%95%E0%B8%B4%E0%B8%94%E0%B8%95%E0%B8%B1%E0%B9%89%E0%B8%87-arduino-ide--driver-%E0%B9%84%E0%B8%94%E0%B8%A3%E0%B9%8C%E0%B9%80%E0%B8%A7%E0%B8%AD%E0%B8%A3%E0%B9%8C--%E0%B8%A5%E0%B8%87-library)
    *   [วิธีติดตั้ง Arduino IDE](https://github.com/Punuy/Arduino-MLX90614#วิธีติดตั้ง-arduino-ide)
    *   [วิธีลง Driver (ไดร์เวอร์)](https://github.com/Punuy/Arduino-MLX90614#วิธีลง-driver-ไดร์เวอร์)
    *   วิธีเช็ค Port เบื้องต้น
    *   [วิธีลง Library](https://github.com/Punuy/Arduino-MLX90614#วิธีลง-library)
    *   [วิธี Upload Code](https://github.com/Punuy/Arduino-MLX90614#วิธี-upload-code)
*   [เกี่ยวกับวงจร](https://github.com/Punuy/Arduino-MLX90614#%E0%B9%80%E0%B8%81%E0%B8%B5%E0%B9%88%E0%B8%A2%E0%B8%A7%E0%B8%81%E0%B8%B1%E0%B8%9A%E0%B8%A7%E0%B8%87%E0%B8%88%E0%B8%A3)
    *   อุปกรณ์ที่ใช้
        *   [Arduino Nano](https://github.com/Punuy/Arduino-MLX90614#arduino-และ-arduino-nano)
        *   [Buzzer Module](https://github.com/Punuy/Arduino-MLX90614#buzzer-module)
        *   [MLX90614](https://github.com/Punuy/Arduino-MLX90614#mlx90614)
    *   [การต่อวงจร](https://github.com/Punuy/Arduino-MLX90614#การต่อวงจร)
    *   [Product](https://github.com/Punuy/Arduino-MLX90614#product)
*   [หลักการทำงาน](https://github.com/Punuy/Arduino-MLX90614#%E0%B8%AB%E0%B8%A5%E0%B8%B1%E0%B8%81%E0%B8%81%E0%B8%B2%E0%B8%A3%E0%B8%97%E0%B8%B3%E0%B8%87%E0%B8%B2%E0%B8%999)
    *   ด้านโปรแกรม
    *   ด้านการใช้งาน
        *   ข้อดี - ข้อเสีย
*   [เกี่ยวกับ Code](https://github.com/Punuy/Arduino-MLX90614#%E0%B9%80%E0%B8%81%E0%B8%B5%E0%B9%88%E0%B8%A2%E0%B8%A7%E0%B8%81%E0%B8%B1%E0%B8%9A-code)
    *   [Code ทดสอบ MLX90614](https://github.com/Punuy/Arduino-MLX90614#code-ทดสอบ-mlx90614-วัดอุณหภูมิโดยรอบ-และ-วัตถุ)
    *   [Code ทดสอบ Buzzer Module](https://github.com/Punuy/Arduino-MLX90614#code-ทดสอบ-buzzer-module-ปิด-เปิด-วนซ้ำทุก-1วินาที)
    *   [Code ใช้งานจริง](https://github.com/Punuy/Arduino-MLX90614#code-ใช้งานจริง)
*   [ต่อยอดอนาคต](https://github.com/Punuy/Arduino-MLX90614#%E0%B8%95%E0%B9%88%E0%B8%AD%E0%B8%A2%E0%B8%AD%E0%B8%94%E0%B8%AD%E0%B8%99%E0%B8%B2%E0%B8%84%E0%B8%95)

## ติดตั้ง Arduino IDE + Driver (ไดร์เวอร์) + ลง Library

### วิธีติดตั้ง Arduino IDE

1.เข้าไปที่เว็ป [https://www.arduino.cc/en/software](https://www.arduino.cc/en/software)

2.กดที่ Windows Win 10 and newer, 64bit

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/90d667866f3a394f821684cdbdeb2132181fdf621ee72879.png)

3.กด Just download

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/730728756fdc57ed1fe61a4f3eb9623a32f20a949755909a.png)

4.จากนั้น เปิดไฟล์ติดตั้ง กด Next ไปเรื่อยๆ และรอจน กว่าจะมีให้กด Close

![](https://i.lnwfile.com/_/i/_webp_max/4096/4096/3o/rs/v6.webp)

5.เรียบร้อย

### วิธีลง Driver (ไดร์เวอร์)

1.ดาวน์โหลดไดร์เวอร์จาก [Google drive](https://drive.google.com/file/d/1vWQvUmr6n8rPnLbUaXrGmGED0_mcd57g/view?usp=sharing) ← คลิก

2.เปิดไฟล์ที่โหลดมา กด YES จากนั้นกด INSTALL

![](https://cq.lnwfile.com/_/cq/_raw/q5/w2/0b.jpg)

3.เมื่อเสร็จสิ้นมีข้อความแสดงว่า "Driver install success" ให้กด OK

![](https://cq.lnwfile.com/_/cq/_raw/py/dm/be.jpg)

4.ถอดสายUSB แล้วเชื่อมต่อใหม่ สังเกตุในโปรแกรม Arduino IDE เจอPORT

![](https://cq.lnwfile.com/_/cq/_raw/em/6h/7g.jpg)

5.เรียบร้อย

### วิธีเช็ค Port เบื้องต้น

กำลังเขียน

### วิธีลง Library

1.กดไปที่ Sketch → Include Library → Add .ZIP Library

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/b21fb3f96fd08fa8b4751f9efd8d218cad8a5317ab3863f8.png)

2.เลือกไปยังโฟลเดอร์ Libraries ที่โหลดไว้ แล้วเลือก MLX90614\_Demo.zip จากนั้นกด open

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/e036ce257a0fcb856f72766092673a6ef260cb66ca6b63ee.png)

3.เรียบร้อย

### วิธี Upload Code

1.เชื่อมต่อบอร์ด Arduino Nano เข้ากับคอมพิวเตอร์ที่ทำการติดตั้งโปรแกรม Arduino IDE แล้ว

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/f5f12f2154084440baec0908cb72b8cd79358a95d663256e.png)

2.เปิดโปรแกรม Arduino IDE (arduino) 

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/b73df35e35d54d31786cab944f74b55203c658d767f5be00.png)

3.เปิดไฟล์ MLX90614\_Buzzer (Thai) // อยู่ในโฟล์เดอร์ MLX90614\_Buzzer (Thai)

→ วิธีโหลดไฟล์ ←

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/86ed4d70be27706cfb52b1761681d5f4bd0010a465c2eab1.png)

  
4.เลือกบอร์ดเป็น Arduino Nano

ไปที่  Tools → Board → Arduino AVR Board → เลือก Arduino Nano

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/08e27b429b89ef4219bb0869e1af3bd704ae479a7197e88a.png)

5.เลือก Port ที่เชื่อมต่อกับบอร์ด Arduino Nano

ไปที่ Tools → Port → Port ที่เชื่อมต่อกับบอร์ด Arduino Nano (ในตัวอย่างจะเป็น Port COM1)

→ วิธีเช็ค Port เบื้องต้น ← (กำลังเขียน)

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/1e951454c60e88a1e69d021d06dc811d135e53fc177ac74b.png)

6.ทำการกดอัพโหลดโค๊ดลงบอร์ด

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/a63605168988a9c6cc00daf471cdf64810c6954a7027ddc9.png)

7.รอจนกว่าโปรแกรมจะอัพโหลดโค๊ดเสร็จ

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/86b184b4a89c162dc8830989b3c57325101718c24bf4c1c3.png)

8.เมื่อทำการอัพโหลดเสร็จสิ้นและไม่มีอะไรผิดพลาด ในส่วนล่างของหน้าต่างโปรแกรมก็จะปรากฏข้อความเหล่านี้ขึ้นมา และที่บอร์ดก็จะปรากฏไฟสถานะขึ้น

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/042f37e395829a902ffbd0bef250f359fdae9b67d43df4e1.png)

9.เรียบร้อย

## เกี่ยวกับวงจร

*   อุปกรณ์ที่ใช้
    *   [Arduino Nano](https://github.com/Punuy/Arduino-MLX90614#arduino-และ-arduino-nano)
    *   [Buzzer Module](https://github.com/Punuy/Arduino-MLX90614#buzzer-module)
    *   [MLX90614](https://github.com/Punuy/Arduino-MLX90614#mlx90614)

### Arduino และ Arduino Nano

Arduino เป็นบอร์ดไมโครคอนโทรลเลอร์ สามารถใช้งานควบคุมบอร์ดว่าต้องทำอะไร โดยส่งชุดคำสั่งไปยังไมโครคอนโทรลเลอร์บนบอร์ด ในการทำเช่นนั้นคุณต้องใช้ภาษา Arduino ซึ่งมีคำสั่งเพิ่มขึ้นมาเพื่อเขียนในรูปแบบภาษา C++ และใช้ซอฟต์แวร์ Arduino IDE เป็นหลักในการประมวลผล

Arduino Nano เป็นบอร์ดขนาดจิ๋ว เหมือนกับรุ่น UNO แต่มีจำนวน input/output น้อยกว่าเพราะต้องการให้มีขนาดเล็ก

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/f478ac5f06dbee68f5b5225ed9a39d9c2e0b3b4435ae8f79.png)

### Buzzer Module

โมดูลเสียง หรือ Active Buzzer Module สามารถสร้างเสียงเตือนได้ง่าย โดยการต่อขา I/O ของ Active Buzzer กับขา I/O ของ Arduino หรือไมโครคอนโทรลเลอร์ได้โดยตรง และต่อกับขา VCC ของ Active Buzzer กับไฟเลี้ยง 3.3-5VDC และขา GND กับ GND ในการสั่งให้ Active Buzzer มีเสียง ทำได้โดยการสั่งขาที่ต่อกับ Active Buzzer ใหัเป็น LOW

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/5e4abd36fe5c048c5108095836e5a222d03b8309be5300f4.png)

### MLX90614

MLX90614 เป็นเซนเซอร์วัดอุณหภูมิแบบไร้การสัมผัส โดยใช้หลักการแปลงแสงอินฟาเรดที่ส่งออกจากตัววัตถุซึ่งจะมีสีแตกต่างกัน ให้เป็นค่าอุณหภูมิ

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/27515ac891faaec4b441c87bdc697743cf7f0ba931586026.png)

## การต่อวงจร

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/6e73337bc2d1d340794b5d564cf79e002ec2281f325df3da.png)

| MLX90614 | Arduino |   | Buzzer | Arduino |
| --- | --- | --- | --- | --- |
| VCC | 3.3V |   | VCC | 3.3-5V |
| GND | GND |   | GND | GND |
| SDA | A4 |   | I/O | D13 |
| SCL | A5 |   |   |   |

## Product

ยังไม่มีรูป

## หลักการทำงาน

### ด้านโปรแกรม

กำลัง Thinking…

### ด้านการใช้งาน

กำลัง Thinking…

## เกี่ยวกับ Code

### Code ทดสอบ MLX90614 (วัดอุณหภูมิโดยรอบ และ วัตถุ)

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

### Code ทดสอบ Buzzer Module (ปิด-เปิด วนซ้ำทุก 1วินาที)

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

### Code ใช้งานจริง

```cpp
กำลังแปล~~~
```

## ต่อยอดอนาคต

*   เพิ่มแบตเตอรี่
*   คิดยังไม่ออก
