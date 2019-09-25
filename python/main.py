#!/usr/bin/env python3

import car
import dog
import random

# Nice inheritance references.
animal = dog.Dog()
print(animal.noise())
print(animal.poo())

# Unrelated method with the same name.
my_car = car.Car()
print(my_car.noise())

# Duck typing references.
r = random.randint(0, 1)
if r:
    animal_or_car = car.Car()
else:
    animal_or_car = dog.Dog()
print(animal_or_car.noise())