#include<iostream>
using namespace std;

int squareRoot(int m)
{
    int temp=m*m;
    cout<<"Square: "<<temp<<endl;
}
double squareRoot (double n)
{
   double temp2= n*n;
    cout<<"Square: "<<temp2<<endl;
}
 char squareRoot(char z)
 {
     cout<<"Not Possible to square"<<endl;
 }
int main()
{
    int a=10;
    squareRoot(a);
    double b=10.5;
    squareRoot(b);
    char c;
    squareRoot(c);

}
