#!/usr/bin/env python3

import os
import sys

import car
import cat
import dog

print(f'{os.environ["PYTHONPATH"]=}')
print(f'{sys.argv=}')

# Deterministic inheritance reference.
my_animal = dog.Dog()
print(my_animal.noise())
print(my_animal.poo())

# Deterministic inheritance reference.
my_animal = cat.Cat()
print(my_animal.noise())
print(my_animal.poo())

# Unrelated method with the same name.
my_car = car.Car()
print(my_car.noise())

# Unresolved duck typing reference.
if len(sys.argv) == 1:
    animal_or_car = car.Car()
else:
    animal_or_car = dog.Dog()
print(animal_or_car.noise())

import insubdir
print(f'{insubdir.a=}')
