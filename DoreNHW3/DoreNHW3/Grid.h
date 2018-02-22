#pragma once
//Nathaniel Dore

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "WaterVehicle.h"


using namespace std;


class Grid
{
public:
	
	//constructors

	//Default Constructor, creates a grid of the default size
	Grid();
	//constructs a grid of size width x height with the passed variables
	Grid(int _width, int _height);


	//member functions

	//creates a grid of size width x height with the passed variables
	vector< vector<int>> createGrid(int _width, int _height);
	//fills grid with 1/3 being 1's
	void fillAThird();
	//
	void testFire(int _shots);
	//fills the every sqaure in the grid with the passed in fill(as in the noun ;) ) 
	void fillGrid(int _fill);
	//compare
	void compareFill(Grid _grid1, Grid _grid2);
	//fills the gird with the passed in vector
	void fillList(vector<int> _xFillList, vector<int> _yFillList, int _fill);
	//adds the list of ships to the grid, displaying the ships with 1's (for now ;) ) 
	void addShips(vector<WaterVehicle> _shipList);


	//Acsessors and mutators
	
	//Its important to note that because the grid is displayed from top left corner down,
	//the coords are originating from that location so (2,2) is 2 over from top left, two down from top left
	int getCoordVal(int _x, int _y);
	//Its important to note that because the grid is displayed from top left corner down,
	//the coords are originating from that location so (2,2) is 2 over from top left, two down from top left
	void setCoordVal(int _x, int _y, int _newVal);
	vector< vector<int> > getGrid();
	int getWidth();
	int getHeight();

	//operator overloads

	//display grid
	friend ostream& operator <<(ostream& outs, const Grid& _grid);


private:
	const int defaultGridSize = 4;
	int width, height;
	vector< vector<int> > grid;
};

