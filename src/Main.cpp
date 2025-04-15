/*
 * Main.cpp (For CPPTestingChamber1)
 *
 * Created on: Mar 21, 2025
 *     Author: Mason Dunn
 */

#include <iostream>
#include <string>
  
using namespace std;

class Airship {
private:
	int size;
public:
	Airship() {}
	Airship(int s) {size = s;}
	int getSize() {return size;}
};

int main() {
	cout << "The program works!" << endl;
	return 0;
}