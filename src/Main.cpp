/*
 * Main.cpp (For CPPTestingChamber1)
 *
 *  Created on: Mar 21, 2025
 *      Author: Mason Dunn
 * 
 * Most recent commit: New Ship class
 */

#include <iostream>
#include <string>

using namespace std;

class ship {
protected:
	string name;
	string size;
	int speed;
	int distanceTraveled = 0;

public:
	ship() {
		name = "Stock Ship";
		size = "small";
		speed = 1;
	}
	ship(string n, string si, int sp) {
		name = n;
		size = si;
		speed = sp;
	}

	string getName() {
		return name;
	}
	string getSize() {
		return size;
	}
	int getSpeed() {
		return speed;
	}
	int getDistance() {
		return distanceTraveled;
	}

	void move() {
		distanceTraveled += speed;
		cout << name << " just moved " << speed << " spaces!" << endl; 
	}
};

int main() {
	return 0;
}