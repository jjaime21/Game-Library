/**
 * @file library.h
 * @author Isaac McKnew and Jose Jaime
 * @date 2026-04-01
 * @brief Library class
 * 
 * Header file for the Library class
 */

#ifndef LIBRARY_H
#define LIBRARY_H

#include "game.h"
#include <list>
#include <string>


/**
 * The library class for implementing a doubly linked list for a game library.
 *
 * @class library library.h "gamelibrary/library.h"
 * @brief This class stores the data from a game library.
 *
 */
class library {
 private:
  std::list<game> games; // Creates a doubly linked list from game called games


 public:

/**
 * Default constructor
 *
 * @pre None 
 * @post A new empty library object is created.
 * 
 */
  library();


/**
 * Adds a new game to the beginning of the library.
 *
 * @param std::string title The name of the game.
 * @param std::string publisher The company that published the game.
 * @param std::string genre The type of game.
 * @param float hoursPlayed The total amount of time playing the game.
 * @param float price The cost of the game.
 * @param int year The year the game was released.
 * @pre Valid game data is provided.
 * @return void None
 * @post A new node with the game data is added to the beginning of the library.
 * 
 */
  void push_front(std::string title, std::string publisher, std::string genre, float hoursPlayed, float price, int year);


/**
 * Adds a new game to the end of the library.
 *
 * @param std::string title The name of the game.
 * @param std::string publisher The company that published the game.
 * @param std::string genre The type of game.
 * @param float hoursPlayed The total amount of time playing the game.
 * @param float price The cost of the game.
 * @param int year The year the game was released.
 * @pre Valid game data is provided.
 * @return void None
 * @post A new node with the game data is added to the end of the library.
 * 
 */
  void push_back(std::string title, std::string publisher, std::string genre, float hoursPlayed, float price, int year);


/**
 * Reads data from the database.txt file and creates the library
 *
 * @param std::string fileName The name of the file to be read
 * @pre The file must exist
 * @return void None
 * @post The library object updated with the information read from the database.txt file.
 * 
 */
  void read_from_file(std::string fileName);


/**
 * Saves the current library to a new database.txt file
 *
 * @param std::string fileName The name of the file to be created.
 * @pre The filename must be in the correct format.
 * @return void None
 * @post A new file is created with the library object's current list information.
 * 
 */
  void write_to_file(std::string fileName);


/**
 * Inserts a new game sorted by game title in the library list
 *
 * @param std::string title The name of the game.
 * @param std::string publisher The company that published the game.
 * @param std::string genre The type of game.
 * @param float hoursPlayed The total amount of time playing the game.
 * @param float price The cost of the game.
 * @param int year The year the game was released.
 * @pre Valid game data is provided.
 * @return void None
 * @post A new node with the game data is added to the library sorted by game title.  
 * 
 */
  void insert_sorted(std::string title, std::string publisher, std::string genre, float hoursPlayed, float price, int year);


/**
 * Searches the library for all the games with a specific genre.
 *
 * @param std::string genre The type of game.
 * @pre The library list should be initialized.
 * @return std::string A formatted string containing the titles of all the games with the specific genre.
 * @post The search results are returned.
 * 
 */
  std::string find_genre(std::string genre);


/**
 * Searches the library for all the games with a specific title.
 *
 * @param std::string title The name of the game.
 * @pre The library list should be initialized.
 * @return std::string A formatted string containing the titles of all the games with the specific title.
 * @post The search results are returned.
 * 
 */
  std::string find_game(std::string title);


/**
 * Prints the content of the directory to the screen.
 *
 * @pre The library list must have data
 * @return void None
 * @post The library list information is printed to the screen and formatted.
 * 
 */
  void print();


/**
 * Deletes a specific game from the library with the title and year.
 *
 * @param std::string title The name of the game.
 * @param int year The year the game was released.
 * @pre The library list is initialized. 
 * @return void None
 * @post The specific game node is removed from the list.
 * 
 */
  void delete_game(std::string title, int year);


};

#endif //LIBRARY_H
