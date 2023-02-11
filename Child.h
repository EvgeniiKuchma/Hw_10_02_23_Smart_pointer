#pragma once
#include <iostream>
#include "Parent.h"
class Child : public Parent
{
public:
	Child();
	void PrintName() override;
	int getAge(int age) override;
	void PrintAge() override;
private:
	int _age;
	const std::string _name;
};

