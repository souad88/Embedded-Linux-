//handle interrupt signal like (ctrl+c)
#include <unistd.h>
#include <iostream>
#include <cstdlib>
#include <signal.h>
using namespace std;
void signal_handler(int sign_) {
   cout <<"caught signal" << sign_<< endl;

   exit(sign_);//exit prog when CTR+C pressed
}
int main(){
   signal(SIGINT, signal_handler);//SIGINT :signal Interrupt->receive interrupt from OS
   while(true){
      cout << "Program processing..." << endl;
      sleep(1);
   }
   return EXIT_SUCCESS;
}