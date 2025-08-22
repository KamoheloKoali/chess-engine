#include "main.h"

/**
 * print_board - prints the board in a grid layout
 * return - void
 */

void print_board(void)
{
    extern char board[9][9];
	int i = 0, j, length = sizeof(board) / sizeof(board[0]);

	for (i; i < length; i++) {
        j = 0;
        printf("      ");
		for (j; j < length; j++) {
            if (board[i][j] == '\0') {
                printf("\n");
                break;
            }
			printf("%c |", board[i][j]);
		}	
	}	
	return;
}

/**
 * reset_board - reset board to initial position
 * return - void
 */

void reset_board(void)
{
    extern char board[9][9];
    // Reset the board to the initial state
	char initial_board[9][9] = {
		{ 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r', '\0' }, // 8th rank, so board[0][0] = a8(black rook)
		{ 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', '\0' }, // 7th rank, board[1][7] = h7 (black pawn)
		{'.', '.', '.', '.', '.', '.', '.', '.', '\0'}, // 6th rank, empty
		{'.', '.', '.', '.', '.', '.', '.', '.', '\0'}, // 5th rank, empty
		{'.', '.', '.', '.', '.', '.', '.', '.', '\0'}, // 4th rank, empty
		{'.', '.', '.', '.', '.', '.', '.', '.', '\0'}, // 3rd rank, empty
		{ 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', '\0' }, // 2nd rank, board[6][7] = h2 (white pawn)
		{ 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R', '\0' }  // 1st rank, board[7][7] = h1 (white rook)
	};

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            board[i][j] = initial_board[i][j];
        }
    }
	return;
	
}

/**
 * getPiece - returns the piece at certain coordinates
 * @row - row of piece on board
 * @column - column of piece on board
 * return - piece found
 */

char getPiece(int row, int column)
{
    extern char board[9][9];
	if (row > 8 || row < 0 || column > 8 || column < 0)
		return '\0';
	return board[row][column];
}

/**
 * set_piece - moves piece to specified location on board
 * @piece - piece to be moved
 * @row - row of new location
 * @column - column of new location
 * return - void
 */

void set_piece(char piece, int row, int column)
{
	//TODO: figure out how this is actually supposed to work
	return;
}

