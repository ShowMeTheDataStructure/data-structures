GTEST_DIR=googletest/googletest

CXXFLAGS += -std=c++14

dir_datastructures = ../DataStructures

linkedlistTest:
	g++ -o linkedList_test $(dir_datastructures)/linkedList/linkedList_test.cpp  -isystem ./googletest/googletest/include -L ./googletest/build -pthread -lgtest $(CXXFLAGS)

queueTest:
	g++ -o queue_test $(dir_datastructures)/$(queue) -isystem ./googletest/googletest/include -L ./googletest/build -pthread -lgtest $(CXXFLAGS)

stackTest:
	g++ -o stack_test $(dir_datastructures)/$(stack) -isystem ./googletest/googletest/include -L ./googletest/build -pthread -lgtest $(CXXFLAGS)

.phony:	clean
clean:
	$(RM)	linkedList_test	queue_test	stack_test