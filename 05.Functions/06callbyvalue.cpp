#include <iostream>

using namespace std;
    int swap( int x ,int y){
        int z;
        z=y;
        y=x;
        x=z;
    }


int main (){
    int a=3,b=6;
    swap(a,b);
    cout<<a<<" "<<b;

    return 0;
}