//fill array 10->10000 withou using array without loop
//using go to
#include <iostream>
using namespace std;
 int main()
 {      
    int i=9;
    seq: 
        i++;
        cout<<i<<endl;
        if(i<100)
        {
            goto seq;
        }
        else if(i==100)
        {  
            cout<<"finished";
        }
    return 0;
 }
