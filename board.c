
#include <stdio.h>
#include <stdlib.h>
#include "2048.h"

int **board_create(int size)
{
  int i;
  // make sure size of board is sensible
  if (size<1||size>255) return NULL;

  int **board=calloc(size,sizeof(int *));
  if (!board) return NULL;
  for(i=0;i<size;i++) {
    board[i]=calloc(size,sizeof(int));
    if (!board[i]) return NULL;
  }
  return board;
}

int board_display(int size,int **board)
{
  // make sure size of board is sensible
  if (size<1||size>255) return -1;
  
  int x,y;
  
  for(y=0;y<size;y++) {    
    for(x=0;x<size;x++) {
      if (board[x][y]) printf("[% 5d]",board[x][y]);
      else printf("[     ]");
    }
    printf("\n");
  }
  return 0;
}

int board_rotate_90(int size, int **board) {
    int i, j;
    int _board[size][size];
    
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            _board[(size - 1) - j] [i] = board[i][j];
        }
    }
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            board[i][j] = _board[i][j];
        }
    }
    return 0;
}

int board_rotate_180(int size, int **board) {
    board_rotate_90(size, board);
    return board_rotate_90(size, board);
}

int board_rotate_270(int size, int **board) {
    board_rotate_180(size, board);
    return board_rotate_90(size, board);
}
