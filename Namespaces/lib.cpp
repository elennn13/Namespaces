#include "Lib.hpp"
#include <iostream>

void space2::say_hi() {
	std::cout << "Hello World!\n";
}



space2::Person::Person() : age(0) { } // � ������������ ���� ���� Person ����� Person � ������ ��������� Person

space2::Person::Person(std::string name, int age) {
	this->name = name;
	this->age = age;
}

void space2::Person::print() const {
	std::cout << "���: " << name << std::endl;
	std::cout << "�������: " << age << std::endl;
}
