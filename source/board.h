#ifndef BOARD_H
#define BOARD_H

void MakeBoard();

void PrintBoard();

void SetCell(int i, int j, char marker);

bool BoardFull();

char CheckWinner();

#endif