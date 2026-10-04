//  input : 5
//  output : 1  2   3   4   5   

#include<iostream>
using namespace std;

int Display(int iNo)
{
    if(iNo >= 1)
    {
        Display(iNo - 1);
        cout<<iNo<<"\t";
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