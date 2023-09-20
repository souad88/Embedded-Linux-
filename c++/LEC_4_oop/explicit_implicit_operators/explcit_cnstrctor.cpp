#include <iostream>
using namespace std;
class dd_
{
 public:
     //dd_();     
      explicit dd_();
      explicit dd_(int);
      explicit dd_(const char* ,int=0);
      explicit dd_(int,int,float,double);
  
};
dd_::dd_(){cout<<"unintialized"<<endl;}
dd_::dd_(int d){cout<<"constructor 1-parameter "<<endl;}
dd_::dd_(const char*,int){cout<<"constructor two parameters"<<endl;}
dd_::dd_(int,int,float,double){cout<<"four param"<<endl;}
int main()
{
    //dd_ f1=1; //error becuase it is an implicit conversion
    dd_ f1;
    dd_ a2 = dd_(1);
    dd_ a3(1);
    dd_ a4 = dd_("kdlk;ld;lsd");
    dd_ aa("jkhkhkh");
    dd_* p = new dd_(1);
    dd_ a5 = (dd_)4; //diffrenet call of constructor
    dd_ a7=dd_(2,3,4.5,45435);
    return 0;

}