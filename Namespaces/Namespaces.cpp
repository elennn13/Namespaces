#include <iostream>
#include "Lib.hpp"

namespace space1 {
    void foo() {
        std::cout << "Пространство 1\n";
    }
    int var;
}

namespace space2 {
    void foo() {
        std::cout << "Пространство 2\n";
    }
  }

// Продление пространства имен
namespace space1 {
    void poo() {
        std::cout << "Пу!\n";
    }
}

int global; // глобальное пространство




int main(){
    setlocale(LC_ALL, "ru");


    space1::foo();
    space1::var = 7;
    std::cout << "var = " << space1::var << std::endl;
    space2::foo();
    space1::poo();



    space2::say_hi();

    space2::Person p1("Родион", 20);
    p1.print();


    int global; // в локальном пространстве


    global = 10; // обращение к локальной переменной 
    ::global = 7; // обращение к глобальной переменной

    return 0;
}
