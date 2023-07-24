#include<iostream>

using namespace std;

class object{
    public:
    static int a;
    object(){
            a++;
    }
    
};
int object::a=0;
int main (){
    object ob;
    cout<<ob.a<<endl;
    object d;
    object f;
    object ds;
    cout<<f.a<<endl;
    cout<<object::a;
    return 0;
}