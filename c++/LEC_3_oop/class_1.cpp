#include <iostream>
using namespace std;
class LED
{
    
     private: //variables
        uint8_t ledpin=10; 
    public: //functions
        void TurnLedOn();
        void TurnLedOff();
   
};
void LED::TurnLedOn()
{
    cout<<"led is high"<<ledpin<<endl;
}
void LED::TurnLedOff()
{
    cout<<"led is low"<<ledpin<<endl;
}
int main()
{
    LED l; //instance 
    l.TurnLedOn();
    l.TurnLedOff();
    LED *t=&l;
    t->TurnLedOn();
    t->TurnLedOff();
}