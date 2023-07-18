//how to create a class
#include <iostream>
using namespace std;

class circle//defininng a class
{ public://by deafault all the data and function is not accesable by the main 
            // therefore making it public is neccesary
    float radius;
    float perimeter(){
        return 2*3.14*radius;
    }
    float area(){
        return 3.14*radius*radius;
    }

};
int main(){
    circle c1,c2;//initialising object from class circle
    c1.radius=7;//accesss and allocating value using . operator
    cout<<c1.perimeter();
    return 0;
}