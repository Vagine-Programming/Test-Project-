

#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Menu_Items
{	public:
	Menu_Items();

	void setfile(string file_input);
	void openfile();
	void showcontents();
	void closefile();
private:
	string line;
	ifstream file_base;
	string input;

};

