#include<iostream>
#include "shlibsecondexports.h"
#include "staticlibsingleton.h"

#ifdef __cplusplus
extern "C"
{
#endif
int shlibsecond_function(void)
{
	std::cout <<__FUNCTION__<<":"<<std::endl;
	Singleton& singleton = Singleton::GetInstance();
	singleton.DoSomething();
	return 0;
}

#ifdef __cplusplus
}
#endif

