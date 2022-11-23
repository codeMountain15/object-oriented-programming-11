// myClasses.h

#pragma once

class Animal {
private:
	int age;

public:
	Animal(int);
	int get_age();
};


class Spirit {
private:
	const char* name;

public:
	Spirit(const char*);
	const char* get_name();
};
