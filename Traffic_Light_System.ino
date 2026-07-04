/*
=========================================================
 Intelligent Dual Traffic Light Control System
 Arduino Uno + HC-SR04 + LDR
=========================================================
*/

#define trigPin 9
#define echoPin 10

const int ldrPin = A0;

const int red1 = 2;
const int yellow1 = 3;
const int green1 = 4;

const int red2 = 5;
const int yellow2 = 6;
const int green2 = 7;

long duration;
int distance;
int lightValue;

void setup()
{
    pinMode(red1, OUTPUT);
    pinMode(yellow1, OUTPUT);
    pinMode(green1, OUTPUT);

    pinMode(red2, OUTPUT);
    pinMode(yellow2, OUTPUT);
    pinMode(green2, OUTPUT);

    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

    Serial.begin(9600);
}

void loop()
{
    // Read LDR
    lightValue = analogRead(ldrPin);

    // Ultrasonic Measurement
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);

    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);

    distance = duration * 0.034 / 2;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    // Day Mode
    if (lightValue > 500)
    {
        trafficSystem(5000);
    }
    // Night Mode
    else
    {
        trafficSystem(3000);
    }

    // Vehicle Detection
    if (distance > 0 && distance < 20)
    {
        digitalWrite(red1, LOW);
        digitalWrite(green1, HIGH);

        digitalWrite(red2, HIGH);
        digitalWrite(green2, LOW);

        Serial.println("Vehicle Detected!");

        delay(5000);

        digitalWrite(green1, LOW);
        digitalWrite(red1, HIGH);
    }
}

void trafficSystem(int delayTime)
{
    // Lane 1 Green
    digitalWrite(red1, LOW);
    digitalWrite(green1, HIGH);

    digitalWrite(red2, HIGH);
    digitalWrite(green2, LOW);

    delay(delayTime);

    // Lane 1 Yellow
    digitalWrite(green1, LOW);
    digitalWrite(yellow1, HIGH);

    delay(2000);

    digitalWrite(yellow1, LOW);
    digitalWrite(red1, HIGH);

    // Lane 2 Green
    digitalWrite(red2, LOW);
    digitalWrite(green2, HIGH);

    delay(delayTime);

    // Lane 2 Yellow
    digitalWrite(green2, LOW);
    digitalWrite(yellow2, HIGH);

    delay(2000);

    digitalWrite(yellow2, LOW);
    digitalWrite(red2, HIGH);
}
