#include <thread>
#include <iostream>
using namespace std;
//type1:2-Thread pass lmbda

int main ()
{
    auto lmbda=[](int y){cout<<"thread pass lmbada function"<<y;};
    thread th(lmbda,44);
    th.join();
    return 0;
}