#include<iostream>
using namespace std;

int Addition(int No1 , int No2)
{
    int Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{

    int i = 0 , j = 0;
    int ret = 0;

    cout<<"Enter first number :\n";
    cin>>i;

    cout<<"Enter second number :\n";
    cin>>j;    

    ret = Addition(i , j);
    cout<<"Addition is : "<<ret<<"\n";
    
    return 0;
}