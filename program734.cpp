#include<stdio.h>
#include<iostream>
using namespace std;

int Summation(int Brr[] , int iSize)
{
    static int iCnt = 0;
    static int iSum  = 0;
    if(iCnt < iSize)
    {
        iSum = iSum + Brr[iCnt];
        iCnt++;
        Summation(Brr , iSize);
    }
    return iSum;
}


int main()
{
    int Arr[] = {10,20,30,40,50};

    int iRet = Summation(Arr , 5);
    cout<<"summation is :"<<iRet<<"\n";

    return 0;
}