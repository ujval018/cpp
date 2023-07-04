//sum of elements of array

#include <iostream>
using namespace std;

int main(){
          int A[5]={1,3,5,7,9};
          int sum=0;

          cout<<"sum of array is :- "<<endl;
          for (int i = 0; i < 5; i++)
          {
            sum=sum+A[i];
          }
          cout<<sum;

        int B[5]={2,3,5,7,9};
        int sum1=0;
        cout<<"sum of array is using for each loop:- "<<endl;
        for (int y:B)
        {
            sum1=sum1+y;
        }
        cout<<sum1;

          
  
return 0;
}
