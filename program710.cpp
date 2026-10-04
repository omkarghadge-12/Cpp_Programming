#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
    }
}

int main()
{
    int ivalue = 0 , iret = 0;
    cout<<"enter the number :";
    cin>>ivalue;

    DisplayFactors(ivalue);
    
    return 0;
}