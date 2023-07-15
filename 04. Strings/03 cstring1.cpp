//strlen(), strcat, strncat, strcpy, strncpy
#include <iostream>
#include<cstring>

using namespace std;

int main (){
  //strcat use 
  char A[20]="Hello";
  char B[10]="RamRam";
  cout<<A<<" jii "<<B<<endl;  
  strcat(A,B);
  cout<<A<<endl;
  //strncat use
  char a[20]="Hello";
  char b[10]="RamRam";
  strncat(a,b,3);
  cout<<a<<endl;  
  //strlen use
  cout<<"length of string A is "<<strlen(A)<<endl;
  //strcpy use
  char str1[20];
  strcpy(str1,A);
  cout<<str1<<endl;
  //strncpy use
  char str2[20];
  strncpy(str2,B,3);
  cout<<str2<<endl;

  return 0;
}
