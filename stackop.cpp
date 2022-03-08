#include<iostream>
using namespace std;
#define max 25
class stack{
    int a[max],top,ms;
    public:
    stack(){
        top=-1;
        cout<<"max size : "<<endl;
        cin>>ms;
    }
stack operator +(int ele){
    if(top>ms-2)
    cout<<"stack overflow\n";
    else
        a[++top]=ele;
        return(*this);
    }
stack operator --(int){
    if(top==-1)
    cout<<"stack underflow\n";
    else
    cout<<"the poped ele is "<<a[top--]<<endl;
    return (*this);
}
friend ostream& operator <<(ostream& c,stack s){
    if(s.top==-1)
    cout<<"stack is empty\n";
    else{
        for(int j=s.top;j>=0;j--){
            cout<<"  "<<s.a[j];
        }cout<<endl;
    }
return c;
}
};
int main(){
    stack s;
    int ch,ele;
    while(1){
        cout<<"1.push\n2.pop\n3.diplay\n4.exit\n";
        cin>>ch;
        switch(ch){
            case 1:cout<<"enter the element\n";
                   cin>>ele;
                   s=s+ele;
                   break;
            case 2:s=s--;
                   break;
            case 3:cout<<"the elements are : "<<s;
                    break;
            case 4:exit(0);
            default:cout<<"invalid \n";
        }
    }
    return 0;
}