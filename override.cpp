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

	//�����е�Foo()�����˻����е�Foo����;
	derive.Foo();


	Sleep(5000);
    return 0;
}

