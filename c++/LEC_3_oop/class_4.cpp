#include <iostream>
using namespace std;
class DATA
{
            public:
            bool flage=0;
            DATA();
            DATA(bool flage);
            void timer_();
};
DATA::DATA(){}
DATA::DATA(bool flage)
{
    this->flage=flage;
    cout<<"flage has been updated"<<endl;
}
void DATA::timer_()
{
    cout<<"Timer has been started"<<endl;
}
int main()
{
    int f=1;
    
    DATA d(f);
    DATA *t=&d;
    if(f==1)
    {
        t->timer_();
    }
    return 0;
}