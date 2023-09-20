#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

class complex
{

    private:
    
    public:  
      float real,img;
     complex(){}
     complex(float real,float img):real(real),img(img){}
     complex operator+(complex c2)
     {
         complex res;
         res.real=real+c2.real;
         res.img=img+c2.img;
         return res;
     } 
   

};

int main()
{
   complex c1(4.5,6.6), c2(5,8);
   complex res;
   res=c1+c2;
   cout<<"complex number : "<<res.real<<"+"<<res.img<<"i"<<endl;
    return 0;
}