{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang4105{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.16299}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 #include <stdio.h>\par
\par
int main(void)\par
\{\par
    int numRows;\par
    int i, j, k;\par
    \par
    // prompt user to enter the number of rows\par
    printf("Enter a number: ");\par
    scanf("%d", &numRows);\par
  \par
  // only allows inputs from 1 to 20 (inclusive)\par
   if (numRows > 20 || numRows <1) \{\par
       printf("Please enter an integer between 1 to 20 (inclusive)");\par
   \}\par
   else \{\par
    for (i = 0; i < numRows-1; i++) \{\par
      \par
        // print the respective spaces as the triangle gets bigger    \par
        for (k = numRows-1; i < k; k--) \{\par
            printf(" ");\par
        \}\par
       \par
       // print the first (star) row\par
        if (i == 0) \{\par
            printf("*");\par
        \}\par
       \par
       // printing rows\par
        for (j = 0; j < i; j++) \{\par
           \par
           // prints the left hand side\par
            if (j == 0) \{\par
                printf("*");  printf(" ");    \par
            \}\par
            // otherwise space\par
            else \{\par
                printf(" ");\par
            \}\par
            \par
            // prints star from the right hand side\par
            if (j == (i-1))\{\par
                printf("*");\par
            \}\par
            // otherwise space\par
            else \{\par
                printf(" ");\par
            \}\par
           \par
        \}\par
        \par
        // creates new line for the next row\par
        printf("\\n");\par
    \}\par
  \par
  // prints the last row\par
    for (i = 0; i < (numRows*2)-1; i++) \{\par
         printf("*");\par
    \}\par
   \}\par
   \par
   printf("\\n");\par
    return 0;\par
\}\par
}
 