CXX = g++

.PHONY: clean

main.out: main.cpp animal.cpp car.cpp cat.cpp dog.cpp bulldog.cpp
	$(CXX) -I custom_include_path/ -o '$@' -std=c++11 $^

clean:
	rm main.out
