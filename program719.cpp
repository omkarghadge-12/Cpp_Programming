#include<stdio.h>
#include<iostream>
using namespace std;

int CountCaptial(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str >='A' && *str <='Z')
        {
            iCount++;   
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter striing :");
    scanf("%[^'\n']s",Arr);
    printf("%s\n",Arr);

    iRet = CountCaptial(Arr);
    printf("Capital count is :%d\n",iRet);

    return 0;
}