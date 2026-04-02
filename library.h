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
  Game *head; // The begining of the doubly linked list
  Game *tail; // The end of the doubly linked list


 public:
  library();

  void push_front(std::string title, std::string publisher, std::string genre, float hoursPlayed, float price, int year);

  void push_back(std::string title, std::string publisher, std::string genre, float hoursPlayed, float price, int year);

  void read_from_file(std::string fileName);

  void write_to_file(std::string fileName);

  void insert_sorted(std::string title, std::string publisher, std::string genre, float hoursPlayed, float price, int year);

  std::string find_genre(std::string genre);

  std::string find_game(std::string title);

  void print();

  void delete_game(std::string title, int year);


};

#endif //LIBRARY_H
