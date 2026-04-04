/**
 * @file game.cpp
 * @author Jose Jaime and Isaac Mcknew
 * @date 2026-04-01
 * @brief implementation of game
 * 
 * creates a game with its variables
 */

#include "game.h"
#include <string>
#include <iostream>

using namespace std;

game::game(){
  //initializing variables
  title = "";
  publisher = "";
  genre = "";
  playtime = 0;
  price = 0;
  year = 0;
}
  


/**
 * changes the game description
 *
 * @param string t title
 * @param string pb publisher
 * @param string g genre
 * @param float pt playtime
 * @param float p price
 * @param int y year
 * @pre 
 * @return void a whole game description
 * @post 
 * 
 */
void game::setgame(string t, string pb, string g, float pt, float p, int y){
  title = t;
  publisher = pb;
  genre = g;
  playtime = pt;
  price = p;
  year = y;
}
   
string game::getTitle(){
  return title;
}

string game::getPub(){
  return publisher;
}

string game::getGenre(){
  return genre;
}

float game::getPlaytime(){
  return playtime;
}

float game::getPrice(){
  return price;
}

int game::getYear(){
  return year;
}
