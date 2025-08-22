#include "main.h"

char board[9][9] = {
{ 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r', '\0' }, // 8th rank, so board[0][0] = a8(black rook)
{ 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', '\0' }, // 7th rank, board[1][7] = h7 (black pawn)
{'.', '.', '.', '.', '.', '.', '.', '.', '\0'}, // 6th rank, empty
{'.', '.', '.', '.', '.', '.', '.', '.', '\0'}, // 5th rank, empty
{'.', '.', '.', '.', '.', '.', '.', '.', '\0'}, // 4th rank, empty
{'.', '.', '.', '.', '.', '.', '.', '.', '\0'}, // 3rd rank, empty
{ 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', '\0' }, // 2nd rank, board[6][7] = h2 (white pawn)
{ 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R', '\0' }  // 1st rank, board[7][7] = h1 (white rook)
}; // data structure to store board state

/**
 * main - entry point to program
 * return - 0 on success
 */

int main(void)
{

	//building myself a chess engine!

	print_board();
	return 0;
}
