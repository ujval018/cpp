#include<iostream>
using namespace std;
int x=25;

int main (){
    int x=10;
    {
        int x=20;
        cout<<"this is variable of block level lv "<<x<<endl;
    }
    cout<<"this is local variable of main fun "<<x<<endl;
    cout<<"this is global variable printed using scope ::"<<::x<<endl;
    return 0;

}