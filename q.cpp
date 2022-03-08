#include<iostream>
using namespace std;
#define max 5
int u[max],front=-1,rear=-1;
class q{int i,ele,t;
    public:void enqueue();
    void dequeue();
    void display();
};
void q::enqueue(){
    cout<<"enter the element\n";
    cin>>ele;
    if(rear==max-1)
    cout<<"queue overflow\n";
    else if(front==-1 && rear==-1){
        front=rear=0;
        u[rear]=ele;
    }
    else{
        u[++rear]=ele;
    }
}
void q::dequeue(){
    if(front==-1 && rear==-1)
    cout<<"queue underflow\n";
    else if(front==rear){
        t=u[front++];
        front=rear=-1;
        cout<<"the deleted ele is "<<t<<endl;
    }
    else{
        t=u[front++];
        cout<<"the deleted ele is "<<t<<endl;
    }
}
void q::display(){
    if(front==-1 && rear==-1)
    cout<<"queue is empty\n";
    else{
        for(i=front;i<=rear;i++)
        cout<<u[i]<<"  ";
    }
    cout<<endl;
}
int main(){
    q q1;
    int ch;
    for(;;){
    cout<<" 1.insert\n 2.delete\n 3.dispaly\n 4.exit\nenter your choice\n";
    cin>>ch;
    switch(ch){
        case 1:q1.enqueue();
               break;
        case 2:q1.dequeue();
               break;
        case 3:q1.display();
               break;
        case 4:exit(0);
        default:cout<<"invalid\n";
}
}
return 0;
}
