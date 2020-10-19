#ifndef ANIMAL_TEMPLATE_HPP
#define ANIMAL_TEMPLATE_HPP

#include <string>

#include "animal.hpp"

template <class T>
std::string template_animal_noise(T& t) {
	return t.noise();
}

#endif
