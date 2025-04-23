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
	int speed;

public:
	Vehicle() {
		name = "John Doe's Vehicle";
		speed = 5;
	}
	Vehicle(string n, int s) {
		name = n;
		speed = s;
	}
	string getName(){
		return name;
	}
	int getSpeed() {
		return speed;
	}
	virtual void move() = 0;
};

class Car : public Vehicle {
	protected:
	string licensePlate; // 7 digits
	string color;
	public:
	Car() {
		name = "John Doe's Car";
		speed = 5;
		licensePlate =  "1234567";
		color = "Red";
	}
	Car(string n, int s, string lP, string c) {
		name = n;
		speed = s;
		licensePlate = lP;
		color = c;
	}
	string getPlate() {
		return licensePlate;
	}
	string getColor() {
		return color;
	}
	void move() override {
		cout << name << " is moving! It moved " << speed << " units." << endl;
	}
};

class Airship : public Vehicle {
protected:
	int altitude;
	string purpose;
public:
	Airship() {
		name = "John Doe's Airship";
		speed = 5;
		altitude = 0;
		purpose = "Travel";
	}
	Airship(string n, int s, int a, string p) {
		name = n;
		speed = s;
		altitude = a;
		purpose = p;
	}
	int getAltitude(){
		return altitude;
	}
	string getPurpose() {
		return purpose;
	}
	void move() override {
		cout << name << " is moving! It moved " << speed << " units." << endl;
	}
	void fly(int a) {
		altitude += a;
		cout << name << " is flying! It moved " << a << " vertical units." << endl;
	}
};

Car operator+(Car a, Car b) {
	Car output(a.getName(), (a.getSpeed() + b.getSpeed()), b.getPlate(), b.getColor());
	return output;
}

Airship operator+(Airship a, Airship b) {
	Airship output(a.getName(), (a.getSpeed() + b.getSpeed()), (a.getAltitude() + b.getAltitude()), b.getPurpose());
	return output;
}

int main() {
	Car johnsCar;
	Car janesCar("Jane's Speed Car", 100, "LostD0g", "Green");
	Car epicMobile =  johnsCar + janesCar;
	
	Airship melonBird("Melon-Bird", 458, 5480, "Transport and cargo");
	Airship halberd("The Halberd", 500, 5099, "Aerial Battleship/ Flagship");
	Airship theFlyingJohn;
	Airship melonberd = melonBird + halberd;
	
	cout << melonberd.getName() << endl;
	cout << melonberd.getSpeed() << endl;
	cout << melonberd.getAltitude() << endl;
	cout << melonberd.getPurpose() << endl;

	return 0;
}