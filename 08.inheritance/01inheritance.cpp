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
                        }
                    }
                    int setBreadth(int b){
                        if (b>0){
                            breadth=b;
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
                    //inheritance
        class Cuboid:public Rectangle{
                private:
                    int height;
                public:
                    Cuboid(int l=0, int b=0,int h=0){
                        setLength(l);
                        setBreadth(b);
                        height=h;
                    }
                    int volume(){
                        return area()*height;
                    }
                    };

int main(){
    Cuboid r1(10,5,7);

    cout<<"length is :- "<<r1.getLength()<<endl;
    cout<<"bredth is :- "<<r1.getBreadth()<<endl;
    cout<<"volume is :- "<<r1.volume();

}