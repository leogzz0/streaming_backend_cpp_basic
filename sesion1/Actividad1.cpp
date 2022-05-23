// C++ program to demonstrate implementation
// of Inheritance

// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Base class
class Parent {
public:
	int id_p;
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent {
public:
	int id_c;
};

// main function
int main()
{
	Child obj1;
	Child obj2;

	// An object of class child has all data members
	// and member functions of class parent
	obj1.id_c = 7;
	obj1.id_p = 91;
	obj2.id_c = 8;
	obj2.id_p = 100;
	cout << "Child id is: " << obj1.id_c << '\n';
	cout << "Parent id is: " << obj1.id_p << '\n';
	cout << "Parent id2 is: " << obj2.id_p << "\n";

	return 0;
}
