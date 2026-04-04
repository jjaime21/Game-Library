/**
 * @file library.cpp
 * @author LAPTOP-MLRB421O
 * @date 2026-04-03/**
 * @file library.cpp
 * @author Isaac McKnew and Jose Jaime
 * @date 2026-04-01
 * @brief Library class
 * 
 * Implementation of the Library class
 */

#include "library.h"
#include "game.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <list>
#include <string>

using namespace std;



/**
 * constructor
 *
 * @pre none
 * @post filename is assigned to database.txt
 * 
 */
library::library(){
  //file we read from and read into
  string filename = "database.txt";

  list<game> games; //delcare this so I don't redeclare
  
}

void library::push_front(string title, string publisher, string genre, float hoursPlayed, float price, int year){

  game g; //creates game description

  g.setgame(title, publisher, genre, hoursPlayed, price, year); //fills out variables

  games.push_front(g); //pushes it to front using list stl
}

void library::push_back(string title, string publisher, string genre, float hoursPlayed, float price, int year){
  //same thing as previous function but push_back at the end
  game g;
  g.setgame(title, publisher, genre, hoursPlayed, price, year);
  games.push_back(g);
}

void library::read_from_file(string filename){
  ifstream file(filename);

  if(!file){
    cout << "error opening file" << endl;
  }

  //create variables to read the file into and then put the variables through the insert sorted function so
  //everything is sorted
  string t,pb,g;
  float hp,p;
  int y;
  while(file >> t >> pb >> g >> hp >> p >> y){
    insert_sorted(t, pb, g, hp, p, y);
  }

  file.close();
}

void library::write_to_file(filename){
  ofstream file(filename);

  if(!file){
    cout << "error opening file" << endl;
  }

  for(const auto& g : games){
    file << g.getTitle() << endl << g.getPub() << endl << g.getGenre() << endl << g.getPlaytime() << endl
	 << g.getPrice << endl << g.getYear << endl;
  }
  file.close();
}

void library::insert_sorted(string title, string publisher, string genre, float hoursPlayed, float price, int year){
  game g;
  
  g.setgame(title, publisher, genre, hoursPlayed, price, year);

  auto it = games.begin();

  while(it != games.end() && it->getTitle < g.getTitle()){
    it++;
  }

  games.insert(it,g);
}
  


  
