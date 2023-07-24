#include <iostream>
using namespace std;
class test;
class base{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend int fun();    //this makes accesible for global functions to be accesing it simliarliy we can do with class
    //friend test;
};
//test body//
int fun(){
    base b1;
    b1.a=1;
    b1.b=2;
    b1.c=3;
    return b1.a+b1.b+b1.c;
}

int main(){
    cout<<fun();
    return 0;
}