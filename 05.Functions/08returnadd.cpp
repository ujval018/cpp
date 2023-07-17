#include <iostream>
using namespace std;

int* fun(int x){
    int *p=new int[x];
    for (int i = 0; i < x; i++)
    {
        p[i]=i+1;
    }
    return p;
}
int main(){
    int x;
    cin>>x;
    int *ptr=fun(x);
    for (int i = 0; i < x; i++)
    {
        cout<<ptr[i];
    }    

}