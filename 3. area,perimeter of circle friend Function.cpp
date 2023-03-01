//3. Write a program in C++ to find area, perimeter of a circle

#include<iostream>
#include<iomanip>
using namespace std;
const float pi=3.1416;
int main()
{
    float radius,area,perimeter;
    cout<<"Enter the radius of the circle: "<<endl;
    cin>>radius;
    area=pi*radius*radius;
    perimeter=2*pi*radius;
    cout<<"Area of circle is: \n"<<setprecision(4)<<area<<endl;
    cout<<"Perimeter of circle is: \n"<<setprecision(4)<<perimeter<<endl;
    return 0;
}
