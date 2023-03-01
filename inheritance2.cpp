#include<iostream>
using namespace std;
class University
{
protected:
    string name;
    int id;
    string department;
    float CGPA;
    string university;
public:
   University(string name="N/A", int id=0, string department="N/A", float CGPA=0 ,string university="N/A")
    {
        this->name=name;
        this->id=id;
        this->department=department;
        this->CGPA=CGPA;
        this->university=university;
    }
    void printInfo()
    {
        cout<<"~~Display Student Information~~"<<endl;
        cout<<"Name  : "<<name<<endl;
        cout<<"ID    : "<<id<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"CGPA: "<<CGPA<<endl;
        cout<<"University : "<<university<<endl<<endl;
    }
};

class Teacher: protected University
{
public:
    string subject;
    int age;
    Teacher(string name="N/A",string university="N/A",int age=0,string subject="N/A")
    {
        this->name=name;
        this->age=age;
        this->subject=subject;
        this->university=university;
    }
    void printInfo()
    {
        cout<<"~~Display Teacher Information~~"<<endl;
        cout<<"Name  : "<<name<<endl;
        cout<<"Age   : "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"University : "<<university<<endl<<endl;
    }
    void prepareLesson()
    {
        cout<<name<<" is preparing " <<subject<<" lesson "<<endl;
    }
 };
int main()
 {
     University student("Ishtiaq",221311086,"CSE",3.50, "Varendra University" );
     student.printInfo();
     Teacher te("John","Varendra University", 27, "CSE");
     te.printInfo();
     te.prepareLesson();
 }











