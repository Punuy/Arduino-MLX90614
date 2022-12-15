## **Arduino MLX90614**

## วัดอุณภูมิโดยไม่สัมผัส พร้อมเสียงเตือน

อุปกรณ์ที่ใช้

*   Arduino Nano
*   Buzzer Module
*   MLX90614

## เกี่ยวกับ Arduino และ Arduino Nano

Arduino เป็นบอร์ดไมโครคอนโทรลเลอร์ สามารถใช้งานควบคุมบอร์ดว่าต้องทำอะไร โดยส่งชุดคำสั่งไปยังไมโครคอนโทรลเลอร์บนบอร์ด ในการทำเช่นนั้นคุณต้องใช้ภาษา Arduino ซึ่งมีคำสั่งเพิ่มขึ้นมาเพื่อเขียนในรูปแบบภาษา C++ และใช้ซอฟต์แวร์ Arduino IDE เป็นหลักในการประมวลผล

Arduino Nano เป็นบอร์ดขนาดจิ๋ว เหมือนกับรุ่น UNO แต่มีจำนวน input/output น้อยกว่าเพราะต้องการให้มีขนาดเล็ก

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/f478ac5f06dbee68f5b5225ed9a39d9c2e0b3b4435ae8f79.png)

## เกี่ยวกับ Buzzer Module

โมดูลเสียง หรือ Active Buzzer Module สามารถสร้างเสียงเตือนได้ง่าย โดยการต่อขา I/O ของ Active Buzzer กับขา I/O ของ Arduino หรือไมโครคอนโทรลเลอร์ได้โดยตรง และต่อกับขา VCC ของ Active Buzzer กับไฟเลี้ยง 3.3-5VDC และขา GND กับ GND ในการสั่งให้ Active Buzzer มีเสียง ทำได้โดยการสั่งขาที่ต่อกับ Active Buzzer ใหัเป็น LOW

![](https://33333.cdn.cke-cs.com/kSW7V9NHUXugvhoQeFaf/images/5e4abd36fe5c048c5108095836e5a222d03b8309be5300f4.png)

## เกี่ยวกับ MLX90614

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

## หลักการทำงาน

เร็วๆนี้

## เกี่ยวกับ Code (Hard Past)

เร็วๆนี้
