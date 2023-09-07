#include <iostream>
using namespace std;
class LED
{
        public:
        LED();
        LED(int pin_1,int pin_2);
        void led_1();
        void led_2();
        private:
            uint8_t led_1_pin;
            uint8_t led_2_pin;

};
LED::LED(){};
LED::LED(int pin_1,int pin_2):led_1_pin(pin_1),led_2_pin(pin_2)
{
    cout<<"LED1 connected on pin "<<led_1_pin<<endl;
    cout<<"LED2 connected on pin "<<led_2_pin<<endl;
}
void LED::led_1()
{
    cout<<"Led 1 is high"<<endl;
}
void LED::led_2()
{
    cout<<"led 2 is high"<<endl;
}
int main()
{
    LED l(3,4);
    LED *t=&l;
    
    t->led_1();
    t->led_2();
    
    return 0;
}