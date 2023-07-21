#include <iostream>
using namespace std;

class Complex{
    private:
            int real;
            int img;
    public:
            Complex(int r, int i);
            Complex operator+(Complex x);
friend ostream& operator<<(ostream& o, Complex& x);
friend istream& operator>>(istream& i, Complex& x);

};
Complex::Complex(int r=0, int i=0){
    real=r;
    img=i;
}
Complex Complex::operator+(Complex x){
    Complex temp;
    temp.real=real+x.real;
    temp.img=img+x.img;
    return temp;
}
ostream& operator<<(ostream& o, Complex& x){
    o<<x.real<<"+i"<<x.img;
    return o;
}
istream& operator>>(istream& i, Complex& x){
    i>>x.real>>x.img;
    return i;
}

int main(){
    Complex c1;
    cin>>c1;
    Complex c2(3,5);
    Complex c3;
    c3=c1+c2;
    cout<<c3;

    return 0;
}