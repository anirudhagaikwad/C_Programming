/*
Searching for a pattern in a given string.
*/
#include <stdio.h>
#include <string.h>
//Function to search the pattern
void searchPattern(char *pSrcString, char* pPattern)
{
    int lenSrcString = strlen(pSrcString); //Get length of src string
    int lenPatString = strlen(pPattern); //Get length of pattern string
    int srcIndex = 0;
    /* A loop to slide pat[] one by one on src*/
    for (srcIndex = 0; srcIndex <= lenSrcString - lenPatString; ++srcIndex)
    {
        int patternIndex;
        /* For current index i, check for pattern match */
        for (patternIndex = 0; patternIndex < lenPatString; ++patternIndex)
        {
            if (pSrcString[srcIndex + patternIndex] != pPattern[patternIndex])
                break;
        }
        // if pat[0...M-1] = src[srcIndex, srcIndex+1, ...srcIndex+M-1]
        if (patternIndex == lenPatString)
        {
            printf("Pattern found at index %d \n", srcIndex);
        }
    }
}
int main()
{
    char src[] = "How are you"; //source string
    char pat[] = "are"; //pattern you want to find
    searchPattern( src,pat); //function to search pattern
    return 0;
}
