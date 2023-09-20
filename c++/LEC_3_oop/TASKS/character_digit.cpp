//check if the char is igit ?
#include <iostream>
using namespace std;

int main() {
    char char_;
    cout<<"input char"<<endl;
    cin>>char_;

  int i=isdigit(char_);
  if(i==1)
   { cout << "is digit"<<endl;
   }
   else
   {
     cout<<"is char"<<endl;
   }


  return 0;
}