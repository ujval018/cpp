#include <iostream>
using namespace std;
        class Rectangle{
            private:
                    int length;
                    int breadth;
            public:
                    int setLength(int l){
                        if (l>0){
                            length=l;
                        }else{
                            cout<<"invalid input";
                            length =0;
                        }
                    }
                    int setBreadth(int b){
                        if (b>0){
                            breadth=b;
                        }else{
                            cout<<"invalid input";
                            breadth =0;
                        }
                    }
                    int getLength(){
                        return length;
                    }
                    int getBreadth(){
                        return breadth;
                    }
                    int area(){
                        return length*breadth;
                    }
                    int perimeter(){
                        return 2*(length * breadth);
                    }
                    //parameterised constructor
                    Rectangle(int l=0, int b=0){
                        setLength(l);
                        setBreadth(b);
                    }
                    //copy constructor
                    Rectangle(Rectangle &r1){
                        length=r1.length;
                        breadth=r1.breadth;

                    }

                    };

int main(){
    Rectangle r1;
    r1.setLength(7);
    r1.setBreadth(5);
    cout<<"length is :- "<<r1.getLength()<<endl;
    cout<<"bredth is :- "<<r1.getBreadth()<<endl;
    cout<<"area is :- "<<r1.area();

}