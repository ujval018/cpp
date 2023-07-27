#include<iostream>
#include <string>
#include<fstream>
using namespace std;

class item{
    private:
    string name;
    int quantity;
    int price;
    public:
    item(){}
    item(string name,int quantity,int price){
        this->name=name;
        this->quantity=quantity;
        this->price=price;        
    }
    friend ofstream & operator<<(ofstream &out, item &it);
    friend ifstream & operator>>(ifstream &in, item &it);
    friend ostream & operator<<(ostream &o, item &it);


};
ostream & operator<<(ostream &o, item &it){
    o<<it.name<<endl<<it.quantity<<endl<<it.price<<endl;
}
ofstream & operator<<(ofstream &out, item &it){
    out<<it.name<<endl<<it.quantity<<endl<<it.price<<endl;
    return out;
}
ifstream & operator>>(ifstream &in, item &it){
    in>>it.name>>it.quantity>>it.price;
    return in;
}

int main(){
    int n;
    string name;
    int quantity;
    int price;
    cout<<"enter number of items "<<endl;
    cin>>n;
    item *list[n];
    cout<<"enter details :-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter product name :-"<<endl;
        cin>>name;
        cout<<"enter product quantity :-"<<endl;
        cin>>quantity;
        cout<<"enter product price :-"<<endl;
        cin>>price;
        list[i]=new item(name,quantity,price);
    }
    ofstream out("product.txt",ios::app);
    for (int i = 0; i < n; i++)
    {
         out<<*list[i];        
    }
    item product;
    ifstream in("product.txt");
    for (int i = 0; i < n; i++)
    {
         in>>product;   
                
                 cout<<"product "<<i<<" "<<product;
    }
    
return 0;
}
