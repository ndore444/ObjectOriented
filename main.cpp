/* 
 *Name: Nathaniel Dore
 *Class: CSCI 2312
 *Description: use of class Grid, which creates a vector matrix.
 *Lab Partner: N/A
 *Status: development complete: final release build 
 */

#include "Grid.h"

using namespace std;

int main( )
{
	//unfortunately if you dont use srand in main it gets crazy. To use it in a class requires a ton of work. 
	srand(time(0));
	int width, height;

	//User Input
	cout << "Welcome! please specify the sizes of the grids.\n"
	<< "\nGrid width:";
	cin >> width;

	cout << "\nGrid Height:";
	cin >> height;

	//creating 3 grids of the defined demensions
	Grid grid1(width, height), grid2(width, height), grid3(width, height);

	//filling 1/3 grid 1 and 2 w/ '1'
	grid1.fillAThird();
	grid2.fillAThird();

	grid3.compareFill(grid1, grid2);

	cout << grid1 << "\n\n"
		<< grid2 << "\n\n"
		<< grid3 << "\n\n";

    return 0;
}


