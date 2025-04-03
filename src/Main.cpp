/*
 * Main.cpp (For CPPTestingChamber1)
 *
 *  Created on: Mar 21, 2025
 *      Author: Mason Dunn
 */

#include <iostream>
#include <string>

using namespace std;

class Ship {
protected:
	string name;
	string purpose;
	string size;
	int speed;
	int distanceTraveled;
public:
	Ship() {
		name = "Stock Ship";
		purpose = "Undetermined";
		size = "small";
		speed = 1;
		distanceTraveled = 0;
	}
	Ship(string n, string p, string si, int sp) {
		name = n;
		purpose = p;
		size = si;
		speed = sp;
		distanceTraveled = 0;
	}

	string getName() {
		return name;
	}
	string getPurpose() {
		return purpose;
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

	void moveShip() {
		cout << name << " just moved " << speed << " miles!" << endl;
		distanceTraveled += speed;
	}
};

class Airship : public Ship {
protected:
	int altitude;
public:
	Airship() {
		name = "Stock Airhip";
		purpose = "Undetermined";
		size = "small";
		speed = 1;
		altitude = 0;
		distanceTraveled = 0;
	}
	Airship(string n, string p, string si, int sp) {
		name = n;
		purpose = p;
		size = si;
		speed = sp;
		altitude = 0;
		distanceTraveled = 0;
	}

	int getAltitude() {
		return altitude;
	}
	void increaseAltitude(int a) {
		altitude += a;
		if (a < 0) {a *= -1;}
		distanceTraveled += a;
	}
};

int main() {
	return 0;
}