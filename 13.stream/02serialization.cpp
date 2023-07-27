#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class student{
    private:
    string name;
    int roll;
    string branch;
    public:
    student(string name, int roll, string branch){
        this->name=name;
        this->roll=roll;
        this->branch=branch;
    }
    string getName(){
        return name;
    }
    string getBranch(){
        return branch;
    }
    int getRoll(){
        return roll;
    }
    friend ofstream & operator<<(ofstream &ofs, student &s);
    friend ifstream & operator>>(ifstream &ifs, student &s);

};
ofstream & operator<<(ofstream &ofs, student &s){
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
}
ifstream & operator>>(ifstream &ifs, student &s){
    ifs>>s.name>>s.roll>>s.branch;
}

int main()
{
    student s1("ram",01,"cse");
    ofstream out("student.txt");
    out<<s1;   
    out.close();
    ifstream in;
    in.open("student.txt");
    in>>s1;
    in.close();
    cout<<"name :- "<<s1.getName()<<endl;
    cout<<"roll no. is :- "<<s1.getRoll()<<endl;
    cout<<"branch :- "<<s1.getBranch()<<endl;

    return 0;
}
