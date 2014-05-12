#include "ClassTemplates.h"
#include <string>	//necessary so that cout can output an object that returns a string

void main() {

	//class used with int
	int val1 = 100, val2 = 200;
	MyClass<int> intObj;
	intObj.Add(val1);
	intObj.Add(val2);
	cout << intObj.Get() << endl;		//outputs 200

	//class used with string
	std::string str1 = "Hello", str2 = "World";
	MyClass<string> strObj;
	strObj.Add(str1);
	strObj.Add(str2);
	cout << strObj.Get() << endl;	//outputs World

	getchar();
}