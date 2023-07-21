#include <iostream>
using namespace std;

class Complex{
    private:
            int real;
            int img;
    public:
            Complex(int r, int i);
            Complex operator+(Complex x);
            int getReal();
            int getImg();
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
int Complex::getReal(){
    return real;
}
int Complex::getImg(){
    return img;
}
int main(){
    Complex c1(12,35);
    Complex c2(3,0);
    Complex c3;
    c3=c1+c2;
    cout<<c3.getReal()<<"+i"<<c3.getImg();    

    return 0;
}