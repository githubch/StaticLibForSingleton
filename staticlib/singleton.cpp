#include<iostream>
#include "singleton.h"

Singleton* Singleton::m_pInstance = NULL;
Singleton& Singleton::GetInstance(void)
{
	if(NULL == m_pInstance)
		m_pInstance = new Singleton();
	return *m_pInstance;
}

int Singleton::DoSomething()
{
	std::cout<< " Singleton instance address = "<<this<<std::endl;
	return 0;
}

