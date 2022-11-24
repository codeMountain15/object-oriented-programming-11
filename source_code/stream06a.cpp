// stream06a.cpp 
// an example of the fstream class


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// create the fstream class object
	fstream obj;

	string temp = "";

	obj.open("donkey.txt", ios::in | ios::out);
	
	// insert to file loop
	while (obj) {
		cout << "Type a message to the donkey!\n";
		getline(cin, temp);

		if (temp == "0") break;

		obj << temp << endl;
	}
	
	obj.seekg(0, ios::beg);
	// read from file loop
	while (obj >> temp) {
		cout << temp << endl;
	}
	
	obj.close();

	return 0;
}
