//Nathaniel Dore

#include "Grid.h"


Grid::Grid():
	width(defaultGridSize),
	height(defaultGridSize)
{
	grid = createGrid(defaultGridSize, defaultGridSize);
	
}

Grid::Grid(int _width, int _height):
	width(_width),
	height(_height)
{
	grid = createGrid(_width, _height);
}


vector< vector<int>> Grid::createGrid(int _width, int _height)
{
	vector< vector<int>> newVector(_height, vector<int>(_width));

	return newVector;
}

void Grid::fillAThird()
{
	//generating the coord sets for the randomly placed ones
	int numberOfOnes = ((width*height) / 3), randX, randY;
	vector<int> xCoordList, yCoordList;

	for (int i = 0; i < numberOfOnes; i++)
	{
		//keeps generating coord pairs until it finds a pair w/ a 0
		do
		{
			randX = (rand() % width + 1);
			randY = (rand() % height + 1);
		} while (getCoordVal(randX, randY) == 1);

		setCoordVal(randX, randY, 1);
	}
}

void Grid::testFire(int _shots)
{
	//generating the coord sets for the randomly placed ones
	int numberOfOnes = _shots, randX, randY, newFill = 8;
	vector<int> xCoordList, yCoordList;

	for (int i = 0; i < numberOfOnes; i++)
	{
		//keeps generating coord pairs until it finds a pair w/ a 0
		do
		{
			randX = (rand() % width + 1);
			randY = (rand() % height + 1);
		} while (getCoordVal(randX, randY) == newFill);

		setCoordVal(randX, randY, newFill);
	}
}

void Grid::fillGrid(int _fill)
{
	//for each of the grid's x values aka width
	for (int x = 0; x < grid.size(); x++)
	{
		//for each y value in the grid aka height
		for (int y = 0; y < grid[x].size(); y++)
		{
			grid[x][y] = _fill;
		}
	}
}

void Grid::compareFill(Grid _grid1, Grid _grid2)
{
	grid = _grid1.getGrid();

	//for each of the grid's x values aka width
	for (int x = 0; x < grid.size(); x++)
	{
		//for each y value in the grid aka height
		for (int y = 0; y < grid[x].size(); y++)
		{
			if (grid[x][y] == 1 && _grid2.getGrid()[x][y] == 1)
				grid[x][y] = 1;
			else
				grid[x][y] = 0;
		}
	}
}

void Grid::fillList(vector<int> _xFillList, vector<int> _yFillList, int _fill)
{
	for (int i = 0; i < _xFillList.size(); i++)
	{
		for (int n = 0; n < _yFillList.size(); n++)
		{
			setCoordVal(_xFillList[i] + 1, _yFillList[n] + 1, _fill);
		}
	}
}

void Grid::addShips(vector<WaterVehicle> _shipList)
{
	
	for (int i = 0; i < _shipList.size(); i++)
		fillList(_shipList[i].getXList(), _shipList[i].getYList(), 1);
}

int Grid::getCoordVal(int _x, int _y)
{
	//the '-1' is because the index starts at 0
	return (grid[(_x - 1)][(_y - 1)]);
}

void Grid::setCoordVal(int _x, int _y, int _newVal)
{
	//the '-1' is because the index starts at 0
	grid[(_x-1)][(_y-1)] = _newVal;
}

vector<vector<int>> Grid::getGrid()
{
	return grid;
}

int Grid::getWidth()
{
	return width;
}

int Grid::getHeight()
{
	return height;
}

ostream & operator <<(ostream & outs, const Grid & _grid)
{
	//creates a copy of _grid so we can use it's member functions
	Grid tempGrid = _grid;

	for (int w = 0; w < tempGrid.getHeight(); w++)
	{
		for (int h = 0; h < tempGrid.getWidth(); h++)
		{
			outs << " " <<tempGrid.getGrid()[w][h];
		}
		outs << endl;
	}

	return outs;
}
