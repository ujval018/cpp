#include <iostream>
#include <cstring>

using namespace std;

int main(){
  //strstr(where,what) this checks the occurance of string in a string 
    char A[20]="Ram bhakt Hanuman";
    char B[20]="bhakt";
    cout<<strstr(A,B)<<endl;

  //strchr or strrchr (where what) this checks the character from the string 
    char a[10]="oalphak";
    cout<<strchr(a,'a')<<endl;
    cout<<strrchr(a,'a')<<endl;

  //strcmp(s1,s2) this compares two string acc to order
    char s1[10]="apple";
    char s2[10]="cat";
    cout<<strcmp(s1,s2);


  return 0;
}
