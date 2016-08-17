#include <iostream>

#include "DisplayTerminal.hpp"
#include "Game.hpp"

using namespace std;

void DisplayTerminal::display(Game game) {
    cout << "It is " << game.get_current_player() << "'s" << endl;
    cout << "- - - - -" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "|" << game.get_board(0, i);
    }
    cout << "|\n- - - - -" << endl; 
    for(int i = 0; i < 3; i++) {
        cout << "|" << game.get_board(1, i);
    }
    cout << "|\n- - - - -" << endl; 
    for(int i = 0; i < 3; i++) {
        cout << "|" << game.get_board(2, i);
    }
    cout << "|\n- - - - -" << endl; 
}