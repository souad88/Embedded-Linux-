#include <iostream>
using namespace std;
class Int
{
    public:
        int *ptr;
        explicit Int(int *ptr):ptr(ptr){}
        Int(){}
        Int(const Int &other){this->ptr=new int *other.ptr;}    
        Int &operator=(const Int &other)
        {
            //self assignment
            if(&other==this)
            {
                return *this;
            }
            this->x=other.x;
            if(this->ptr)
            {
                delete ptr;
                ptr=nullptr;
            }
            this->ptr=new int(*other.ptr);
            return *this;
        }
        ~Int()
        {
            if(ptr)
            {
                delete ptr;
                ptr=nullptr;
            }
        }

};
Int getInt()
{
    Int i(new int(5));
    return i;//return with temp value
}
int main()
{
    Int i1(getInt(5));
    Int i2(getInt(3));
    i2=i1;
    *(i2.ptr)=10;
    cout<<*(i1.ptr)<<endl;
    cout<<*(i2.ptr)<<endl;
   
    return 0;
}