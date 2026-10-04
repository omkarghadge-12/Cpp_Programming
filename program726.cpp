#include<stdio.h>
#include<iostream>
using namespace std;

void strDisplay(char *str)
{
    while(*str != '\0')
    {
        cout<<*str<<"\n";
        str++;
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