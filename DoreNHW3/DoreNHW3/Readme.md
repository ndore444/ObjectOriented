*******************************************************
*  Name      :  Nate Dore    
*  Student ID:  105956145               
*  Class     :  CSC 2312        
*  HW#       :  1                
*  Due Date  :  22FEB2018
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The initialization of Battleship begins to take shape. In main, a submarine is 
created, placed on a 10x10 grid, and 15 shots are fired randomly at the board.
If one of the shots hits the submarine, the sub is sunk. This information is 
displayed to the screen in multiple data fields.
 

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that initiates an instance of the 
   guessing game BattleShip utilizing the classes Grid. and WaterVehicle.  
   A member function in Grid fires "shots" onto the grid, effecting the instances of 
   WaterVehicle. Dimensions for the class grid are defined in a global variable called 
   GridLength. Once the instances of class Grid and WaterVehicle are created and mutated, 
   the three objects are displayed.

Name: WaterVehicle.h
	contains the definition for the WaterVehicle class

Name: WaterVehicle.cpp
   Defines and implements the WaterVehicle class for starting an instance
   of a ship. This class provides a spread of features and variables  
   relevant to the status and location of said ship. Certain operations 
   can be conducted on each ship (with member functions) to alter the ship.

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
