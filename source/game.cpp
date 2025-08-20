#include "game.h"
#include "board.h"
#include <iostream>
using namespace std;

bool tie;
bool gameOver;
char winner = ' ';
char currentPlayer = 'x';


void StartGame() {
    tie = false;
    gameOver = false;
    cout << "New game started" << endl;
    MakeBoard();
    PrintBoard();

    while (!gameOver){
        DoMove(currentPlayer);
        PrintBoard();
        SwitchPlayer();
        // tie = CheckTie();

        winner = CheckWinner();
        if (winner !=  ' ' || BoardFull()) gameOver = true;
    }
    cout << winner << endl;
    if (winner != ' ') {
        cout << "Game ended! Winner is player " << winner << endl;
    } else {
        cout << "Game ended! It is a tie..." << endl;
    }
}

void DoMove(char player){
    int i, j; // row and column
    cout <<", enter your move (row and column): ";
    cin >> i >> j;
    SetCell(i,j, player);
}

void SwitchPlayer(){
    if (currentPlayer == 'x') {
        currentPlayer = 'o'; 
    } else {
        currentPlayer = 'x';
    } 
}



