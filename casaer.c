{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang4105{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.16299}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 #include <stdio.h>\par
#include <ctype.h>\par
#include <string.h>\par
\par
int main(void) \{\par
\par
    // a string that can contain 80 characters\par
    char phrase[80];\par
    \par
    // shift nuber\par
    int shiftNum;\par
    \par
    // prompt user for string\par
    printf("Enter message to be encrypted: ");\par
    scanf("%[^\\n]s", &phrase);\par
    \par
    // prompt user for number to shift\par
    printf("Enter shift amount (1-25):");\par
    scanf("%d", &shiftNum);\par
    \par
    // length\par
    int length = strlen(phrase);\par
    //printf("%d\\n", length);\par
    \par
    // index\par
    int i;    \par
    \par
    // loop through to the chars to see which character to shift\par
    for(i = 0; i < length; i++) \{\par
        \par
        if(isalpha(phrase[i])) \{\par
            \par
             // shifting capital\par
             if('A' <= phrase[i] && phrase[i] <= 'Z')\{\par
            \par
             phrase[i] = (((phrase[i] + shiftNum - 'A' + 26) % 26) + 'A');\par
              printf("%c", phrase[i]);\par
            \}\par
            // shifting lowercases\par
            if('a' <= phrase[i] && phrase[i] <= 'z')\{\par
                    phrase[i] = (((phrase[i] + shiftNum - 'a' + 26) % 26) + 'a');\par
                \par
                    printf("%c", phrase[i]);\par
                \}\par
            \par
            \par
        \}\par
        // if it is not alpha then it will not shift anything (e.g. " ", ".", "&", etc.)\par
        else\{\par
                    printf("%c", phrase[i]);\par
                \}\par
    \}\par
    \par
    printf("\\n");\par
    return 0;\par
\}\par
}
 