#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
void flame();
void guess();
void hc();
void main(int argc,char *argv[])
{
char ch,str1[5];
printf("\n");
//system("color C");
printf("   ===========================================================================================================   \n\n");
printf("                ||       || ------ |      |      |----|       ||      ||     ----  ------  ------     |  |         \n");
printf("                ||       || |      |      |     |      |      ||      ||    /      |       |     /    |  |         \n");
printf("                ||-------|| |----- |      |     |      |      ||      ||   |-----  |-----  |----/     |  |         \n");
printf("                ||       || |      |      |     |      |      ||      ||         / |       | \\\\                    \n");
printf("                ||       || ------ |_____ |_____ |----|       ||______||   -----/  ------  |  \\\\      0  0         \n");
printf("                                                                ______                                             \n");
printf("\n\n");
printf("   =========================================================================================================== \n\n\n");
printf("                                            * * * * * * * * * * * * * * * * * * * *\n");
printf("                                            * / / / / / / / / / / / / / / / / / / *\n");
printf("                                            * /                                 / *\n");
printf("                                            * /      WELCOME TO MY WORLD        / *\n");
printf("                                            * /                                 / *\n");
printf("                                            * /     ENJOY!! BY PLAYING FEW      / *\n");
printf("                                            * /                                 / *\n");
printf("                                            * /       GAMES WITH ME.......      / *\n");
printf("                                            * /                                 / *\n");
printf("                                            * / / / / / / / / / / / / / / / / / / *\n");
printf("                                            * * * * * * * * * * * * * * * * * * * *\n");
printf("\n\n");
printf("---------LETS GET STARTED----------\n");
printf("<<<<====== Press < Enter > =======>>>>\n");
fgets(str1,sizeof(str1),stdin);



p:
    system("cls");
system("color 02");
printf("     =======================================================================");
printf("\n\n        WHICH OF THE FOLLOWING GAME DO YOU WANT TO PLAY???\n\n");
printf("      *********   FOR PLAYING FLAMES GAME......(Type 'f')           ********\n\n");
printf("      *********   FOR PLAYING GUESSING NUMBER GAME......(Type 'g')  ********\n\n");
printf("      *********   FOR PLAYING HAND CRICKET GAME......(Type 'c')     ********\n\n");
printf("      *********   To Quit.......(Type'q')                           ********\n\n");
printf("     --------  choose one game which  you want to play....  --------\n\n");
printf("     =======================================================================\n\n");
scanf("%s",&ch);
if(ch=='f')
flame();
else if(ch=='g')
guess();
else if(ch=='c')
 hc();
 else if(ch=='q')
 {printf("****************************************************\n\n");
     printf("   Alas! You Missed your chance to enjoy..\n");
exit(0);}
else
{printf("ENTER CORRECT WORD..\n");
goto p;}
}
void flame()
{
int choi,a,b,c=0,l=0,i,j,k;
char y[25],p[25];
char u,v,ch;
q:
system("cls");
system("color E");
printf("==============================================================\n");
printf("\n        -------  WELCOME TO FLAMES GAME -------\n\n");
printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
printf("   LETS BEGIN THE GAME...\n\n");
printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
 printf("enter your name::");
 scanf("%s",&y);
 printf("enter your partner name::");
 scanf("%s",&p);
 a=strlen(y);
 b=strlen(p);
 a=a+b;
 for(i=0;i<b;i++)
 {
 for(j=0;j<strlen(y);j++)
 {
 if(p[i]==y[j])
 {
 c++;
 l=0;
 for(k=0;k<=strlen(y);k++)
 {
 if(k==j)
 {continue;}
 else
 {y[l]=y[k];
 l++;}
 }
 break;
 }
 }
 }
 printf("\n\n");
 choi=a-2*c;
 if(choi==3||choi==5||choi==14||choi==16||choi==18||choi==21||choi==23)
 printf("Both of them are Friends\n");
 else if(choi==10||choi==19)
 printf("Both of them are Lovers\n");
 else if(choi==8||choi==12||choi==13||choi==17||choi==28)
 printf("Both of them have Attraction\n");
 else if(choi==6||choi==11||choi==15||choi==26)
 printf("Both of them are going to get Married\n");
 else if(choi==2||choi==4||choi==7||choi==9||choi==20||choi==22||choi==24||choi==25)
 printf("Both of them are Enemies\n");
 else if(choi==1||choi==27)
 printf("Both of them are Siblings\n");
 else
 printf("No relation exist\n");


 r:
 system("color C");
 printf("****************************************************\n\n");
 printf("\n\nDo You Want To Play FLAMES Once Again ?? (yes or no)");
 scanf("%s",&u);
 if(u=='y')
 {
     c=0;
     goto q ;
     }
 else if(u=='n')
 {
 printf("\n\nDo You Want To Play Other Games ?? (yes or no)\n");
 scanf("%s",&v);
 if(v=='y')
{
s:
system("cls");
system("color 02");
printf("===============================================================================");
printf("\n\n        WHICH OF THE FOLLOWING GAME DO YOU WANT TO PLAY???\n\n");
printf("      *********   FOR PLAYING FLAMES GAME......(Type 'f')           ********\n\n");
printf("      *********   FOR PLAYING GUESSING NUMBER GAME......(Type 'g')  ********\n\n");
printf("      *********   FOR PLAYING HAND CRICKET GAME......(Type 'c')     ********\n\n");
printf("      *********   To Quit.......(Type'q')                           ********\n\n");
printf("     --------  choose one game which  you want to play....  --------\n\n");
printf("===============================================================================\n\n");
scanf("%s",&ch);
if(ch=='f')
flame();
else if(ch=='g')
guess();
else if(ch=='c')
 hc();
  else if(ch=='q')
{printf("****************************************************\n\n");
    printf("   Alas! You Missed your chance to enjoy..\n");
exit(0);}
else
{printf("ENTER CORRECT WORD..\n");
goto s;}
  }
 else
 {printf("###################################################");
     printf("\n\n       Thank You!\n\n");
 printf("       I hope you are impressed..\n\n");
 printf("           Have A Nice Day...\n\n");
 printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
 exit(0);}
 }
 else
 {printf("%c is Wrong Input..",u);
 goto r;}
 }
 void guess()
 {
int sum=0,a,i,k=0;
char u,v,ch,ans;
x:
    system("cls");
    system("color A");
    printf("===========================================================\n");
printf("\n        -------  WELCOME TO GUESS GAME -------\n\n");
printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
printf("   LETS BEGIN THE GAME...\n\n");
printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
printf("Keep any one number in your mind from 1 to 100..\n");
for(i=1;i<8;i++)
{
switch(i)
{
case 1: num1 : a=1;
printf("   \nNow Say, Is Your Number Here ? (y or n)\n\n");
printf("         1 , 3 , 5 , 7 , 9 , 11 , 13 , 15 , 17 , 19 , 21 , 23 , 25 , 27 , 29\n\n");
printf("         31 , 33 , 35 , 37 , 39 , 41 , 43 , 45 , 47 , 49 , 51 , 53 , 55 , 57 , 59\n\n");
printf("         61 , 63 , 65 , 67 , 69 , 71 , 73 , 75 , 77 , 79 , 81 , 83 , 85 , 87 , 89\n\n");
printf("         91 , 93 , 95 , 97 , 99\n\n");
scanf("%s",&ans);k=1;
break;
case 2: num2 : a=2;
printf("  ****************************************************\n\n");
printf("     Now Say, Is Your Number Here ? (y or n)\n\n");
printf("         2 , 3 , 6 , 7 , 10 , 11 , 14 , 15 , 18 , 19 , 22 , 23 , 26 , 27 , 30 , 31\n\n");
printf("         34 , 35 , 38 , 39 , 42 , 43 , 46 , 47 , 50 , 51 , 54 , 55 , 58 , 59\n\n");
printf("         62 , 63 , 66 , 67 , 70 , 71 , 74 , 75 , 78 , 79 , 82 , 83 , 86 , 87\n\n");
printf("         90 , 91 , 94 , 95 , 98 , 99\n\n");
scanf("%s",&ans);k=2;
break;
case 3: num3 : a=4;
printf("  ****************************************************\n\n");
printf("     Now Say, Is Your Number Here ? (y or n)\n\n");
printf("         4 , 5 , 6 , 7 , 12 , 13 , 14 , 15 , 20 , 21 , 22 , 23 , 28 , 29 , 30 , 31\n\n");
printf("         36 , 37 , 38 , 39 , 44 , 45 , 46 , 47 , 52 , 53 , 54 , 55 , 60 , 61 , 62\n\n");
printf("         63 , 68 , 69 , 70 , 71 , 76 , 77 , 78 , 79 , 84 , 85 , 86 , 87\n\n");
printf("         92 , 93 , 94 , 95 , 100\n\n");
scanf("%s",&ans);k=3;
break;
case 4: num4 : a=8;
printf("  ****************************************************\n\n");
printf("     Now Say, Is Your Number Here ? (y or n)\n\n");
printf("         8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31\n\n");
printf("         40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 56 , 57 , 58 , 59 , 60\n\n");
printf("         61 , 62 , 63 , 72 , 73 , 74 , 75 , 76 , 77 , 79 , 80 , 88 , 89 , 90\n\n");
printf("         91 , 92 , 93 , 94 , 95\n\n");
scanf("%s",&ans);k=4;
break;
case 5: num5 : a=16;
printf("  ****************************************************\n\n");
printf("    Now Say, Is Your Number Here ? (y or n)\n\n");
printf("         16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30\n\n");
printf("         31 , 48 , 49 , 50 , 51 , 52 , 53 , 54 , 55 , 56 , 57 , 58 , 59 , 60 , 61\n\n");
printf("         62 , 63 , 80 , 81 , 82 , 83 , 84 , 85 , 86 , 87 , 88 , 89 , 90\n\n");
printf("         91 , 92 , 93 , 94 , 95\n\n");
scanf("%s",&ans);k=5;
break;
case 6: num6 : a=32;
printf("  ****************************************************\n\n");
printf("    Now Say, Is Your Number Here ? (y or n)\n\n");
printf("         32 , 33 , 34 , 35 , 36 , 37 , 38 , 39 , 40 , 41 , 42 , 43 , 44 , 45\n\n");
printf("         46 , 47 , 48 , 49 , 50 , 51 , 52 , 53 , 54 , 55 , 56 , 57 , 58 , 59 , 60\n\n");
printf("         61 , 62 , 63 , 96 , 97 , 98 , 99 , 100\n\n");
scanf("%s",&ans);k=6;
break;
case 7: num7 : a=64;
printf("  ****************************************************\n\n");
printf("    Now Say, Is Your Number Here ? (y or n)\n\n");
printf("         64 , 65 , 66 , 67 , 68 , 69 , 70 , 71 , 72 , 73 , 74 , 75 , 76 , 77 , 78\n\n");
printf("         79 , 80 , 81 , 82 , 83 , 84 , 85 , 86 , 87 , 88 , 89 , 90 , 91 , 92 , 93\n\n");
printf("         94 , 95 , 96 , 97 , 98 , 99 , 100\n\n");
scanf("%s",&ans);k=7;
break;
default: printf("Enter Correct Input..\n");
}
switch(ans)
{
case 'n': break;
case 'y':sum+=a;
  break;
default: printf("INVALID INPUT\n");
        if(k==1)goto num1;
        if(k==2)goto num2;
        if(k==3)goto num3;
        if(k==4)goto num4;
        if(k==5)goto num5;
        if(k==6)goto num6;
        if(k==7)goto num7;
}
}
printf("=======================================================\n\n");
printf("\n\t\tYOUR NUMBER IS %d ....Am I Right??",sum);
y:
   system("color B");
    printf("\n****************************************************\n");
printf("\n\n   Do You Want To Play GUESS GAME Once Again ?? (yes or no)");
scanf("%s",&u);
if(u=='y')
{sum=0;
goto x;}
else if(u=='n')
  {
printf("\n\n   Do You Want To Play Other Games ?? (yes or no)");
scanf("%s",&v);
if(v=='y')
{
t:
    system("cls");
    system("color 02");
printf("  ============================================================================");
printf("\n\n        WHICH OF THE FOLLOWING GAME DO YOU WANT TO PLAY???\n\n");
printf("      *********   FOR PLAYING FLAMES GAME......(Type 'f')           ********\n\n");
printf("      *********   FOR PLAYING GUESSING NUMBER GAME......(Type 'g')  ********\n\n");
printf("      *********   FOR PLAYING HAND CRICKET GAME......(Type 'c')     ********\n\n");
printf("      *********   To Quit.......(Type'q')                           ********\n\n");
printf("     --------  choose one game which  you want to play....  --------\n\n");
printf("  ============================================================================\n\n");
scanf("%s",&ch);
   if(ch=='f')
   flame();
   else if(ch=='g')
   guess();
   else if(ch=='c')
   hc();
    else if(ch=='q')
{printf("****************************************************\n\n");
    printf("   Alas! You Missed your chance to enjoy..\n");
exit(0);}
   else
   {
    printf("ENTER CORRECT WORD..\n");
   goto t;
}
  }

else
{printf("###############################################\n\n");
printf("\n\n         Thank You!\n\n");
printf("      I hope you are impressed...\n\n");
printf("           Have A Nice Day...\n\n");
printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
exit(0);
  }
  }
else
{
printf("%s is Wrong Input..",u);
goto y;
}
}
void hc()
{
    int  utoss,ctoss,choice,a,unum,cnum,usum=0,csum=0,out=0;
    char u,v,ch;
    m:
    system("cls");
    system("color 03");
    printf(" ===========================================================\n");
    printf("\n        -------  WELCOME TO HAND CRICKET GAME -------\n\n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
printf("   LETS BEGIN THE GAME...\n\n");
printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
    printf("\n\n   -------# Its toss time #--------\n\n");
     printf("****************************************************\n");
    printf("For HEAD press '1' or for TAIL press'2'\n\n");
    scanf("%d",&utoss);
    ctoss= 1+rand()%2;
    if(utoss==ctoss)
    {
        printf("----------------------------------------------------\n");
        printf("      Congrats..you have won the TOSS\n\n");
        printf("Press 1 for Batting or press 2 for Balling\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: a=1;break;
            case 2: a=2;break;
            default:return 0;
        }
    }
    else

    {
        printf("----------------------------------------------------\n");
        printf("         Computer has won the Toss\n\n");
        choice=1+rand()%2;
        if(choice==1)
        {
            printf("---------------------------------------------------\n");
            printf("      Computer has decided to Ball\n\n");
            printf("---------------------------------------------------\n");
            a=1;
        }
           else
           {
            printf("---------------------------------------------------\n");
            printf("     Computer has decided to Bat\n\n");
            printf("---------------------------------------------------\n");
            a=2;
           }
    }
    for(int i=0;i<2;i++)
    {
        switch(a)
        {
            case 1: {
                a=2;
                out=0;
                if(i==1)
                {
                    printf("  Computer total score is: %d\n\n",csum);
                    printf("  You need %d to Win\n\n",(csum+1));
                    printf("**************************************************\n");
                }
                printf(" Now its your turn to Bat..\n\n");
                printf(" Enter any number from 1 to 6..\n\n");
                while(out==0)
                {
                    printf("   Your Number is:");
                    scanf("%d",&unum);
                    cnum=1+rand()%6;
                    printf("  \n Computer number is: %d\n\n",cnum);
                    if(unum==cnum)
                    {
                        printf("   Oops! You are Out...\n\n");
                        printf("************************************************\n");
                        out=1;
                        break;
                    }
                    else if(unum>6||unum<1)
                    {
                        printf(" Invalid Input..\n");
                    }
                    else
                    {
                        usum=usum+unum;
                        printf("  Your Score is: %d\n\n",usum);
                        printf("------------------------------------------------\n");
                        if(i==1&&usum>csum)
                        {
                            break;
                        }
                    }
                } break;
                    }
                    case 2: {
                    a=1;
                    out=0;
                    if(i==1)
                    {
                        printf("  Your Total Score is: %d..\n\n",usum);
                        printf("  You need defend %d to Win..\n\n",usum);
                        printf("*************************************************\n");
                    }
                    printf(" Now Its your turn to Ball\n\n");
                    printf(" Enter any number from 1 to 6..\n\n");
                while(out==0)
                {
                    printf("  Your Number is:");
                    scanf("%d",&unum);
                    cnum=1+rand()%6;
                    printf(" \n Computer number is: %d\n\n",cnum);
                    if(unum==cnum)
                    {
                        printf("Oops! Computer is Out....\n\n");
                        printf("********************************************\n");
                        out=1;
                        break;
                    }
                    else if(unum>6||unum<1)
                    {
                        printf("Invalid Input..\n");
                    }
                    else
                    {
                        csum=csum+cnum;
                        printf("  Computer Score is: %d\n\n",csum);
                        printf("---------------------------------------\n");
                        if(i==1&&csum>usum)
                        {
                            break;
                        }
                    }
                } break;
                    }
                    default: printf("Invalid input\n");
                    return 0;
        }
    }
    printf("\n\n   Your Total score is: %d\n\n",usum);
    printf("       Computer Total score is: %d\n\n",csum);
    printf(" ===================================================\n");
    if(usum>csum)
        {printf("Hurray!! You Won...\nThanks for Playing Match\n\n");
        printf("****************************************************\n\n");}
    else if(usum<csum)
        {printf("Oops!! You Lost...\nThanks for Playing Match\n\n");
        printf("****************************************************\n\n");}
    else
        {printf("Its Tie...\nThanks for Playing Match\n\n");
        printf("****************************************************\n\n");}

    usum=0,csum=0;
    n:
    printf("********************************************************");
printf("\n\n    Do You Want To Play HAND CRICKET GAME Once Again ?? (yes or no)");
scanf("%s",&u);
if(u=='y')
{goto m;}
else if(u=='n')
  {
printf("\n\n     Do You Want To Play Other Games ?? (yes or no)");
scanf("%s",&v);
if(v=='y')
{
o:
    system("cls");
    system("color 02");
printf("   ==========================================================================");
printf("\n\n        WHICH OF THE FOLLOWING GAME DO YOU WANT TO PLAY???\n\n");
printf("      *********   FOR PLAYING FLAMES GAME......(Type 'f')           ********\n\n");
printf("      *********   FOR PLAYING GUESSING NUMBER GAME......(Type 'g')  ********\n\n");
printf("      *********   FOR PLAYING HAND CRICKET GAME......(Type 'c')     ********\n\n");
printf("      *********   To Quit.......(Type'q')                           ********\n\n");
printf("     --------  choose one game which  you want to play....  --------\n\n");
printf("   ==========================================================================\n\n");
scanf("%s",&ch);
   if(ch=='f')
   flame();
   else if(ch=='g')
   guess();
   else if(ch=='c')
   hc();
   else if(ch=='q')
{printf("****************************************************\n\n");
    printf("   Alas! You Missed your chance to enjoy..\n");
exit(0);}
   else
   {
    printf("ENTER CORRECT WORD..\n");
   goto o;
}
  }

else
{printf("###############################################\n\n");
printf("\n\n         Thank You!\n\n");
printf("      I hope you are impressed...\n\n");
printf("           Have A Nice Day...\n\n");
printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
exit(0);
  }
  }
else
{
printf("%s is Wrong Input..",u);
goto n;
}
}
