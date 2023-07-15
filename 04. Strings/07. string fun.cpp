#include<iostream>
#include <string>

using namespace std;

int main(){
  string s1="hello";
  //append 
  s1.append("world");
  cout<<s1<<endl;
  string s2="hellojii";
  //insert
  s2.insert(2,"e");
  cout<<s2<<endl;
  s1.replace(2,3,"abc");
  cout<<s1<<endl;
  s1.erase();
  cout<<s1<<endl;
  s2.push_back('I');
  cout<<s2<<endl;
  s2.pop_back();
  cout<<s2<<endl;
  s1.swap(s2);
  cout<<s1<<endl;

  return 0;
}
