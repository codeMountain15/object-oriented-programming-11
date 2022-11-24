// stream06.cpp 
// an example of the fstream class


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	// create the fstream class object
	fstream obj;

	string temp = "";

	// obj.open("donkey.txt", ios::in|ios::out|ios::app)
	// ios::trunc mode deletes all the file content before opening it
	
	obj.open("donkey.txt", ios::app);
	
	// insert to file loop
	while ((temp != "0") && obj.is_open()) {
		cout << "Type a message to the donkey!\n";
		obj << temp;
		cin >> temp;
	}
	obj.close();


	obj.open("donkey.txt", ios::in);

	// read from file loop
	while (obj >> temp) {

		cout << temp << endl;
	}
	obj.close();

	return 0;
}
