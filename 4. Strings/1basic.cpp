#include<iostream>

using namespace std;

int main(){

  char str[]="hello";
  cout<<str<<endl;
  char str1[6]={'h','e','l','l','o','\0'};
  char str2[6]="Ujval"; //this way \0 automatically be entered in the array ---literal
  char str3[]="hello"; // literal
  //char *str="hello"; most compiler does not support

  return 0;
}
