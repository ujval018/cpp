#include <iostream>
using namespace std;

int main (){

  int a=9;//data is initialised 
  int b=10;//data is initialised 
  int *p1;//pointer is declared 
  p1= &a;//pointer is intialised and address of a is stored 
  int *p2=&b;//pointer is declared and initialised

  cout<<"value of a :- "<<a<<endl<<endl;
  cout<<"address of a by &a :- "<<&a<<endl<<endl;
  cout<<"value of p1 :- "<<p1<<endl<<endl;
  cout<<"address of p1 by &p1 :- "<<&p1<<endl<<endl;
  cout<<"Dereferencing of p1 (*p1) :- "<<*p1<<endl<<endl;
  cout<<"Dereferencing :- pointing to the data whose address is being stored"<<endl<<endl;

  cout<<"value of b :- "<<b<<endl<<endl;
  cout<<"address of b by &b :- "<<&b<<endl<<endl;
  cout<<"value of p2 :- "<<p2<<endl<<endl;
  cout<<"address of p2 by &p2 :- "<<&p2<<endl<<endl;
  cout<<"Dereferencing of p2 (*p2) :- "<<*p2<<endl<<endl;

    
  return 0;
}
