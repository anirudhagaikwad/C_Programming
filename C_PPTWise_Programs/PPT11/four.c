/*
C program to compare contents of two files.
*/

//Write a program to compare two file.
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp1   ;
    FILE *fp2   ;

    int cnt1 = 0;
    int cnt2 = 0;
    int flg  = 0;

    if( argc < 3 )
    {
        printf("Insufficient Arguments!!!\n");
        printf("Please use \"program-name file-name1 file-name2\" format.\n");
        return -1;
    }

    fp1 = fopen(argv[1],"r");
    if( fp1 == NULL )
    {
        printf("\n%s File can not be opened : \n",argv[1]);
        return -1;
    }

    // move file pointer to end and get total number of bytes
    fseek(fp1,0,SEEK_END);
    cnt1 = ftell(fp1);

    fp2 = fopen(argv[2],"r");
    if( fp2 == NULL )
    {
        printf("\n%s File can not be opened : \n",argv[2]);
        return -1;
    }

    // move file pointer to end and get total number of bytes
    fseek(fp2,0,SEEK_END);
    cnt2 = ftell(fp2);

    fseek(fp1,0,SEEK_SET);
    fseek(fp2,0,SEEK_SET);

    // check for the total number of bytes
    if( cnt1 != cnt2 ){
        printf("\nFile contents are not same\n");
    }
    else
    {
        while( ! feof(fp1) )
        {
                if( fgetc(fp1) != fgetc(fp2) )
                {
                    flg = 1;
                    break;
                }
        }

        if( flg )   printf("\nFile contents are not same.\n");
        else        printf("\nFile contents are same.\n");
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
