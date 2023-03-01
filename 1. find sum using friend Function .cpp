#include <iostream>
using namespace std;
class Two;
class One
{
    int A;
    public:
    void setA(int i)
    {
        A=i;
    }
    friend int adder(One ,Two);
};
class Two
{
    int B;
    public:
    void setB(int i)
    {
        B=i;
    }
    friend int adder(One,Two);
};
int adder(One a,Two b)
{
    return(a.A+ b.B);
}
   int main()
{
   One a;
   Two b;
   a.setA(10);
   b.setB(20);
   cout<<"The Sum is: "<<adder(a,b);
    return 0;
 }









