#include <iostream>

#include "dog.hpp"

int main() {
    Animal *animal = new Dog();
    std::cout << animal->noise() << std::endl;
    std::cout << animal->poo() << std::endl;
}