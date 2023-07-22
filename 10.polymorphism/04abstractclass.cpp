#include <iostream>
using namespace std;
class figure{
    public:
    virtual int area()=0;
    virtual int perimeter()=0;
};
class rectangle:public figure{
    private:
    int length;
    int breadth;
    public:
    rectangle(int l, int b){
        length=l;
        breadth=b;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
class circle:public figure{
    private:
    int radius;
    public:
    circle(int r){
        radius=r;
    }
    
    int area(){
        return 3.14*radius*radius;
    }
    int perimeter(){
        return 2*3.14*radius;
    }
};
int main(){
    figure *f1=new rectangle(10,8);
    cout<<f1->area()<<endl;
    
    figure *f2=new circle(10);
    cout<<f2->area();
    return 0;
}