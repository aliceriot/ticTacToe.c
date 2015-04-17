// basically just an array
struct gameBoard {
    int squares[9];
};

// set the board to all zeros
void initializeBoard(struct gameBoard board)
{
    int i;

    for (i=0; i<9; i++) {
        board.squares[i] = 0;
    }
}

// print the board state
void printBoard(struct gameBoard board)
{
    printf("%d\t%d\t%d\n",board.squares[0], board.squares[1], board.squares[2]);
    printf("%d\t%d\t%d\n",board.squares[3], board.squares[4], board.squares[5]);
    printf("%d\t%d\t%d\n",board.squares[6], board.squares[7], board.squares[8]);
}

