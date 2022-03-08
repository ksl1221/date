#include<iostream>
using namespace std;
class complex{
    int r,i;
    public:
    void getdata();
    void print();
    complex add(int,complex);
    complex add(complex,complex);
};
void complex::getdata(){
    cout<<"enter the real and imaginary part respectively\n";
    cin>>r>>i;
}
void complex::print(){
    cout<<r<<" + i"<<i<<endl;
}
complex complex::add(int a,complex c){
    complex t;
    t.r=a+c.r;
    t.i=c.i;
    return t;
}
complex complex::add(complex c1,complex c2){
    complex t;
    t.r=c1.r+c2.r;
    t.i=c1.i+c2.i;
    return t;
}
int main(){
    complex c1,c2,c3,c4;
    cout<<"enter the first complex number"<<endl;
    c1.getdata();
    cout<<"c1 : ";
    c1.print();
    cout<<"enter the integer to be added to the first complex number"<<endl;
    int c;
    cin>>c;
    c4=c1.add(c,c1);
    cout<<" result after addition : ";
    c4.print();
    cout<<"enter second complex number"<<endl;
    c2.getdata();
    cout<<"c2 : ";
    c2.print();
    c3=c3.add(c4,c2);
    cout<<"c3 : ";
    c3.print();
    return 0;
}