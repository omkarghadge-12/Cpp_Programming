#include<iostream>
using namespace std;

class base
{
    public:
    int i,j;
    int addition(int A,int B)       //concrete
    {
        return A+B;
    }
    virtual int substraction(int A,int B)=0;        //abstract   
};

class der : public base     //error
{
    public :
    int x;
    
   
};

int main()
{
    

        

        return 0;


}
