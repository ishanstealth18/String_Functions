/***************************
Date : 15/9/2019
Author: Ishan Kansara
Exercise 1: String Functions
***************************/
#include <stdio.h>
#include <stdlib.h>


/***************************
This function is used to count number of characters
in a string without using any library.
***************************/
int countCharacters(char arr[50])
{
    int startPoint = 0;
    int count = 0;

    while(arr[startPoint] != '\0')
    {
        count++;
        startPoint++;
    }
    return count;

}

/***************************
This function is used to combine two strings
without using any library.
***************************/
void combineStrings(char result[100], char str1[50], char str2[50])
{
    int x = 0;
    int count1 = 0;

    while(str1[x] != '\0')
    {
        result[x] = str1[x];
        count1++;
        x++;
    }
    printf("\nCount 1: %d",count1);
    int y = 0;
    int count2 = count1+2;
    while(str2[y] != '\0')
    {
        result[count2] = str2[y];
        count2++;
        y++;
    }
    printf("\nCount 2: %d",count2);
    printf("\nCombined string is: ");
    for(int i = 0; i<count2;i++)
    {
        printf("%c", result[i]);
    }
}

/***************************
This function is used to compare two strings
without using any library.
***************************/
void stringCompare(char s1[50], char s2[50])
{
    int q = 0;
    int counts1 = 0;
    while(s1[q] != '\0')
    {
        counts1++;
        q++;
    }
    int w = 0;
    int counts2 = 0;
    while(s2[w] != '\0')
    {
        counts2++;
        w++;
    }
    int chkCount = 0;
    if(counts1 == counts2)
    {
        for(int j = 0; j<counts1;j++)
        {
            if(s1[j] == s2[j])
            {
                chkCount++;
            }
            else
            {
                printf("Strings are not same.");
                break;
            }
        }
    }
    else
    {
        printf("Strings are not same.");
    }
    if(chkCount == counts1)
    {
        printf("Strings are same.");
    }


}

int main()
{
    /*Code for counting characters in a string */
    //char countLettersString[50] ;
    //printf("Enter a string: \n");
    //scanf("%[^\n]s", &countLettersString);
    //int stringCount = countCharacters(countLettersString);
    //printf("Number of characters in a string: %d", stringCount);

    /*Code for combining and comparing two strings*/
    char str1[50];
    char str2[50];
    char combineResult[100];
    printf("\nEnter string1:");
    scanf("%[^\n]s", &str1);
    printf("\nEnter string2:");
    scanf(" %[^\n]s", &str2);
    combineStrings(combineResult, str1, str2);
    stringCompare(str1,str2);

    return 0;
}
