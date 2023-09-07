#include <iostream>
using namespace std;

class dd
{
        private :
            int x;
            float xx;
        public:
            dd(); //constructor
           ~dd(); //deconstructor
           void print_name();
           void print_age();    
};
dd::dd(){}
dd::~dd(){}
void dd::print_name()
{
        cout<<"Fayrouz"<<endl;
}
void dd::print_age()
{
        cout<<"6.5"<<endl;
}
int main()
{
    dd dt;
    dd *t=&dt;
    t->print_name();
    t->print_age();
    t->~dd();   
    return 0;
}