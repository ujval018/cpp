//to find largest element of an array
#include <iostream>
using namespace std;

int main(){
          int A[5]={1,3,9,7,13};
          int m=0;

          for (int x:A)
          {
            if (m<x)
            {
                m=x;
            }
            
          }
          cout<<m;
          
        
  
return 0;
}
