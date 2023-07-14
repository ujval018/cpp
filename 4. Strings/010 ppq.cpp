//convert the cases of letters in the string
#include<iostream>
#include <string>
using namespace std;

int main(){
  string str="HE9Lo";
  for (int i = 0; str[i]!='\0'; i++)
  {
    if(str[i]>=65 && str[i]<=90){
      str[i]+=32;
    }else if(str[i]>=97 && str[i]<=122){
      str[i]=str[i];
    }else{
      str[i]='?';
    }
    
  }
  cout<<str;
  
  

  return 0;
}
