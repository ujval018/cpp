// creating pointer to an object
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
        circle c1;
        circle *pc;
        pc=&c1;
        pc->radius=10;
           cout<<pc->area(); 
        
 
return 0;
}