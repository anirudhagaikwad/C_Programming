/*C program to convert String into Hexadecimal.

Read a String and convert the string into Hexadecimal String.Convert each character of the string in it�s equivalent hexadecimal value and insert the converted value in a string and finally print the Hexadecimal String.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    unsigned char str[100], strH[200];
    int i, j;

    printf("Enter string: ");
    scanf("%[^\n]s", str);

    printf("\nString is: %s\n", str);

    /*set strH with nulls*/
    memset(strH, 0, sizeof(strH));

    /*converting str character into Hex and adding into strH*/
    for (i = 0, j = 0; i < strlen(str); i++, j += 2) {
        sprintf((char*)strH + j, "%02X", str[i]);
    }
    strH[j] = '\0'; /*adding NULL in the end*/

    printf("Hexadecimal converted string is: \n");
    printf("%s\n", strH);

    return 0;
}



