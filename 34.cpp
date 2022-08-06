//SINGLE PUBLIC INHERITANCE//
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Person
{
private:
    char name[10];
    int age;
protected:
    void setName(char *n)
    {
        strcpy(name,n);
    }
    void setAge(int a)
    {
        age=a;
    }
public:
    char* getName()
    {
        return(name);
    }
    int getAge()
    {
        return(age);
    }
};
class employee:public Person
{
private:
    float salary;
protected:
    void setSalary(float s)
    {
        salary=s;
    }
public:
    float getSalary()
    {
        return(salary);
    }
    void setEmployee(char* n,int a,float s)
    {
        setName(n);
        setAge(a);
        setSalary(s);
    }
    void showEmployee()
    {
       cout<< getName()<<getAge()<<getSalary();
    }
};
int main()
{
    employee e1;
    e1.setEmployee("ChamchamG",22,50000.23);
    e1.showEmployee();
    getch();
}
