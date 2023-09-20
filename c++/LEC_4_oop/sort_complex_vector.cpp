#include <iostream>
#include <vector>
#include <cmath>
#include <iterator>
#include <algorithm>
using namespace std;
class complex
{
    public:  
      float real,img;
      complex(){}
      complex(float real,float img):real(real),img(img){}
};
bool compare(vector<complex>a,vector<complex>b)
{
        if(a.real==b.real)
        {
                return a.img<b.img;

        }
    return a.real<b.real;
}

int main()
{
    complex s(9,0);
    complex f(6,7);
    complex g(4,6);
    vector<complex>dt;
    dt.push_back(s);
    dt.push_back(f);
    dt.push_back(g);
    sort(dt.begin(),dt.end(),compare);
    //cout<<"complex number : "<<res.real<<"+"<<res.img<<"i"<<endl;
    return 0;
}