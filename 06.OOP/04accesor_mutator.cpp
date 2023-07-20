#include<iostream>

using namespace std;
class rectangle{
    private:
            int length;
            int breadth;

    public: //to take input length
            void setLength(int l){
                    if(l>0){
                        length=l;
                    }else {
                        cout<<"invalid input"<<endl;
                        length=0;
                    }
            }
            //to print length
            int getLength(){                   
                    return length;
            }
            //to take input breadth
            void setBreadth(int b){
                    if(b>0){
                        breadth=b;
                    }else {
                        cout<<"invalid input"<<endl;
                        breadth=0;
                    }
            }
            int getBreadth(){                   
                    return breadth;
            }
            int area(){
                return length * breadth;
            }
            int perimeter(){
                return 2*(length*breadth);
            }

};

int main(){
    rectangle r1;
    r1.setLength(4);    
    r1.setBreadth(4);
    cout<<r1.getLength()<<endl;;    
    cout<<r1.getBreadth()<<endl;;
    cout<<r1.area();

    return 0;
}