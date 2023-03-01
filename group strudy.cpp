#include<iostream>
using namespace std;
class GroupStudy
{
private:
    string Name;
    string Subject;
    int ID;
public:
    string Section;
    GroupStudy(string name,string subject,int id,string section)
    {
        Name=name;
        Subject=subject;
        ID=id;
        Section=section;
    }
    void setData()
    {
        cout<<"~~~~~Details~~~~~~"<<endl;
        cout<<"Name:"<<Name<<endl;
        cin>>Name;
        cout<<"Subject:"<<Subject<<endl;
        cin>>Subject;
        cout<<"ID:"<<ID<<endl;
        cin>>ID;
        cout<<"Section:"<<Section<<endl;
        cin>>Section;
    }
    void printData()
    {
        cout<<"~~~~~Details~~~~~~"<<endl;
        cout<<"Name:"<<Name<<endl;
        cout<<"Subject:"<<Subject<<endl;
        cout<<"ID:"<<ID<<endl;
        cout<<"Section:"<<Section<<endl;
        cout<<"\n"<<endl;

    }
};
int main()
{
    GroupStudy s1=GroupStudy ("Ishtiaq","CSE",86,"C");
    s1.printData();

    GroupStudy s2=GroupStudy("Safwan","ENG", 89,"C");
    s2.printData();
}

