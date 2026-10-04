#include<stdio.h>
#include<iostream>
using namespace std;

void strDisplay(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        str++;
        iCount++;
    }

    str--;

    while(iCount >= 0)
    {
        cout<<*str<<"\n";
        str--;
        iCount--;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter striing :");
    scanf("%[^'\n']s",Arr);
    printf("%s\n",Arr);

    strDisplay(Arr);

    return 0;
}