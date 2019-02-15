#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

class CBase
{
public:
	CBase() {
	
	
	}
	~CBase()
	{

	}

	virtual void Foo()
	{
		cout << "i am base class." << endl;
	}


};


class CDerive:public CBase
{
public:
	CDerive()
	{

	}
	~CDerive()
	{

	}

	void Foo()
	{
		cout << "i am derived class..." << endl;
	}
};





int main()
{

	CBase base;
	CDerive derive;

	base.Foo();

	//子类中的Foo()覆盖了基类中的Foo（）;
	derive.Foo();


	Sleep(5000);
    return 0;
}

