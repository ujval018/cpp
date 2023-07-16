#include<iostream>
using namespace std;

 int add_fun(int x=0, int y=0, int z=0){
                return x+y+z;
            }
int main(){
    cout<<add_fun(2,3,4)<<endl;
    cout<<add_fun(2,3)<<endl;
    cout<<add_fun(2)<<endl;
    cout<<add_fun()<<endl;
}