/*multiplication of matrix using multidimensional array*/
#include <iostream>
using namespace std;

int main(){

  int A[2][2]={7,5,6,3};
  int B[2][2]={{2,1},{5,1}};
  int C[2][2];

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      C[i][j]=0;
    }
    
  }
  
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      for (int k = 0; k < 2; k++)
    {
      C[i][j]+=A[i][k]*B[k][j];
    }
    }
    
  }


  
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout<<C[i][j]<<" ";
    }cout<<endl;
    
  }
  

  return 0;
}
