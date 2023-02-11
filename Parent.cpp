#include "Parent.h"

Parent::Parent() : _name("Alex"), _age(0) {}
 
void Parent::PrintName() {
	std::cout << "Parent name " << _name << std::endl;
}

int Parent::getAge(int age) {
	return _age = age;
}

void Parent::PrintAge() {
	std::cout << " Parent age: " << _age << std::endl;
}