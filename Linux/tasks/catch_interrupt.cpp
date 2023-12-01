#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <signal.h>

using namespace std;
void catch_ctrl_c(int sign_)
{
	cout<<"ctr-c is pressed"<<sign_<<endl;
	cout <<"Exiting...."<<endl;
	exit(sign_);
}
int main()
{

	signal(SIGINT,catch_ctrl_c);
	while(true)
	{
		cout<<"In Processing>>........."<<endl;
		sleep(1);	
	}
	return 0;
}
