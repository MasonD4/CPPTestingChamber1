/*
 * Main.cpp (For CPPTestingChamber1)
 *
 * Created on: Mar 21, 2025
 *     Author: Mason Dunn
 */

#include <iostream>
#include <string>
  
using namespace std;

class Vehicle {
protected:
	string name;
	int xPosition;
public:
	Vehicle () {
		name = "Unnamed vehicle";
		xPosition = 0;
	}
	Vehicle (string n) {
		name = n;
		xPosition = 0;
	}
	string getName() {
		return name;
	}
	int getXPos() {
		return xPosition;
	}
	void move(int m) {
		xPosition += m;
	}
	virtual void whatAreYou() {
		cout << "I am a Vehicle" << endl;
	}
};

class Airship : public Vehicle {
private:
	int yPosition;
public:
	Airship () {
		name = "Unnamed airship";
		xPosition = 0;
		yPosition = 0;
	}
	Airship (string n) {
		name = n;
		xPosition = 0;
		yPosition = 0;
	}
	int getYPos() {
		return yPosition;
	}
	void fly(int f) {
		yPosition += f;
	}
	void whatAreYou() override {
		cout << "I am an airship" << endl;
	}
};

void RACE(Vehicle a, Vehicle b) {
	if (a.getXPos() > b.getXPos()) {
		cout << a.getName() << " won!" << endl;
	}
	else if (b.getXPos() > a.getXPos()) {
		cout << b.getName() << " won!" << endl;
	}
	else {
		cout << "TIE!" << endl;
	}
}

int main() {
	// Basically ` Base *base = new Derived `
	Vehicle *melonBird = new Airship("Melon Bird");
	melonBird->move(458);
	
	Airship johnsShip;
	johnsShip.move(10); 
	johnsShip.fly(5);

	Airship Halberd("The Battleship Halberd");
	Halberd.fly(55);
	Halberd.move(1000);

	Vehicle *ptrToHalberd = &Halberd;
	ptrToHalberd->move(15);

	Vehicle janesCar;
	janesCar.move(88);

	RACE(janesCar, *melonBird);
	RACE(Halberd, johnsShip);
	RACE(janesCar, *ptrToHalberd);
	cout << "Halberd: "; Halberd.whatAreYou();
	cout << "Jane's car: "; janesCar.whatAreYou();
	cout << "Melon Bird: "; melonBird->whatAreYou();
	return 0;
}