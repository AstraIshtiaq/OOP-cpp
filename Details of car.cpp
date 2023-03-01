//create a class "Car" ,show the details of a car's brand ,model,year etc

#include<iostream>
using namespace std;
class Car
{
public:
    string brand;
    string model;
    int year;
    constructor(string x,string y,int z)
    {
        brand=x;
        model=y;
        year=z;
    }
    void showData()
    {
        cout<<"Brand:"<<brand<<endl;
        cout<<"Model:"<<model<<endl;
        cout<<"Year:"<<year<<endl;
        cout<<"\n"<<endl;
    }
};
int main()
{
Car carinf1,carinf2;
carinf1.constructor("BMW","S8345H89",2010);
carinf2.constructor("Toyota","H8TGJK9R",2020);

carinf1.showData();
carinf2.showData();

return 0;
}
