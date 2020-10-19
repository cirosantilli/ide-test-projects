#include "animal_template.hpp"
#include "dog.hpp"

// Explicit template instantiation.
template std::string template_animal_noise<Dog>(Dog& t);
template class AnimalTemplate<Dog>;
