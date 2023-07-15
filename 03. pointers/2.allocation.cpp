//dynamic allocation of heap memory using pointer

#include<iostream>
using namespace std;

int main(){

  int A[3]={1,2,3};//stored in stack

  int *p1;//declariton of pointer 
  //stored in heap
  p1=new int[2];//allocation heap using "new" 

  int *p2=new int[2];//declariton and allocation of pointer 


  //////// Storing data in the heap array 
  p1[0]=11;
  p1[1]=12;
  p2[0]=21;
  p2[1]=22;

  ////
  cout<<sizeof A<<endl;
  cout<<sizeof p1<<endl;
  cout<<sizeof p2<<endl;

  //////always de-allocate the memory varna memory leaks happens
  delete []p1;
  delete []p2;
  p1=nullptr;
  p2=nullptr;


  return 0;
  }
