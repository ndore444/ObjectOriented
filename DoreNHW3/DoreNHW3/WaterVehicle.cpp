#include "WaterVehicle.h"


WaterVehicle::WaterVehicle()
{
	/* Intentionally Blank */
}

WaterVehicle::WaterVehicle(string _name, int _length,char _orientation):
	name(_name),
	length(_length),
	orientation(_orientation)
{
	xCoordList.clear();
	yCoordList.clear();
	placeShip(x, y);
}

//accessors and mutators defined in header

void WaterVehicle::placeShip(int _x, int _y)
{
	//TO DO: switch :)
	setX(_y);
	setY(_x);

	xCoordList.clear();
	yCoordList.clear();

	//if the orientation is vertical, create the ship and its coords along it's length. 
	if (orientation == 'v')
	{
		//for the x values, create a ship along the x axis
		for (int i = 0; i < length; i++)
		{
			xCoordList.push_back(x + i);
			yCoordList.push_back(y);
		}
	}
	//if the orientation is horizontal, create the ship and its coords along it's length. 
	if (orientation == 'h')
	{
		//for the x values, create a ship along the x axis
		for (int i = 0; i < length; i++)
		{
			xCoordList.push_back(x);
			yCoordList.push_back(y + i);
		}
	}
}

ostream & operator <<(ostream & outs, const WaterVehicle & _ship)
{
	//creates a copy of _grid so we can use it's member functions
	WaterVehicle tempShip = _ship;

	outs << "\n____________________________\n";
	outs << tempShip.name <<"'s Ship Info: \n";
	outs << "Length: " << tempShip.length << endl;
	outs << "Starting Coords: (" << tempShip.x << "," << tempShip.y << ")\n";
	if (tempShip.orientation == 'h')
		outs << "Orientation: Horizontal\n";
	else if (tempShip.orientation == 'v')
		outs << "Orientation: Vertical\n";
	if (tempShip.sunk == true)
		outs << "Sunken Status: True\n";
	else if(tempShip.sunk == false)
		outs << "Sunken Status: False\n";

	return outs;
}
