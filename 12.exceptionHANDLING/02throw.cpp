#include <iostream>
using namespace std;
class myexception:public exception{
    
};
int division(int a,int b){
    if(b==0){
    throw 101;}//can throw anything
    else{
    return a/b;
        
    }
}
int main (){
    try{
    cout<<division(6,0);}
    catch(int e){
        cout<<e;
        }
    return 0;
}