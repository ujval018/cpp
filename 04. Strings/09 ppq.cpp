//find the length of the string 
#include<iostream>
#include <string>


using namespace std;

int main (){
  string str="hello";
  string::iterator it;
  int count=0;
  for (it = str.begin(); it !=str.end(); it++)
  {
    count++;
  }
  cout<<count<<endl;
  string str1="hel";
  int count1=0;
  for (int i = 0; str1[i]!='\0'; i++)
  {
    count1++;
  }cout<<count1;
  
  

  return 0;
}
