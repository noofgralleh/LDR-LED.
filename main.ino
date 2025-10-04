# LDR-LED.
int ldrPin = A0;   // LDR على مدخل Analog
int ledPin = 9;    // LED على مخرج (يدعم PWM إذا تحب تتحكم بالشدة)
int ldrValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // للمتابعة على المراقب التسلسلي
}

