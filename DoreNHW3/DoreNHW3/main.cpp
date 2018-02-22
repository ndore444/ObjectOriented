/* 
 *Name: Nathaniel Dore
 *Class: CSCI <<CHANGE ME>>
 *Description: [fill in description]
 *Lab Partner: N/A
 *Status: development complete: final release build 
 */

#include "Grid.h"
#include "WaterVehicle.h"

using namespace std;

//function declarations
void evalTurn(Grid _grid, vector<WaterVehicle>& _shipList);
void displayShips(vector<WaterVehicle> &_shipList);

//global variables
const int gridLength = 10;

int main( )
{
	srand(time(0));
	Grid grid(gridLength, gridLength);
	vector<WaterVehicle> shipList;
	
	//creating and pushing out a submarine
	WaterVehicle sub("submarine", 5, 'v');
	
	shipList.push_back(sub);

	//adding the ships to the grid and test firing
	grid.addShips(shipList);
	grid.testFire(15);

	evalTurn(grid, shipList);

	//displaying data
	cout << grid;
	displayShips(shipList);

    return 0;
}


void evalTurn(Grid _grid, vector<WaterVehicle>& _shipList)
{
	bool xMatch = false, yMatch = false;

	//for all x coords
	for (int x = 0; x < gridLength; x++)
	{
		//for all y coords
		for (int y = 0; y < gridLength; y++)
		{
			//for all ships in the list
			for (int i = 0; i < _shipList.size(); i++)
			if (_grid.getCoordVal((x+1), (y+1)) == 8)
			{
				//for every coord in the ship
				for (int n = 0; n < _shipList[i].getLength(); n++)
				{
					if (_shipList[i].getXList()[n] == x && _shipList[i].getYList()[n] == y)
						_shipList[i].setSunkenStatus(true);
				}//for every coord
			}//for all ships
		}//for y coords
	}//for x coords
}


void displayShips(vector<WaterVehicle>& _shipList)
{
	for (int i = 0; i < _shipList.size(); i++)
		cout << _shipList[i];

}
