#include<iostream>
#include "shlibfirstexports.h"
#include "shlibsecondexports.h"
#include "staticlibsingleton.h"

using namespace std;

int main(int argc, char ** argv)
{
	shlibfirst_function();
	shlibsecond_function();
	cout<<" Accessing Singleton directly from the client app"<<endl;
	Singleton& singleton = Singleton::GetInstance();
	singleton.DoSomething();
	return 0;
}
