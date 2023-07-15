//take input string input and print it using cin.get function 
#include <iostream>
using namespace std;

int main(){

  char str[100];
  cout<<"what's your name?"<<endl;
  cin.get(str,100);//if we just take cin>>str; it will print first word only
  cout<<"welcome to code world "<<str<<endl;
  cin.ignore();//or just use getline function

  char str1[100];
  cout<<"what's your name again?"<<endl;
  cin.get(str1,100);
  cout<<"welcome to code world mr. "<<str1<<endl;
  

  return 0;
}
