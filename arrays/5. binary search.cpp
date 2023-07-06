//binary search for a key

#include <iostream>
using namespace std;

int main(){
          int A[10]={1,3,9,7,13,18,19,24,27,79};
          int key=24;
          int l=0,h=9, mid;

          while (l<h)
          { 
            mid=(l+h)/2;

            if (A[mid]==key)
            {
              cout<<"found at:- "<<mid;
              return 0;
            }else if (A[mid]<key)
            {
             l=mid++;
            }else if (A[mid]>key)
            {
             h=mid--;
            }
            
            
           
          }cout<<"not found!";
          
          
         
return 0;
}
