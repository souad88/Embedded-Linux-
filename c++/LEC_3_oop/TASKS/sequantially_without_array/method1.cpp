//fill array 10->10000 withou using array without loop
#include <iostream>
using namespace std;
template <int k>class sequence
{
        public:
            static void print_()
            {
                sequence<k-1>::print_();
                cout<<k<<endl;
            }
};
template <>class sequence<10>
{
        public:
            static void print_()
            {
                cout<<10<<endl;
            }
};
int main()
{
        const int k=100;
        sequence<k>::print_();

        return 0;
}       