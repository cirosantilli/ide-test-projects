CXX = g++

.PHONY: clean

main.out: main.cpp animal.cpp animal_template.cpp car.cpp cat.cpp dog.cpp bulldog.cpp
	$(CXX) -Werror -Wall -Wextra -pedantic-errors -std=c++11 -O0 -ggdb3 -I custom_include_path/ -o '$@' -std=c++11 $^

clean:
	rm main.out
