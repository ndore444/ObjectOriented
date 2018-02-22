#pragma once

#include <string>
#include <vector>
#include <iostream>

using namespace std; 

class WaterVehicle
{
public:
	///constructors

	//default constructor
	WaterVehicle();
	//creates a _length long ship called _name with _orientation h(orizontal) or v(vertical) 
	WaterVehicle(string _name, int length, char _orientation);
	
	///accessors

	//function definitions here in header
	int getX() { return x; }
	int getY() { return y; }
	int getLength() { return length; }
	bool getSunkenStatus() { return sunk; }
	char getOrientation() { return orientation; }
	vector<int> getXList() { return xCoordList; }
	vector<int> getYList() { return yCoordList; }

	///mutators

	//function definitions here in header
	void setSunkenStatus(bool _status) { sunk = _status; }

	///memberfunctions

	void placeShip(int _x, int _y);

	///operator overloads 

	//display ship
	friend ostream& operator <<(ostream& outs, const WaterVehicle& _ship);

private:
	const unsigned int maxLength = 10;


	//ship's length in number of grid spaces
	const int length = 1;
	//ship's initial coordinates - x and y on the grid (initialized in constructor) 
	int x = 0, y = 0;
	//a list of x and y coordinates that follow the ship's length
	vector<int> xCoordList, yCoordList;
	//ships facing direction (h for horizontal and v for vertical)
	char orientation = 'h';
	//bool describing whether the ship is sunken or not
	bool sunk = false;
	string name;

	///mutators

	//function definitions here in header
	void setX(int _x) { x = _x; }
	void setY(int _y) { y = _y; }
	void setOrientation(char _orientation) { orientation = _orientation; }
};

