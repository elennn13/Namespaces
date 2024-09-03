#include "Lib.hpp"
#include <iostream>

void space2::say_hi() {
	std::cout << "Hello World!\n";
}



space2::Person::Person() : age(0) { } // в пространстве имен есть Person метод Person в классе видимости Person

space2::Person::Person(std::string name, int age) {
	this->name = name;
	this->age = age;
}

void space2::Person::print() const {
	std::cout << "Имя: " << name << std::endl;
	std::cout << "Возраст: " << age << std::endl;
}
