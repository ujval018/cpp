#include <iostream>

using namespace std;

void printfun(){
    cout<<"hello world"<<endl;
}
int add(int x, int y){
    int z;
    z=x+y;
    return z;
}
int main (){
    printfun();
    int a=2,b=5;
    int c;
    c=add(a,b);
    cout<<c;

}