// methods.cpp
// definitions of the methods

#include "myClasses.h"

Animal::Animal(int a) {
	age = a;
}

int Animal::get_age() {
	return age;
}

Spirit::Spirit(const char* input) {
	name = input;
}

const char* Spirit::get_name() {
	return name;
}
