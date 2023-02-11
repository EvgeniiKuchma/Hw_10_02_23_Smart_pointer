#pragma once
#include <iostream>
class Parent
{
public:
	Parent();
	virtual ~Parent(){}
	virtual void PrintName();
	virtual int getAge(int age);
	virtual void PrintAge();
private :
	int _age;
	const std::string _name;
};

