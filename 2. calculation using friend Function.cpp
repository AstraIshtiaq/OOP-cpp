//2. Suppose, there 2 classes named “One” and “Two” and one friend class which is a friend of both
//classes named “CalculationProcessor”. Now, write a program in C++ to complete the from given UML
//diagram satisfying the given conditions.
#include<iostream>
using namespace std;
class Two;
class calculation_processor;

class One
{
    int A;
public:
    void setA(int x)
    {
      A=x;
    }
    void getA()
    {
      cout<<"value of A:"<<A<<endl;
    }
    friend class calculation_processor;
};
class Two
{
    int B;
public:
     void setB(int x)
     {
         B=x;
     }
    void getB()
    {
        cout<<"value of B:"<<B<<endl;
    }
    friend class calculation_processor;
};
class calculation_processor
{
public:
    void adder(One ob, Two obj)
       {
          int c;
          c=ob.A+obj.B;
          cout<<"sum of A and B is:"<<c<<endl;
       }
    void subtractor(One ob, Two obj)
    {
        int c;
        c=ob.A-obj.B;
        cout<<"subtraction  of A and B is:"<<c<<endl;
    }
    void multiplier(One ob, Two obj)
    {
        int c;
        c=ob.A*obj.B;
        cout<<"Multiplication of A and B is:"<<c<<endl;
    }
    void divider(One ob, Two obj)
    {
        float c;
        c=(float)ob.A/obj.B;
        cout<<"Divide of A and B is:"<<c<<endl;
    }
};
int main()
{
    One ob1;
    ob1.setA(5);
    ob1.getA();
    Two ob3;
    ob3.setB(7);
    ob3.getB();
    calculation_processor ob;
    ob.adder(ob1,ob3);
    ob.divider(ob1,ob3);
    ob.multiplier(ob1,ob3);
    ob.subtractor(ob1,ob3);
    return 0;
}
