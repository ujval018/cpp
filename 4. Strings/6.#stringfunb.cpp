//basic functions in string class
#include<iostream>
#include <string>

using namespace std;

int main (){
  string s1;
  cout<<"enter string :- "<<endl;
  cin>>s1;
  //this gives the length of str object
  cout<<"length of string is :- "<<s1.length()<<endl;

  //this gives the size of str object
  cout<<"size of string is :- "<<s1.size()<<endl;

  //this gives the total capacity of current object
  cout<<"capacity of string"<<s1.capacity()<<endl;

  //this resize the object size
  s1.resize(20);

  //this gives the size of str object after resize
  cout<<"new size of string is :- "<<s1.size()<<endl;

  //this give the possible max size of object in compiler possible
  cout<<s1.max_size()<<endl;

  //this cleans the object
  s1.clear();

  //this gives the size of str object
  cout<<"newest length of string is :- "<<s1.size()<<endl;

  if (s1.empty())
  {
    cout<<"null string";
  }else{
    cout<<s1.size();
  }
  

  return 0;
}
