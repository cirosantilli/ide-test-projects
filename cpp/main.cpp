#include <iostream>

#include "car.hpp"
#include "dog.hpp"

int main() {
    Animal *animal = new Dog();
    std::cout << animal->noise() << std::endl;
    std::cout << animal->poo() << std::endl;

    Car *car = new Car();
    std::cout << car->noise() << std::endl;
}
