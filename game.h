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

class game{

 private:

  //all variables that goes into a game description
  string title;
  string publisher;
  string genre;
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
  
};

#endif
