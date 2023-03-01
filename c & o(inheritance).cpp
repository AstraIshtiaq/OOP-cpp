#include<iostream>>
using namespace std;
class AbstractEmployee
{
    virtual void AskforPromotion()=0;
};
class Employee:AbstractEmployee
{
private:
    string Company;
    int Age;
protected:
     string Name;
public:
    void setName(string name){Name=name;}
    string getName(){return Name;}
    void setCompany(string company){Company=company;}
    string getCompany(){return Company;}
    void setAge(int age)
    {
            if (Age>=20)
            Age=age;
    }
    int getAge(){return Age;}

    void IntroduceYourself()
    {
        cout<<"Name:"<<Name<<endl;
        cout<<"Company:"<<Company<<endl;
        cout<<"Age:"<<Age<<endl;
    }

    Employee(string name, string company,int age)
    {
        Name=name;
        Company=company;
        Age=age;
    }
    void AskforPromotion()
    {
        if(Age>30)
            cout<<Name<<" got promoted! "<<endl;
        else
            cout<<Name<<" ,Sorry No promotion for you. "<<endl;
    }
   //polymorphism line
    virtual void Work()
    {
        cout<<Name<<" is checking email,task backlog,performing tasks....  "<<endl;
    } //
};
class Developer:public Employee
{
public:
    string FavProgrammingLanguage;
    Developer(string name,string company, int age, string favProgrammingLanguage)
    :Employee(name,company,age)
    {
        FavProgrammingLanguage=favProgrammingLanguage;
    }
    void FixBug()
    {
        cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;
    }
    //polymorphism line
    void Work()
    {
        cout<<Name<<" is writing "<<FavProgrammingLanguage<<" Code"<<endl;
    } //
};
class Teacher:public Employee
{
public:
    string Subject;
    void Preparelesson()
    {
        cout<<Name<<" is preparing "<<Subject<<" lesson "<<endl;
    }
    Teacher(string name,string company ,int age, string subject)
    :Employee(name,company,age)
    {
        Subject=subject;
    }
    //polymorphism line
    void Work()
    {
        cout<<"And now "<<Name<<" is teaching "<<Subject<<" lesson"<<endl;
    }
};

int main()
{
    Employee employee1=Employee("Ishtiaq","Amazon",23);
    employee1.IntroduceYourself();
    employee1.Work();
    employee1.AskforPromotion();
    cout<<"\n"<<endl;

    Developer dev=Developer("Nahid","Google",25,"C++");
    dev.IntroduceYourself();
    dev.FixBug();
    dev.Work();
    dev.AskforPromotion();
    cout<<"\n"<<endl;

    Teacher te=Teacher("Tina","VU",35,"CSE");
    te.Preparelesson();
    te.Work();
    te.AskforPromotion();
}
















