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

class game{

 private:

  //all variables that goes into a game description
  std:: string title;
  std::string publisher;
  std::string genre;
  float playtime;
  float price;
  int year;

 public:
  

/**
 * creates the game and assigns variables
 *
 * @pre 
 * @post 
 * 
 */
  game();


/**
 * adds the variables to the game
 *
 * @param std::string t title
 * @param std::string pb publisher
 * @param std::string g genre
 * @param float pt play time
 * @param float p price
 * @param int y year
 * @pre 
 * @return void a full game
 * @post 
 * 
 */
  void setgame(std::string t,std::string pb, std::string g, float pt, float p, int y);
};

#endif
