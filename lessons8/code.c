#include <Servo.h>

int pos = 0;

Servo servo_9;

void setup()
{
  servo_9.attach(9);

}

void loop() // ���ŷ�ϵͳ��0��ÿ�μ�һ���ӵ�180��
{
  for (pos = 0; pos <= 180; pos += 1) {
    // �����ŷ�����ɱ�λ��
    servo_9.write(pos);
    // ��15�����ŷ�ϵͳ����λ��
    delay(15); //�ȴ�15���� 
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    // �����ŷ�����ɱ�λ��
    servo_9.write(pos);
    // ��15�����ŷ�ϵͳ����λ��
    delay(15); // �ȴ�15����
  }
}
