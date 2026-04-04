/**
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

void library::read_from_file(string fileName){
  ifstream inputFile(fileName);

  if(!inputFile.is_open()){
    cout << "Please choose a valid file" << endl;
    return;
  }

  //create variables to read the file into and then put the variables through the insert sorted function so
  //everything is sorted
  string title, publisher, genre;
  float hoursPlayed, price;
  int year;
  
  while(getline(inputFile, title)){
    getline(inputFile, publisher);
    getline(inputFile, genre);
    inputFile >> hoursPlayed;
    inputFile >> price;
    inputFile >> year;
    inputFile.ignore();
    
    insert_sorted(title, publisher, genre, hoursPlayed, price, year);
  }

  inputFile.close();
}

void library::write_to_file(string fileName){
  ofstream outputFile(fileName);

  if(!outputFile.is_open()){
    cout << "Error creating the output file." << endl;
    return;
  }

  for(auto it = games.begin(); it != games.end(); ++it){
    outputFile << it->getTitle() << endl;
    outputFile << it->getPub() << endl;
    outputFile << it->getGenre() << endl;
    outputFile << it->getPlaytime() << endl;
    outputFile << it->getPrice() << endl;
    outputFile << it->getYear() << endl;
    
  }
  outputFile.close();
}

void library::insert_sorted(string title, string publisher, string genre, float hoursPlayed, float price, int year){
  game g;
  
  g.setgame(title, publisher, genre, hoursPlayed, price, year);

  auto it = games.begin();

  while(it != games.end() && it->getTitle() < g.getTitle()){
    it++;
  }

  games.insert(it,g);
}

void library::print() {
  cout << "Game Library:" << endl;
  cout << setw(30) << "Title"
       << setw(30) << "Publisher"
       << setw(20) << "Genre"
       << setw(15) << "Hours Played"
       << setw(15) << "Price"
       << "Year" << endl;

  for(auto it = games.begin(); it != games.end(); ++it) {
    cout << setw(30) << it->getTitle()
         << setw(30) << it->getPub()
         << setw(20) << it->getGenre()
         << setw(15) << it->getPlaytime()
         << setw(15) << it->getPrice()
         << it->getYear() << endl;

  }
  
  cout << endl;

}
  
  


  
