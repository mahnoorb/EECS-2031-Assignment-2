{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang4105{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.16299}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 #include <stdio.h>\par
#include <string.h>\par
#include <ctype.h>\par
\par
// global variable to set size\par
#define size 100\par
#define alphaSize 26\par
\par
int main(void) \{\par
    \par
    // string (arrays) for 2 inputs\par
    char firstWord[size];\par
    char secondWord[size];\par
    \par
    int i = 0; // index start at 0\par
    char ch; // reading character\par
    \par
    printf("Enter first word: ");\par
    scanf("%[^\\n]s", &firstWord);\par
    \par
    // gets the string for the first input\par
    while (( ch = getchar()) != '\\n') \par
    ;\par
\par
    // second input\par
    printf("Enter second word: ");\par
    scanf("%[^\\n]s", &secondWord);\par
    \par
    // returns 1 or 0 based on if the anagram exists between the 2 strings\par
    int flag = checkAnagram(firstWord, secondWord);\par
    \par
    if(flag == 1) \{\par
       printf("The words are anagrams.\\n");\par
    \} \par
    else \{\par
       printf("The words are not anagrams.\\n");\par
    \}\par
    return 0;\par
\}\par
 \par
/** Funtion that checks if the anagram exists between 2 words\par
 *  passed in the parameters. */\par
int checkAnagram(char first[], char second[])\{\par
    \par
    // all elements start with 0\par
    int firstSize[alphaSize] = \{0\};\par
    int secondSize[alphaSize] = \{0\};\par
    \par
    // index\par
    int i;\par
    \par
    // 1st: converts to lowercases\par
    for (i = 0; i < first[i] != '\\0'; i++) \{\par
         \par
         if (isalpha(first[i])) \{\par
           first[i] = tolower(first[i]);\par
         \}\par
        // printf("%c\\n", first[i]);\par
         \par
    \}\par
    // 2nd: converts to lowercases\par
    for (i = 0; i < second[i] != '\\0'; i++) \{\par
        if (isalpha(first[i])) \{\par
        second[i] = tolower(second[i]);\par
        \}\par
    \}\par
    \par
    // 1st: checks which letter exists and then increment\par
    for (i = 0; first[i] != '\\0'; i++)\{\par
        \par
        if (isalpha(first[i])) \{\par
       // if ('a' <= second[i] && second[i] <= 'z') \{\par
            firstSize[first[i]-'a']++;\par
        //\}\par
        //else if ('A' <= first[i] && first[i] <= 'Z') \{\par
            // firstSize[first[i] + 32]++;\par
        //\}\par
        \}\par
    \}\par
    \par
    // 2nd: checks which letter exists and then increment\par
    for (i = 0; second[i] != '\\0'; i++)\{\par
        if (isalpha(second[i])) \{\par
            secondSize[second[i]-'a']++;\par
        \}\par
    \}\par
    \par
    // checks if the # of alphabet is the same for each element\par
    for(i = 0; i < alphaSize; i++)\{\par
        if(firstSize[i] != secondSize[i]) \{\par
            return 0;\par
        \}\par
    \}\par
    \par
    // anagram exists btwn both strings\par
    return 1;\par
\}\par
}
 