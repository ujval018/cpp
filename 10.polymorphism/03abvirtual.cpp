#include <iostream>
using namespace std;
class Car{
    public:
    virtual void start()=0;
    virtual void stop()=0;
};
class gtr:public Car{
    public:
    void start(){
        cout<<"vroom vroom ";
    }
    void stop(){
        cout<<"peseeeeeeeeeee ";
    }
};
class nano:public Car{
    public:
    void start(){
        cout<<"huss huss ";
    }
    void stop(){
        cout<<"pesee bach gaye ";
    }
};
int main (){
    gtr ujval;
    ujval.start();
    nano manas;
    manas.stop();
    return 0;
}