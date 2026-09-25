#include<iostream>
using namespace std;

double Addition(double No1 , double No2)
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{

    float i = 0.0f , j = 0.0f;
    float ret = 0.0f;

    cout<<"Enter first number :\n";
    cin>>i;

    cout<<"Enter second number :\n";
    cin>>j;    

    ret = Addition(i , j);
    cout<<"Addition is : "<<ret<<"\n";
    
    return 0;
}