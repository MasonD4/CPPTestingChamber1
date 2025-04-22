/*
 * Main.cpp (For CPPTestingChamber1)
 *
 * Created on: Mar 21, 2025
 *     Author: Mason Dunn
 */

#include <iostream>
#include <string>
  
using namespace std;

class Ship {
protected:
	string name;
	int xPosition;
public:
	Ship () {
		name = "Unnamed ship";
		xPosition = 0;
	}
	Ship (string n) {
		name = n;
		xPosition = 0;
	}
	virtual string getName() {
		return name;
	}
	int getXPos() {
		return xPosition;
	}
	void move(int m) {
		xPosition += m;
	}
};

class Aircraft {
protected:
	string name;
	int yPosition;
public:
	Aircraft () {
		name = "Unnamed aircraft";
		yPosition = 0;
	}
	Aircraft (string n) {
		name = n;
		yPosition = 0;
	}
	virtual string getName() {
		return name;
	}
	int getYPos() {
		return yPosition;
	}
	void fly(int f) {
		yPosition += f;
	}
};

class Airship : public Ship, public Aircraft {
public:
	Airship () {
		Ship::name = "Unnamed airship";
		xPosition = 0;
	}
	Airship (string n) {
		Ship::name = n;
		xPosition = 0;
	}
	string getName() override {
		return Ship::name;
	}
	int getXPos() {
		return xPosition;
	}
	int getYPos() {
		return yPosition;
	}
};

int main() {
	Airship melonBird("Melon Bird");
	Airship johnsShip;

	cout << johnsShip.getName() << ": (" << johnsShip.getXPos() << ", " << johnsShip.getYPos() << ")" << endl;
	johnsShip.move(10);
	johnsShip.fly(5);
	cout << johnsShip.getName() << ": (" << johnsShip.getXPos() << ", " << johnsShip.getYPos() << ")" << endl;
	
	cout << endl;

	cout << melonBird.getName() << ": (" << melonBird.getXPos() << ", " << melonBird.getYPos() << ")" << endl;
	melonBird.move(45); 
	melonBird.fly(8);
	cout << melonBird.getName() << ": (" << melonBird.getXPos() << ", " << melonBird.getYPos() << ")" << endl;
	return 0;
}