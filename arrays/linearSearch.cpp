//find the element and print the address

#include <iostream>
using namespace std;

int main(){
          int A[5]={1,3,9,7,13}, n=5;
          
          int key=9;
          

          for (int i=0; i< n; i++)
          {
            if (key==A[i])
            {
                cout<<"key found at "<<i;
                return 0;
            }
            
          }cout<<"not found!";
        
  
return 0;
}
