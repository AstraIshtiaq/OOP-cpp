#include<iostream>
using namespace std;
class Employee
{
protected:
    string name;
    int id;
    int salary;
    string role;
public:
    Employee(string name="N/A" ,int id=0,int salary=0)
    {
        this->name=name;
        this->id=id;
        this->salary=salary;
        this->role=role;
    }
    void printInfo()
    {
        cout<<"~~Display Information~~"<<endl;
        cout<<"Name  : "<<name<<endl;
        cout<<"ID    : "<<id<<endl;
        cout<<"Salary: "<<salary<<endl<<endl;
    }
    setRole(string role)
    {
        this->role=role;
    }
};
class Manager: public Employee
{
    int projectBonus;
public:
    Manager(string name="N/A" ,int id=0,int salary=0, int projectBonus=5000)
    {
        this->name=name;
        this->id=id;
        this->salary=salary;
        this->projectBonus=projectBonus;
        role="Manager";
    }
    void printInfo()
    {
        cout<<"~~Display Information~~"<<endl;
        cout<<"Name  : "<<name<<endl;
        cout<<"ID    : "<<id<<endl;
        cout<<"Role  : "<<role<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Project Bonus: "<<projectBonus<<endl<<endl;
    }
};
class Executive: protected Employee
{
    int overtime;

public:
    Executive(string name="N/A" ,int id=0,int salary=0, int overtime=400)
    {
        this->name=name;
        this->id=id;
        this->salary=salary;
        this->overtime=overtime;
        role="Executive";
    }
    void printInfo()
    {
        cout<<"~~Display Information~~"<<endl;
        cout<<"Name  : "<<name<<endl;
        cout<<"ID    : "<<id<<endl;
        cout<<"Role  : "<<role<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Overtime: "<<overtime<<endl<<endl;
    }
};
 int main()
 {
     Employee e1("Ishtiaq",184719,18900);
     Manager m1("Ishika",48574,75847, 10000);
     Executive ex1("Ahmed",23435,16000,500);

     e1.printInfo();
     m1.printInfo();
     ex1.printInfo();
 }
