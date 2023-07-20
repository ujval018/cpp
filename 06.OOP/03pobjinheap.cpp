#include <iostream>
using namespace std;
 
class circle//defininng a class
{ public://by default all the data and function is not accessible by the main 
            //Therefore making it public is necessary
    float radius;
    float perimeter(){
        return 2*3.14*radius;
    }
    float area(){
        return 3.14*radius*radius;
    }
 
};
 
int main(){
        circle *p=new circle;//storing obj in heap
        p->radius=7;
        cout<<p->area();
 
return 0;
}