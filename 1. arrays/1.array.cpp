//array initialization take the values and print using for loop and for each loop
#include <iostream>
using namespace std;

int main(){
          int A[5];

          cout<<"enter array:- "<<endl;
          for (int i = 0; i < 5; i++)
          {
            cin>>A[i];
          }
          cout<<"the array is:- ";

          for (int i = 0; i < 5; i++)
          {
            cout<<A[i]<<" ";
          }
          cout<<endl<<"arrays using each loop :- ";
          for (int x:A)
          {
            cout<<x<<" ";
          }
          

  
return 0;
}
