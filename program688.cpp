//  input : 5
//  output : 1  2   3   4   5

#include<iostream>
using namespace std;

int Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt <= iNo)
    {
        cout<<iCnt<<"\n";
        iCnt++;
    }

    cout<<"\n";
}

int main()
{
    int ivalue = 0;
    cout<<"enter the number :";
    cin>>ivalue;

    Display(ivalue);
    
    return 0;
}