#include <iostream>
class foo
{
    public:
        static const int f=5;
};
void bar(const int& b)
{

}
//foo::f in ROdata
int main()
{
     bar(foo::f);
}