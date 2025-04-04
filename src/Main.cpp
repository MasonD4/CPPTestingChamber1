/*
 * Main.cpp (For CPPTestingChamber1)
 *
 *  Created on: Mar 21, 2025
 *      Author: Mason Dunn
 * 
 * 
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
		cout << "This is the default Ship constructor.\nName: " << name << endl;
	}
	Ship(string n, string si, int sp) {
		name = n;
		size = si;
		speed = sp;
		cout << "This is the <string, string, int> Ship constructor.\nName: " << name << endl;
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

class Airship : public Ship {
protected:
	int altitude = 0;

	public:
	Airship() {
		name = "Stock Airship";
		size = "small";
		speed = 1;
		cout << "This is the default Airship constructor.\nName: " << name << endl;
	}
	Airship(string n, string si, int sp) {
		name = "Stock Airship";
		size = "small";
		speed = 1;
		cout << "This is the <string, string, int> Airship constructor.\nName: " << name << endl;
	}

	void fly(int a) {
		altitude += a;
		if (a < 0) {
			a *= -1;
		}
		distanceTraveled += a;
	}
};

int main() {
	Ship boat("The Boat", "Huge", 5);
	Airship melonBird("Melon-Bird", "Large", 10);
	return 0;
}