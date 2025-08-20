#include "board.h"
#include "game.h"

#include <iostream>

using namespace std;

char playAgain;
bool stop = false;

int main() {
    cout << "Welcome to TicTacToe!" << endl;

    while(!stop){
        StartGame();

        cout << " Do you wish to play again [y/n]"  << endl;
        cin >> playAgain;
        if(playAgain == 'n') stop = true;
    }
    return 0;
}