//strlen(), strcat and strncat
#include <iostream>
#include<cstring>

using namespace std;

int main (){
  char A[20]="Hello";
  char B[10]="RamRam";
  cout<<A<<" jii "<<B<<endl;  
  strcat(A,B);
  cout<<A<<endl;
  char a[20]="Hello";
  char b[10]="RamRam";
  strncat(a,b,3);
  cout<<a<<endl;  
  cout<<"length of string A is "<<strlen(A);

  return 0;
}
