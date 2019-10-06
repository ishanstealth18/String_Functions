#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char str[]);
//void stringSort(char str2[][],int arrSize);

void reverseString(char str[])
{
    int stringSize = strlen(str);
    printf("\nSize of the string is: %d",stringSize);
    printf("\nReverse string is: ");
    for(int i = stringSize; i>=0; i--)
    {
        printf("%c",str[i]);
    }
}

const int strMaxLen = 50;
int checkOrder(char chkArray[][strMaxLen], int arrSize)
{
    int stopFlag = 0;
    for(int i= 0; i<arrSize;i++)
    {
        int checkSort = strcmp(chkArray[i+1],chkArray[i]);
        printf("\nCompare value: %d", checkSort);
        if( checkSort > 0)
        {
            break;
        }
        else
        {
            stopFlag = 1;
        }
    }
    if(stopFlag == 0)
    {
        return -1;
    }
    else
    {
        return -2;
    }
}



void stringSort(char Str2[][strMaxLen], int aSize)
{
    printf("Array size: %d",aSize);
    char greaterString[aSize][strMaxLen];
    char tempStrStore[50];
    int compResult = 0;
    int finalCheck = -1;


       for(int i = 0; i<aSize-1; i++)
        {
        for(int j = i+1; j<=aSize-1;j++)
            {
                compResult = strcmp(Str2[j],Str2[i]);
                //printf("\nDecision: %d", compResult);
                if( compResult < 0)
                    {
                        strcpy(tempStrStore,Str2[i]);
                        strcpy(Str2[i],Str2[j]);
                        strcpy(Str2[j],tempStrStore);
                    }
            }
        }

    printf("\nSorted array is: ");
    for(int j = 0 ;j<aSize;j++)
    {
        printf("\n%s",Str2[j]);
    }

}

int main()
{
    //char inputString[] = "";
    //printf("Enter input String: ");
    //scanf("%s",inputString);ra
    //reverseString(inputString);

    int numOfString = 0;
    printf("\nEnter no of strings: ");
    scanf("%d",&numOfString);
    char strArray[numOfString][strMaxLen];
    char tempString[strMaxLen];
    for(int i=0;i<numOfString;i++)
    {
        printf("String %d: ",i);
        scanf("%s",&strArray[i]);
    }

    stringSort(strArray,numOfString);
    return 0;
}
