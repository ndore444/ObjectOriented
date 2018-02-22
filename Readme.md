*******************************************************
*  Name      :  Nate Dore    
*  Student ID:  105956145               
*  Class     :  CSC 2312        
*  HW#       :  1                
*  Due Date  :  07FEB2018
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************


The class Grid creates a matrix grid, to be filled with the user's choice of
number(default '0'). This instance of main creates 3 grids, of user defined dimensions.
Once the grids are generated, grid1 and grid2 have 1/3 filled with '1's. Grid3 is a 
comparison of the first two grids, the overlapping ones remaining in grid3.
 


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that constructs an instance of the 
   guessing game under the class Grid. User input takes in and passes dimensions 
   for the class grid. Once three instances of class Grid are created and mutated,
   the three grids are displayed.

Name: Grid.h
   Contains the definition for the class grid.  

Name: Grid.cpp
   Defines and implements the Grid class for starting an instance
   of the game called "grid". This class provides a vector matrix 
   of type int, which is displayed to the user in a grid-like fashion. 
   Certain operations can be conducted on each grid (with member functions)
   to alter the grid.
   
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully on ouray.cudenver.edu. 
