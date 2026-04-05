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
  library gamelibrary;
  string fileName = "database.txt";


  cout << "Welcome to the Game Library! You may select one of the following options:" << endl;
  cout << "1 Read a game library from a file" << endl;
  cout << "2 Write the game library to a file" << endl;
  cout << "3 Print the game library" << endl;
  cout << "4 Find all of the games of a specific genre" << endl;
  cout << "5 Find all of the games by game title" << endl;
  cout << "6 Add a game" << endl;
  cout << "7 Delete a game" << endl;
  cout << "8 Exit this program" << endl;
  cout << "9 Push a game to the front of the list" << endl;
  cout << "10 Add a game onto the back of the list" << endl << endl;
  
   
  int choice = 0;
  string title, publisher, genre;
  float hoursPlayed, price;
  int year;
  cout << "Please enter your choice now: ";
  cin >> choice;
  cin.ignore();
  while(choice != 8){
    switch(choice) {
    case 1:
      cout << "Reading current database.txt file" << endl;
      gamelibrary.read_from_file(fileName);
      cout << endl;
      break;
    case 2:
      cout << "Writing new database.txt file" << endl;
      gamelibrary.write_to_file(fileName);
      cout << endl;
      break;
    case 3:
      gamelibrary.print();
      break;
    case 4:
      cout << "Enter the specific genre of the game: ";
      cin.ignore();
      getline(cin, genre);
      cout << gamelibrary.find_genre(genre) << endl;
      break;
    case 5:
      cout << "Enter the game title to find all of the associated games: ";
      cin.ignore();
      getline(cin, title);
      cout << gamelibrary.find_game(title) << endl;
      break;
    case 6:
      cout << "Enter the game title: ";
      cin.ignore();
      getline(cin, title);
      cout << "Enter the Publisher: ";
      getline(cin, publisher);
      cout << "Enter the Genre: ";
      getline(cin, genre);
      cout << "Enter the hours played: ";
      cin >> hoursPlayed;
      cout << "Enter the price: ";
      cin >> price;
      cout << "Enter the year: ";
      cin >> year;
      gamelibrary.insert_sorted(title, publisher, genre, hoursPlayed, price, year);
      break;
    case 7:
      cout << "Enter the game title to delete: ";
      cin.ignore();
      getline(cin, title);
      cout << "Enter the year the game was released: ";
      cin >> year;
      gamelibrary.delete_game(title, year);
      cout << endl;
      break;
    case 8:
      cout << "8 Exit this program" << endl << endl;
      break;
    case 9:
      cout << "Enter the game title: ";
      cin.ignore();
      getline(cin, title);
      cout << "Enter the Publisher: ";
      getline(cin, publisher);
      cout << "Enter the Genre: ";
      getline(cin, genre);
      cout << "Enter the hours played: ";
      cin >> hoursPlayed;
      cout << "Enter the price: ";
      cin >> price;
      cout << "Enter the year: ";
      cin >> year;
      gamelibrary.push_front(title, publisher, genre, hoursPlayed, price, year);
      break;
    case 10:
      cout << "Enter the game title: ";
      cin.ignore();
      getline(cin, title);
      cout << "Enter the Publisher: ";
      getline(cin, publisher);
      cout << "Enter the Genre: ";
      getline(cin, genre);
      cout << "Enter the hours played: ";
      cin >> hoursPlayed;
      cout << "Enter the price: ";
      cin >> price;
      cout << "Enter the year: ";
      cin >> year;
      gamelibrary.push_back(title, publisher, genre, hoursPlayed, price, year);
      break;
      
    default:
      cout << "Please enter a number 1 through 10" << endl;
      break;


    }

    cout << "1 Read a game library from a file" << endl;
    cout << "2 Write the game library to a file" << endl;
    cout << "3 Print the game library" << endl;
    cout << "4 Find all of the games of a specific genre" << endl;
    cout << "5 Find all of the games by game title" << endl;
    cout << "6 Add a game" << endl;
    cout << "7 Delete a game" << endl;
    cout << "8 Exit this program" << endl;
    cout << "9 Push a game to the front of the list" << endl;
    cout << "10 Add a game onto the back of the list" << endl << endl;


    

    cout << "Please enter your choice now: ";
    cin >> choice;

    

  }
  
  
  return 0;
}
