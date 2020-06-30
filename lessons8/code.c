#include <Servo.h>

int pos = 0;

Servo servo_9;

void setup()
{
  servo_9.attach(9);

}

void loop() // 将伺服系统从0度每次加一，加到180度
{
  for (pos = 0; pos <= 180; pos += 1) {
    // 告诉伺服进入可变位置
    servo_9.write(pos);
    // 等15毫秒伺服系统到达位置
    delay(15); //等待15毫秒 
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    // 告诉伺服进入可变位置
    servo_9.write(pos);
    // 等15毫秒伺服系统到达位置
    delay(15); // 等待15毫秒
  }
}
