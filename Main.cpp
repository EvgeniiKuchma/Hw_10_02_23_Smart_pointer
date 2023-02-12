#include <iostream>
#include <memory>
#include "Parent.h"
#include "Child.h"

int main() {
	
	std::shared_ptr<Parent> ch = std::make_shared<Child>();
	ch->PrintName();
	auto pch = std::dynamic_pointer_cast <Child>(ch);
	if (!pch) {
		std::cout << " pch -> nullptr" << std::endl;
	}
	else
	pch->PrintName();
	
	return 0;
}