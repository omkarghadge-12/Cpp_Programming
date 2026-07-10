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

class der : public base     
{
    public :
    int x;
    int substraction(int A,int B)       //concrete
    {
        return A-B;
    }
    int multiplication(int A, int B)
    {
        return A*B;
    }
    
   
};

int main()
{
    base *bp=new der();    
    int iret=0;

    iret = bp->addition(11,10);     //21
    cout<<iret<<"\n";
    iret = bp->substraction(11,10);     //1
    cout<<iret<<"\n";

 //   iret = bp->multiplication(11,10);     //error


        

        return 0;


}
