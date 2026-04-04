/**
 * @file game.h
 * @author Jose Jaime and Isaac Mcknew
 * @date 2026-04-01
 * @brief definition of a game
 * 
 * holds the values that describes everything about the game
 */

#ifndef GAME_H
#define GAME_H

#include <string>


/**
 * The game class for holding the game data.
 *
 * @class game{ game.h "gamelibrary/game.h"
 * @brief This class manages the data from a game library.
 *
 */
class game{

 private:

  //all variables that goes into a game description
  std::string title;
  std::string publisher;
  std::string genre;
  float playtime;
  float price;
  int year;

 public:
  

/**
 * Default constructor
 *
 * @pre None
 * @post A new game object is created with all data members initialized.
 * 
 */
  game();


/**
 * Adds the variables to the game
 *
 * @param std::string t title
 * @param std::string pb publisher 
 * @param std::string g genre
 * @param float pt play time
 * @param float p price
 * @param int y year
 * @pre The input values must be valid
 * @return void a full game
 * @post The game object variables are updated
 * 
 */
  void setgame(std::string t,std::string pb, std::string g, float pt, float p, int y);


//adding getters to access the private variables


/**
 * Gets the title of the game.
 *
 * @pre The game object must be initialized.
 * @return std::string The title of the game.
 * @post The game object is not changed.
 * 
 */
  std::string getTitle();


/**
 * Gets the name of the game's publisher
 *
 * @pre The game object must be initialized.
 * @return std::string The name of the publisher.
 * @post The game object is not changed.
 * 
 */
  std::string getPub();


/**
 * Gets the genre of the game
 *
 * @pre The game object must be initialized.
 * @return std::string The genre of the game.
 * @post The game object is not changed.
 * 
 */
  std::string getGenre();


/**
 * Gets the hours played for the game
 *
 * @pre The game object must be initialized.
 * @return float The total hours played
 * @post The game object is not changed.
 * 
 */
  float getPlaytime();


/**
 * Gets the price of the game
 *
 * @pre The game object must be initialized.
 * @return float The price of the game
 * @post The game object is not changed.
 * 
 */
  float getPrice();


/**
 * Gets the year the game was released
 *
 * @pre The game object must be initialized.
 * @return int The year the game was released
 * @post The game object is not changed.
 * 
 */
  int getYear();


};

#endif //GAME_H
