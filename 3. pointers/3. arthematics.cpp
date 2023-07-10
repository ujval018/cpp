//arthematics in pointers
#include<iostream>
using namespace std;

int main(){
  int A[]={2,4,6,8,10,12};
    int *p=A;
    
    // move pointer to next location to print 4
    p++;
    cout<<*p;
    p--;
    cout<<*p;
    
    p=p+3; 
    p=p-2;
    
    

  return 0;
}
