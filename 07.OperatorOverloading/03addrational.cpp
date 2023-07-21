#include <iostream>
using namespace std;
class Rational{
    private:
            int num;
            int deno;
    public:
            Rational(){
                num=1;
                deno=1;
            }
            Rational(int p, int q);
            friend Rational operator+(Rational r1,Rational r2);
            friend ostream& operator<<(ostream& o, Rational& r1);
};
Rational::Rational(int p, int q){
    num=p;
    deno=q;
}
Rational operator+(Rational r1,Rational r2){
    Rational temp;
    temp.num=r1.num*r2.deno+r2.num*r1.deno;
    temp.deno=r1.deno*r2.deno;
    return temp;
}
ostream& operator<<(ostream& o, Rational& r1){
    o<<r1.num<<"/"<<r1.deno;
    return o;
}
int main (){
    Rational r11(5,6);
    Rational r12(3,5);
    Rational r13;
    r13=r11+r12;
    cout<<r13;

    return 0;
}