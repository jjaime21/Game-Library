/**
 * @file main.cpp
 * @author Isaac McKnew and Jose Jaime
 * @date 2026-03-30
 * @brief Game Library project
 * 
 * A doubly linked list class that stores the data from a game library.
 */

#include "library.h"
#include "game.h"
#include <iostream>

using namespace std;

int main() {
  string fileName = "database.txt";


  cout << "Welcome to the Game Library! You may select one of the following options:" << endl;
  cout << "1 Read a game library from a file" << endl;
  cout << "2 Write the game library to a file" << endl;
  cout << "3 Print the game library" << endl;
  cout << "4 Find all of the games of a specific genre" << endl;
  cout << "5 Find all of the games by game title" << endl;
  cout << "6 Add a game" << endl;
  cout << "7 Delete a game" << endl;
  cout << "8 Exit this program" << endl << endl;

  int choice = 0;
  string last;
  string phone;
  cout << "Please enter your choice now: ";
  cin >> choice;
  while(choice != 8){
    switch(choice) {
    case 1:
      cout << "Reading current database.txt file" << endl;
      // Read file function
      cout << endl;
      break;
    case 2:
      cout << "Writing new database.txt file" << endl;
      // Write file function
      cout << endl;
      break;
    case 3:
      // Print function
      break;
    case 4:
      cout << "Enter the specific genre of the game: " << endl;
      // Find_genre function
      break;
    case 5:
      cout << "Enter the game title to find all of the associated games: ";
      // Find_game function
      break;
    case 6:
      cout << "6 Add a game" << endl;
      break;
    case 7:
      cout << "Enter the game title and release year to delete: ";
      // delete function
      cout << endl;
      break;
    case 8:
      cout << "8 Exit this program" << endl << endl;
      break;
    default:
      cout << "Please enter a number 1 through 8" << endl;
      break;


    }

    cout << "1 Read a game library from a file" << endl;
    cout << "2 Write the game library to a file" << endl;
    cout << "3 Print the game library" << endl;
    cout << "4 Find all of the games of a specific genre" << endl;
    cout << "5 Find all of the games by game title" << endl;
    cout << "6 Add a game" << endl;
    cout << "7 Delete a game" << endl;
    cout << "8 Exit this program" << endl << endl;


    

    cout << "Please enter your choice now: ";
    cin >> choice;

    

  }
  
  
  return 0;
}
