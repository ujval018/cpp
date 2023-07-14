//find username from the mail id
#include <iostream>
#include<string>
using namespace std;

int main (){
  string mail="ujval018@gmail.com";
  int at=mail.find('@');
  cout<<at<<endl;
  cout<<"username :- "<<mail.substr(0,at);


  return 0;
}
