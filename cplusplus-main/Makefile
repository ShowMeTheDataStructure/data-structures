GTEST_DIR=googletest/googletest

CXXFLAGS += -std=c++14

all:
	g++ -o main main.cpp ./DataStructures/linkedList/linkedList.cpp

test:
	g++ -o linkedList_test ./DataStructures/linkedList/linkedList_test.cpp ./DataStructures/linkedList/linkedList.cpp -isystem ./googletest/googletest/include -L ./googletest/build -pthread -lgtest $(CXXFLAGS)
	./linkedList_test

.phony:	clean
clean:
	$(RM)	main	linkedList_test