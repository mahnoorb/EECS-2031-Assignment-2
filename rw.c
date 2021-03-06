{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang4105{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.16299}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 #include <stdio.h>\par
#include <time.h>\par
#include <stdlib.h>\par
\par
#define SIZE 10\par
\par
int main(void) \{\par
int i = 0;\par
int move;\par
int move_count;\par
int row,col;\par
\par
// first char to store and print\par
char ch = 'A';\par
\par
// create an array with a defined size\par
char path[SIZE][SIZE];\par
\par
// create array with dots first\par
for(row = 0; row < SIZE; row++) \par
    \{\par
        for(col = 0; col < SIZE; col++) \par
           \{\par
            path[row][col] = '.';\par
           \}\par
    \}\par
\par
// get random shift (up, down, left, right)\par
srand(time(NULL));\par
\par
// starting at this location\par
row = 0;\par
col = 0;\par
\par
// first char is A at location (0,0)\par
path[row][col] = ch;\par
\par
// prints out all 26 letters (if it can)\par
while (i < 26)\par
 \{\par
    move = rand() % 4;\par
\par
    switch(move) \par
    \{\par
    // moving down\par
    case 0:      if(row + 1 < SIZE && path[row + 1][col] == '.') \{\par
\par
           path[++row][col] = ++ch;\par
           i++;\par
           break;\par
        \}\par
\par
    // moving up \par
    case 1:  if(row - 1 >= 0 && path[row - 1][col] == '.') \{\par
            path[--row][col] = ++ch;\par
            i++;\par
            break;\par
        \}\par
\par
    // moving left\par
    case 2:  if(col - 1 >= 0 && path[row][col - 1] =='.')   \{\par
            path[row][--col] = ++ch;\par
            i++;\par
            break;\par
        \}\par
\par
    // moving right\par
    case 3:  if(col + 1 < SIZE && path[row][col + 1] == '.')   \{\par
            path[row][++col] = ++ch;\par
            i++;\par
            break;\par
        \}\par
         \par
    \par
    \}\par
    if(((path[row + 1][col]!='.'||row==9) && (path[row - 1][col]!='.'||row==0) && \par
        (path[row][col - 1]!='.'||col==0 )&& (path[row][col + 1]!='.'||col==9)) || i==25) \par
        \{\par
        break;        \par
        \}\par
    \par
\}\par
\par
for(row = 0; row < SIZE; row++)\par
\{\par
    for(col = 0; col < SIZE; col++)\par
       printf("%c ",path[row][col]);\par
    printf("\\n");\par
\}                                  \par
return 0;\par
\}\par
}
 