#include<iostream>
using namespace std;


//1. write a sum() function here to add 2 integer
int sum(int x, int y){
    int z;
    z=x+y;
    return z;
}
//2. write a sum() function here to add 2 floats
float sum(float x, float y){
    float z;
    z=x+y;
    return z;
}
//3. write a sum() function here to add 3 integer
int sum(int x, int y,int z){
    int d;
    d=x+y+z;
    return d;
}


void Main()
{
    cout<<sum(10,5);
    cout<<sum(12.9f,8.3f);
    cout<<sum(10,20,30);
}
