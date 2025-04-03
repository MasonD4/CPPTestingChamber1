/*
 * Main.cpp (For CPPTestingChamber1)
 *
 *  Created on: Mar 21, 2025
 *      Author: Mason Dunn
 * 
 * Most recent commit: Fixed capitalization on Ship class (ship became Ship)
 */

#include <iostream>
#include <string>

using namespace std;

class Ship {
protected:
	string name;
	string size;
	int speed;
	int distanceTraveled = 0;

public:
	Ship() {
		name = "Stock Ship";
		size = "small";
		speed = 1;
	}
	Ship(string n, string si, int sp) {
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
	Ship boat("The Boat", "Huge", 5);
	return 0;
}