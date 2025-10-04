# LDR-LED

## 🌞 وصف المشروع

مشروع **LDR-LED** يستخدم مستشعر الضوء **LDR** لقياس شدة الإضاءة المحيطة، ومن ثم يقوم بتشغيل أو إطفاء **LED** بناءً على مستوى الإضاءة.  
مثال بسيط على أنظمة الإضاءة الأوتوماتيكية (مثل إضاءة الشوارع التي تشتغل تلقائيًا عند غروب الشمس).

## 🧰 المتطلبات

- لوحة تطوير مثل Arduino Uno
- مستشعر LDR (مقاومة ضوئية)
- مقاومة 10 كيلوأوم
- LED
- مقاومة 220 أوم للـ LED
- أسلاك توصيل
- برنامج Arduino IDE

## ⚙️ التوصيل

### 🔆 توصيل LDR:

- أحد أطراف LDR → 5V
- الطرف الآخر → A0 **وأيضًا** إلى GND من خلال مقاومة 10K (كمقسم جهد)

### 💡 توصيل LED:

- الطرف الموجب للـ LED → المنفذ الرقمي D7 عبر مقاومة 220 أوم
- الطرف السالب → GND

## 💻 كود Arduino

```cpp
int ldrPin = A0;     // مدخل قراءة الـ LDR
int ledPin = 7;      // مخرج الـ LED
int threshold = 500; // العتبة الضوئية لتشغيل الـ LED

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin); // قراءة شدة الإضاءة
  Serial.println(ldrValue);          // طباعة القيمة للمراقبة

  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH); // تشغيل الـ LED في الظلام
  } else {
    digitalWrite(ledPin, LOW);  // إطفاء الـ LED في الضوء
  }

  delay(500);
}
