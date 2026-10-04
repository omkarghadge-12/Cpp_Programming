//  input : 5
//  output : 5  4   3   2   1    1   2   3   4   5

//stacklayout

#include<iostream>
using namespace std;

int Display(int iNo)
{
    if(iNo >= 1)
    {
        cout<<iNo<<"\t";
        Display(iNo - 1);
        cout<<iNo<<"\t";
    }
}

int main()
{
    int ivalue = 0;
    cout<<"enter the number :";
    cin>>ivalue;

    Display(ivalue);
    cout<<"\n";
    
    return 0;
}