/*
 * Main.cpp (For CPPTestingChamber1)
 *
 *  Created on: Mar 21, 2025
 *      Author: Mason Dunn
 */

#include <iostream>
#include <string>

using namespace std;

int add(const int&, const int&);

class Ship {
private:
	string name;
	char size;
	int speed;
	int hullDurability;
	int distanceTraveled;
public:
	Ship() {
		name = "Stock Ship";
		size = 's';
		speed = 1;
		hullDurability = 1;
	}
	Ship(string n, int si, int sp, int hD) {
		name = n;
		size = si;
		speed = sp;
		hullDurability = hD;
	}

	string getName() {
		return name;
	}
	int getSize() {
		return size;
	}
	int getSpeed() {
		return speed;
	}
	int getHull() {
		return hullDurability;
	}
	int getDistance() {
		return distanceTraveled;
	}

	void moveShip() {
		cout << name << " just moved " << speed << " miles!" << endl;
		distanceTraveled += speed;
	}
};

class Airship : public Ship {
	//
};

int main() {
	cout << "Hello World!" << endl;
	return 0;
}

int add(const int& a, const int& b) {
	return a + b;
}
