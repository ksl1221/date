#include<iostream>
using namespace std;
class rect{
    int l,b;
    public:
    rect(int,int);
    ~rect();
    void len();
    void breadth();
    friend void area(rect);
};
rect::rect(int x,int y){
    l=x;
    b=y;
}
rect::~rect(){
    cout<<"destructor called\n";
}
void rect::len(){
    cout<<"the length is "<<l<<endl;
}
void rect::breadth(){
    cout<<"the breadth is "<<b<<endl;
}
int main(){
    cout<<"enter the length and breadth\n";
    int x,y;
    cin>>x>>y;
    rect r(x,y);
    r.len();
    r.breadth();
    area(r);
    return 0;
}
void area(rect r){
    cout<<"the area is "<<r.l*r.b<<endl;
}