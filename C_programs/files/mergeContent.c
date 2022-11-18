/**
 * C program to merge contents of two files to third file.
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *sourceFile1;
    FILE *sourceFile2;
    FILE *destFile;
    char sourcePath1[100];
    char sourcePath2[100];
    char destPath[100];

    char ch;

    /* Input path of files to merge to third file */
    printf("Enter first source file path: ");
    scanf("%s", sourcePath1);
    printf("Enter second source file path: ");
    scanf("%s", sourcePath2);
    printf("Enter destination file path: ");
    scanf("%s", destPath);

    /*
     * Open source files in 'r' and
     * destination file in 'w' mode
     */
    sourceFile1 = fopen(sourcePath1, "r");
    sourceFile2 = fopen(sourcePath2, "r");
    destFile    = fopen(destPath,    "w");


    /* fopen() return NULL if unable to open file in given mode. */
    if (sourceFile1 == NULL || sourceFile2 == NULL || destFile == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read/write privilege.\n");

        exit(EXIT_FAILURE);
    }


    /* Copy contents of first file to destination */
    while ((ch = fgetc(sourceFile1)) != EOF)
        fputc(ch, destFile);

    /* Copy contents of second file to destination */
    while ((ch = fgetc(sourceFile2)) != EOF)
        fputc(ch, destFile);

    printf("\nFiles merged successfully to '%s'.\n", destPath);


    /* Close files to release resources */
    fclose(sourceFile1);
    fclose(sourceFile2);
    fclose(destFile);

    return 0;
}
