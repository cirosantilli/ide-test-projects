CXX = g++

.PHONY: clean

main.out: main.cpp car.cpp dog.cpp animal.cpp
	$(CXX) -o '$@' -std=c++11 $^

clean:
	rm main.out
