#include <iostream>
using namespace std;
class Base{
    public:
    int fun1(){
        cout<<1;
    }
    int fun2(){
        cout<<2;
    }
    int fun3(){
        cout<<3;
    }

};
class Child:public Base{
    public:
    int fun4(){
        cout<<4;
    }
    int fun5(){
        cout<<5;
    }
    int fun6(){
        cout<<6;
    }

};

int main (){
    Base *p=new Child();
    p->fun1();
    p->fun2();
    p->fun3();
    //p->fun4(); cannot call derived members

    return 0;
}