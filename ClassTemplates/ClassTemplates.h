//Demonstration of the usage of class templates
#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

template <typename T>
class MyClass {
	vector<T> data;

public:
	void Add(T& a) {
		data.push_back(a);
	}

	T Get() {
		while(!data.empty()) {
			return data.back();
		}
		throw out_of_range("Out of range");
	}
};

