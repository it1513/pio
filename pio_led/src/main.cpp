#include <Arduino.h>

class Led {
    public:
        Led(int);
        void On();
        void Off();
    private:
        int outPin;
        bool on;    
};

Led::Led(int outpin){
    this->outPin = outpin;
    this->on = false;
}
void Led::On(){
    digitalWrite(this->outPin, HIGH);
    this->on = true;
}

void Led::Off(){
    digitalWrite(this->outPin, LOW);
    this->on = false;
}

Led ledky[3]{16,5,4};

void setup() {
    // put your setup code here, to run once:
}

void loop() {
    for(int i = 0;i < 3;i++){
        ledky[i].On();
        delay(50);
        ledky[i].Off();
        delay(50);
    }
}