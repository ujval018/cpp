#include <iostream>

using namespace std;
int Lsearch(int arr[],int key){
    for(int i=0;i<7;i++){
        if(arr[i]==key){
            
            return i;
        }
    }
    return -1;
}

int main(){
    
    int arr[7]={1,2,3,5,6,7,9};

    int key;
    cin>>key;
    cout<<"index is "<<Lsearch(arr,key);
    
}