#include <iostream>
using namespace std;
int main(){
    int a=3,b=0,c;
    try
    {
        if(b==0){
            throw 101;
        }else{
            c=a/b;
            cout<<c;
        }
    }
    catch(int e)
    {
        cout <<e<< '\n';
    }
     
    return 0;
}