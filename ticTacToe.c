#include <stdio.h>
#include "ticTac.h"

main()
{
    struct gameBoard board;

    board.squares[1] = 4;

    int i;

    for (i=0;i<9;i++) {
        board.squares[i] = 0;
    }

    printBoard(board);
    initializeBoard(board);
    printBoard(board);
}

