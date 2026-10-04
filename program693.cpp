//  input : 5
//  output : 5  4   3   2   1

#include<iostream>
using namespace std;

int Display(int iNo)
{
    if(iNo >= 1)
    {
        cout<<iNo<<"\n";
        iNo--;
        Display(iNo);
    }
    else
    {
        cout<<"\n";
    }
}

int main()
{
    int ivalue = 0;
    cout<<"enter the number :";
    cin>>ivalue;

    Display(ivalue);
    
    return 0;
}