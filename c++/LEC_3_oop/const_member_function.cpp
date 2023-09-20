#include <iostream>
using namespace std;
class ggg
{
    public:
        ggg(int32_t &b_,int32_t a_ [10]):a(a_),b(b_)
        {

        }
        //non-compliant: returns non const pointr
        int32_t* fun1()const
        {
            return a;
        }
        //non-compliant:return non const pointr to data
        int32_t* fun2()const
        {
            return &b;
        }
        //compiant:returns const pointr to data
        const int32_t* fun3()const
        {
            return &b;
        }
        private:
        int32_t *a;
        int32_t &b;
};
