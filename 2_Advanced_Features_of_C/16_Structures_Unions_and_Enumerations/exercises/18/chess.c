#include <stdio.h>

typedef enum {PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING, EMPTY} Piece;
typedef enum {BLACK, WHITE} Color;

typedef struct {
    Piece type;
    Color color;
} Square; 

int main(void)
{
    Square board[8][8] = {
        { {ROOK, BLACK},  {KNIGHT, BLACK}, {BISHOP, BLACK}, {QUEEN, BLACK}, {KING, BLACK},  {BISHOP, BLACK}, {KNIGHT, BLACK}, {ROOK, BLACK}  }, 
        { {PAWN, BLACK},  {PAWN, BLACK},   {PAWN, BLACK},   {PAWN, BLACK},  {PAWN, BLACK},  {PAWN, BLACK},   {PAWN, BLACK},   {PAWN, BLACK}  }, 
        { {EMPTY, BLACK}, {EMPTY, BLACK},  {EMPTY, BLACK},  {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},  {EMPTY, BLACK},  {EMPTY, BLACK} }, 
        { {EMPTY, BLACK}, {EMPTY, BLACK},  {EMPTY, BLACK},  {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},  {EMPTY, BLACK},  {EMPTY, BLACK} }, 
        { {EMPTY, BLACK}, {EMPTY, BLACK},  {EMPTY, BLACK},  {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},  {EMPTY, BLACK},  {EMPTY, BLACK} }, 
        { {EMPTY, WHITE}, {EMPTY, WHITE},  {EMPTY, WHITE},  {EMPTY, WHITE}, {EMPTY, WHITE}, {EMPTY, WHITE},  {EMPTY, WHITE},  {EMPTY, WHITE} }, 
        { {PAWN, WHITE},  {PAWN, WHITE},   {PAWN, WHITE},   {PAWN, WHITE},  {PAWN, WHITE},  {PAWN, WHITE},   {PAWN, WHITE},   {PAWN, WHITE}  }
    };

    return 0;
}
