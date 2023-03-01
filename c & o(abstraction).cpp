#include<iostream>>
using std::string;
class AbstractEmployee
{
    virtual void AskforPromotion()=0;
};
class Employee:AbstractEmployee
{
private:
    string Name;
    string Company;
    int Age;
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
        std::cout<<"Name:"<<Name<<std::endl;
        std::cout<<"Company:"<<Company<<std::endl;
        std::cout<<"Age:"<<Age<<std::endl;
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
            std::cout<<Name<<" got promoter! "<<std::endl;
        else
            std::cout<<"\n"<<Name<<" ,Sorry No promotion for you. "<<std::endl;
    }
};
int main()
{
    Employee employee1=Employee("Ishtiaq","Amazon",23);
    employee1.IntroduceYourself();
    std::cout<<"\n"<<std::endl;
    Employee employee2=Employee("Nahid","Google",35);
    employee2.IntroduceYourself();

    employee1.AskforPromotion();
    employee2.AskforPromotion();

}
































