#include<iostream>
using std::string;
class Employee
{
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name){Name=name;}
    string getName() {return Name;}
    void setCompany(string company) {Company=company; }
    string getCompany() {return Company ;}
    void setAge(int age)
    {
        if(age>=20)
            Age=age;
    }
    int getAge() {return Age;}

    void IntroduceYourself()
    {
        std::cout<<"\nName-"<<Name<<std::endl;
        std::cout<<"Company-"<<Company<<std::endl;
        std::cout<<"Age-"<<Age<<std::endl;
    }
    Employee(string name,string company, int age)
    {
        Name=name;
        Company=company;
        Age=age;
    }
};
int main()
{
    Employee employee1=Employee("Ishtiaq","Amazon",22);
    employee1.IntroduceYourself();

    Employee employee2=Employee("Ishaq","Google",26);
    employee2.IntroduceYourself();

    employee1.setAge(25);
    std::cout<<"\n"<<employee1.getName()<<" is "<<employee1.getAge()<<" years old "<<std::endl;

}

