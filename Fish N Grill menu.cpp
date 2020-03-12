


#include <iostream>
#include <string>
#include <fstream>
#include "Menu_Items.h"
using namespace std;

int main()
{
	Menu_Items Menu_1, Menu_2;

	Menu_1.setfile("Starters.txt");
	Menu_1.openfile();
	Menu_1.showcontents();
	Menu_1.closefile();
	Menu_2.setfile("Entrées.txt");
	Menu_2.openfile();
	Menu_2.showcontents();
	Menu_2.closefile();



}

