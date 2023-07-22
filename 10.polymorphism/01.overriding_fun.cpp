#include <iostream>
using namespace std;
class Parent {
    public: 
    void land (){
        cout<<"pushtayni jamin";
    }
};
class Child:public Parent{
    public: 
    void land (){
        cout<<"ab mera hai";
    }
};
int main (){
    Child nishant;
    nishant.land();
    return 0;
}