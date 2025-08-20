#include "board.h"
#include <iostream>
using namespace std;

char board[3][3];

void MakeBoard() {
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = ' ';
        }
    }
}

void PrintBoard() {
    for(int i = 0; i < 3; i++){
        cout << "-------------" << endl; // top border of row
        for(int j = 0; j < 3; j++){
            cout << "| " << board[i][j] << " ";
        }
        cout << "|" << endl;             // right border
    }
    cout << "-------------" << endl;     // bottom border
}

void SetCell(int i, int j, char marker){
    board[i][j] = marker;
}

bool BoardFull() {
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(board[i][j] == ' '){
                return false;
            }
        }
    }
    return true;
}


char CheckWinner() {
    // 1️⃣ Check rows
    for(int i = 0; i < 3; i++) {
        if(board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0];
    }

    // 2️⃣ Check columns
    for(int j = 0; j < 3; j++) {
        if(board[0][j] != ' ' && board[0][j] == board[1][j] && board[1][j] == board[2][j])
            return board[0][j];
    }

    // 3️⃣ Check diagonals
    if(board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0];

    if(board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2];

    // 4️⃣ No winner yet
    return ' ';
}