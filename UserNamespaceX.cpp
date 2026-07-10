#include<iostream>
using namespace std;

namespace PPA
{
    int i = 11;
}

namespace LB
{
    int j = 21;
}
using namespace LB;
int main()
{
    cout<<PPA::i<<"PPA\n";     //11
    cout<<j<<"LB\n";      //21

    return 0;
}