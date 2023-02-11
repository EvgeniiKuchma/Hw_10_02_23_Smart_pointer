#include "Child.h"

Child::Child() : _name("Billy"), _age(0){}

void  Child::PrintName() {
	std::cout << "Child name"<< _name << std::endl;
};

int  Child::getAge(int age) {
	return _age = age;
}

void Child::PrintAge() {
	std::cout << " Child age: " << _age << std::endl;
}