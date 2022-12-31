/*
C program to remove a specific line from the text file.
*/
#include <stdio.h>

int main()
{
    FILE* fp1;
    FILE* fp2;

    char ch;

    int line = 0;
    int temp = 1;

    fp1 = fopen("includehelp.txt", "r");
    if (fp1 == NULL) {
        printf("\nUnable to open file\n");
        return -1;
    }

    while (!feof(fp1)) {
        ch = getc(fp1);
        printf("%c", ch);
    }
    rewind(fp1);

    printf("\nEnter line number to delete the line: ");
    scanf("%d", &line);

    fp2 = fopen("temp.txt", "w");

    while (!feof(fp1)) {
        ch = getc(fp1);

        if (ch == '\n')
            temp++;

        if (temp != line)
            putc(ch, fp2);
    }

    fclose(fp1);

    fclose(fp2);

    remove("includehelp.txt");
    rename("temp.txt", "includehelp.txt");

    printf("\nModified file:\n");

    fp1 = fopen("includehelp.txt", "r");
    if (fp1 == NULL) {
        printf("\nUnable to open file\n");
        return -1;
    }

    while (!feof(fp1)) {
        ch = getc(fp1);
        printf("%c", ch);
    }

    fclose(fp1);

    printf("\n");

    return 0;
}
