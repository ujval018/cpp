#include <iostream>
#include<string>

using namespace std;

class Employee{

    
    public:
    int emid;
    string name;
    Employee(){
        emid= 000;
        name="employe";
    }
    Employee(int id , string n){
        emid=id;
        name=n;
    }
    int getEmid(){
        return emid;
    }
    string getName(){
        return name;
    }
};
class Fulltime:public Employee{
    public:
    int salary;
    Fulltime(int i, string na, int s):Employee(i,na){
        salary=s;
    }
    int getSalary(){
        return salary;
    }
    friend ostream& operator<<(ostream& o, Fulltime& f1);
};
ostream& operator<<(ostream& o, Fulltime& f1){
    o<<f1.getEmid()<<" Name of employee :- "<<f1.getName()<<endl<<" Salary is:- "<<f1.getSalary()<<endl;
    return o;
}
class Parttime:public Employee{
    private:
    int wage;
    public:
    Parttime(int i, string na, int w):Employee(i,na){
        wage=w;
    }
    int getWage(){
        return wage;
    }
    friend ostream& operator<<(ostream& ou, Parttime& p1);
};
ostream& operator<<(ostream& ou, Parttime& p1){
    ou<<p1.getEmid()<<" Name of intern :- "<<p1.getName()<<endl<<" wage is:- "<<p1.getWage();
    return ou;
}

int main (){
    Fulltime e1(123, "ram", 8000000);
    Parttime e2(212, "shyam", 70000);
    cout<<e1;   
    cout<<e2;

    return 0;

}