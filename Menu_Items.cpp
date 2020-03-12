#include "Menu_Items.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
Menu_Items::Menu_Items() {

}

void Menu_Items::setfile(string i) {
    input = i;
    ifstream file_base(input);

}

void Menu_Items::openfile() {
	file_base.open(input);
}

void Menu_Items::showcontents() {

    if (file_base.is_open()) {

        while (getline(file_base, line)) {

            cout << line << endl;


        }
        
        file_base.close();
        cout << endl;
    }
    else {
        cout << "error";
    }
}
void Menu_Items::closefile() {
    file_base.close();
}