//make a student class and take three subject marks and print grade

#include <iostream>
#include<string>

using namespace std;

class Student{
    private: 
            int roll;
            int marks_maths;
            int marks_sst;
            int marks_english;
           
            string name;
    public:
            Student(int roll, int marks_maths, int marks_sst, int marks_english,string name);
          
            inline int getRoll();
            inline int getMaths();
            inline int getSst();
            inline int getEnglish();
            string getName();
            int Total();
            char getGrade();
            
};



Student::Student(int roll, int marks_maths, int marks_sst, int marks_english,string name){
this->roll=roll;
this->marks_maths=marks_maths;
this->marks_sst=marks_sst;
this->marks_english=marks_english;
this->name=name;
}
int Student::getRoll(){
    return roll;
}
int Student::getMaths(){
    return marks_maths;
}
int Student::getSst(){
    return marks_sst;
}
int Student::getEnglish(){
    return marks_english;
}
string Student::getName(){
    return name;
}
int Student::Total(){
    return marks_english+marks_maths+marks_sst;
}
char Student::getGrade(){
    int avg= Total()/3;
    if (avg<30)
    {
       return 'C';
    }   
        else if (30<=avg && avg<70)
    {
           return 'B';
    }  
         else if (70<=avg && avg<90)
    {
           return 'A';
    }  
         else 
    {
           return 'o';
    }
    
}
int main(){   
    int roll;
    int m,s,e;
    string name;
    cout<<"enter roll no. "<<endl;
    cin>>roll;
    cout<<"maths sst and eng marks resp."<<endl;
    cin>>m>>s>>e;
    cin>>name;
    Student s1(roll,m,s,e,name);    
    cout<<"______________________________marks sheet______________________________"<<endl;
    cout<<"Name :- "<<s1.getName()<<"             Roll no.:-"<<s1.getRoll()<<endl;
    cout<<"Maths score :-"<<s1.getMaths()<<endl;
    cout<<"SST score :-"<<s1.getSst()<<endl;
    cout<<"English score :-"<<s1.getEnglish()<<endl;
    cout<<"Total score is :- "<<s1.Total()<<"        Grade:-"<<s1.getGrade()<<endl;
    cout<<"________________________________________________________________________"<<endl;
    return 0;
}
