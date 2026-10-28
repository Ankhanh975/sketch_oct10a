#include <Servo.h>

Servo pwm;

const uint8_t PWM_PIN = PA9;
const uint16_t PWM_PULSE_US = 1200;

void setup() {
  pwm.attach(PWM_PIN);
  pwm.writeMicroseconds(1000);
  delay(3000);
  pwm.writeMicroseconds(PWM_PULSE_US);
}

void loop() {
  // Servo keeps generating the 50 Hz PWM signal in the background.
}
