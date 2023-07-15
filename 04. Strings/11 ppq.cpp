//COUNT VOWELS CONSONANTS 
#include<iostream>
#include <string>
using namespace std;

int main(){
  string str="Hello my name is ram";
  int v=0;
  int c=0;
  for (int i = 0; str[i]!='\0'; i++)
  {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
        v++;
      } else if(str[i]>=65 && str[i]<=90){
      c++;
    }else if(str[i]>=97 && str[i]<=122){
      c++;
    }
    
  }
  cout<<v<<endl;
  cout<<c;
  
  

  return 0;
}
