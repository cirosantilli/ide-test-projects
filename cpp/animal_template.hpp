#ifndef ANIMAL_TEMPLATE_HPP
#define ANIMAL_TEMPLATE_HPP

#include <string>

#include "animal.hpp"
#include "dog.hpp"

template <class T>
std::string template_animal_noise(T& t) {
	return t.noise();
}

template <class T>
struct AnimalTemplate {
    T animal;
    AnimalTemplate(T animal) : animal(animal) {}
    std::string noise() {
        return animal.noise();
    }
};

extern template std::string template_animal_noise<Dog>(Dog& t);
extern template class AnimalTemplate<Dog>;

#endif
