#include<string.h>
#include<iostream>
using namespace std;
class student
{
private:
    char name[20];
    int rollno;

public:
    //setter
    void setName(char name[])
    {
        strcpy(this-> name,name);
    }
    //getter
    char * getName()
    {
        return name;
    }
    //setter
    void setRollno(int rollno)
    {
        this-> rollno=rollno;
    }
    //getter
    int getRollno()
    {
        return rollno;
    }

};
int main()
{
    student obj;
    obj.setName("vanshika");
    obj.setRollno(1);
    cout<<"student name="<<obj.getName()<<endl;
    cout<<"student rollno="<<obj.getRollno();
}
