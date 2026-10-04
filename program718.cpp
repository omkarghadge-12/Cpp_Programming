#include<stdio.h>
#include<iostream>
using namespace std;

int strlenX(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
        iCount++;
        str++;
        strlenX(str);
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

    iRet = strlenX(Arr);
    printf("length of str is :%d\n",iRet);

    return 0;
}