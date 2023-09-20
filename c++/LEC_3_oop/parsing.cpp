#include<iostream>
using namespace std;
#include <string.h>



int main()
{
    int id;
    float score;
    string name;
    string frame ="Souad gamal 7676 90.0";
    stringstream st(frame);
    st>>name>>id>>score;
    cout<<name<<endl;
    cout<<id<<endl;
    cout<<score<<endl;
    
    return 0;
}