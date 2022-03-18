# DS_Board-Game
Data Structures course: On going project

* IDE : Visual Studio Code
* Version Control System: Git, GitHub
* Programming Language: C++

## Project Description 
Version 1: Players moved across a numbered board after a roll from one dice. The score will be recored after each turn but if a player lands on a position where certain rules are in place that score will be alter with an increase or decrease. The player who reaches the highest score on the board with the least amount of turns wins.

Version 2: Inheritance took place in the GameEntries class from the Students class with new paramaters. Added an overloaded insertion operator "<<" to replace the output method in the GameEntries class. Added a compare function to compare two players by GPA, Sport, and score from the results of the game.

## Instructions for usage

* Pull request from Github
* Use C++ complier
* Compile and run **mainDriver.cpp** 
* Input total number of players (max is currently 2)
* Input the size of the board (perfect Square numbers)
* user input in terminal

## File Descriptions

### **mainDriver.cpp:** ###
The main file calls all functions and class to make the rules of the game. Includes all .cpp and .hpp files and librarys.

* **GameboardDisplay()** - allows user to input the size of the board, but the size of the board must be a perfect square number. A two-dimensional array is used to create and output the board from 0 to user input. (Currently board isn't printing to terminal)

* **negativeFunction()** -  Return a positive integer specifying number of positions to move in descending order. Decrease the overall score by 5 if a player moves on to a prime number. This rule is not applicable for prime numbers less than or equal to 5. Decrease the overall score score by 3 if a player moves on to a position which is divisible by 7. 

*  **positiveFunction()** - Return a positive integer specifying number of positions to move in ascending order. Increase the score by 15 if a player moves on to perfect number position. Increase the score by 2 if a player moves on to a position that is divisible by 10. 

*  **diceRoll()** - Takes current score of each player and runs it through each play so they can advance. A turn is determined after they roll a 1-6 to determine the players new positon within the rules of the game

### **GameEntries.cpp:** ###

* Implentation file for GameEntries class- defines constructor and destructors with get and set functions.
* **playerComparsion()** - It compares two players and print out a better player based on the following constraints. Both the players play same game and their semester should match then:
   *  player1 is better than player2 if both gpa and scores of player2 are higher than that of player1 & vice-versa
   *  player1 and player2 have similar performance if both gpa and scores match
   *  if players dont match nothing will print out

### **GameEntries.hpp:** ###

* Interface file for GameEntries class. This class interits from the Students class. Shows Student Name, GPA , Sport Name, and what semester they're in.

### **ScoreEntries.cpp:** ###

* Implentation file for ScoresEntries class- defines constructor and destructors with display and add function
* **add()** - adds game entries for players
* **Display()** - displays turns for players

### **ScoreEntries.hpp:** ###

* Interface file for ScoreEntries class. This class is used as a way to keep track of game entries of players who have finished

### **Students.cpp:** ###

* Implentation file for Students class- defines constructor and destructors with get and set functions

### **Students.hpp:** ###

* Interface file for Students class. This class is used to hold the name, GPA, Sport and Semester of the players.
