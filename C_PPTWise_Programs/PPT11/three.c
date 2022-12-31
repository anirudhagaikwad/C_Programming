/*
Convert All Characters in Upper Case of a File using C Program.
*/


#include <stdio.h>
#include <ctype.h>

int main(){

    //file nane
    const char *fileName="sample.txt";
    //file pointers
    FILE *fp,*fp1;
    //to store read character
    char ch;

    //open file in read mode
    fp=fopen(fileName,"r");
    if(fp==NULL){
        printf("Error in opening file.\n");
        return -1;
    }
    //create temp file
    fp1=fopen("temp.txt","w");
    if(fp1==NULL){
        printf("Error in creating temp file.\n");
        return -1;
    }
    //read file from one file and copy
    //into another in uppercase
    while((ch=fgetc(fp))!=EOF){
        if(islower(ch)){
            ch=ch-32;
        }
        //write character into temp file
        putc(ch,fp1);
    }
    fclose(fp);
    fclose(fp1);
    //rename temp file to sample.txt
    rename("temp.txt","sample.txt");
    //remove temp file
    remove("temp.txt");

    //now, print content of the file
    //open file in read mode
    fp=fopen(fileName,"r");
    if(fp==NULL){
        printf("Error in opening file.\n");
        return -1;
    }
    printf("Content of file\n");
    while((ch=getc(fp))!=EOF){
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
