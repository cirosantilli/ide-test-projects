CXX = g++

.PHONY: clean

main.out: main.cpp animal.cpp car.cpp cat.cpp dog.cpp
	$(CXX) -o '$@' -std=c++11 $^

clean:
	rm main.out
