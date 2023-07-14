#include <iostream>
#include <string>

using namespace std;

int main (){
  //string initilisation 
  string s1="ram ram jii";
  //string declaration
  char s2[20];
  //str.copy(from,length)
  s1.copy(s2, s1.length());
  cout<<s2<<endl;
  //string declaration
  char s3[20];
  //str.copy(from,length)
  s1.copy(s3, 3);
  s3[3]='\0';//must be done else garbage value
  cout<<s3<<endl;
  //str.find() find the string/char
  cout<<s1.find("jii")<<endl;  
  cout<<s1.rfind('r')<<endl;
  cout<<s1.find_first_of('a',3)<<endl;

  //forms a new sub string 
  cout<<s1.substr(3)<<endl;
  cout<<s1.substr(3,4)<<endl;

  string s5="apple";
  string s4="dog";
  cout<<s4.compare(s5);

  return 0;
}
