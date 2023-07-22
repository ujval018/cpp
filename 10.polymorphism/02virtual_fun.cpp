#include <iostream>

using namespace std;
class parent{
    public:
    virtual void show(){
        cout<<"this is the parent show";
    }
};
class child:public parent{
    public:
    void show(){
        cout<<"this is the child show";
    }
};
int main (){
    parent *p;
    child c;
    p=&c;
    p->show();//output show() of derived class cause we usedd virtual if not we all kknow parent fun call would be done
    return 0;

}