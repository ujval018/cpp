//palindrome check
#include<iostream>
#include <string>

using namespace std;

int main (){
  string str="mdam";
  int n;
  n=str.length();
  char rev[10];
  for (int i = 0; i <n; i++)
  {
    rev[i]=str[n-1-i];
    
  }
  rev[n]='\0';
  for (int i = 0; i < n; i++)
  {
    if (rev[i]==str[i])
    {
      
    }else{
      return 0;
    }
    
  }
  
  cout<<rev;
  

  return 0;
}
