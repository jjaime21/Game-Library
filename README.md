Pathfinding Pioneers - Isaac McKnew and Jose Jaime

This project creates a game library and allows the user to interact with it using the command-line,
menu-driven system. Each menu option is handled by its own function from the library class. We shared
the work by reviewing each others code as we updated the repository.

To run the program, please run the following commands:
run make, then run ./test
Then, use the menu options to access the game library.


Challenges faced:
Fixed the read_from_file function logic - We used getline to read in the strings that had spaces.

Fixed getter functions being outside of the game class - We moved the }; to after the end of the getter functions.

Fixed variables being redeclared in game.cpp constructor - We removed the type names so that the values are assigned
                                                           to the game class's member variables instead of creating
							   a new variable.

Fixed find game function returning only exact game title - We used the string library find search function found on cppreference to
check if the title string contains the given title substring. https://en.cppreference.com/w/cpp/string/basic_string/find.html
