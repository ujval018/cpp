#include<iostream>
using namespace std;
int swap( int *x ,int *y){
        int z;
        z=*y;
        *y=*x;
        *y=z;
    }


int main (){
    int a=3,b=5;
    swap(&a,&b);
    cout<<a<<" "<<b;

    return 0;
}