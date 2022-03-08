#include<iostream>
using namespace std;
class sll{
    int data,n,i;
    sll *next;
    public:
    void create();
    void insert();
    void del();
    void dis();
};
sll *head=NULL,*temp=NULL,*newnode;
void sll::create(){
    cout<<"enter the number of nodes to be created\n";
    cin>>n;
    for(i=0;i<n;i++){
        newnode = new sll;
        cout<<"enter the data field\n";
        cin>>newnode->data;
        if(head==NULL)
        head=temp=newnode;
        else{
            temp->next=newnode;
            temp=temp->next;
        }
    }
}
void sll::insert(){
    newnode= new sll;
    cout<<"enter the data field\n";
    cin>>newnode->data;
    newnode->next=head;
    head=newnode; 
}
void sll::del(){
    temp=head;
    if(head==NULL)
    cout<<"list is empty\n";
    else{
        head=temp->next;
        delete temp;
        cout<<"node deleted\n";
    }
}
void sll::dis(){
    temp=head;
    if(head==NULL)
    cout<<"list is empty\n";
    else{
    while(temp->next!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }cout<<temp->data<<"  "<<endl;;
}
}
int main(){
    int ch;
    sll s;
    while(1){
    cout<<" 1.create\n 2.insert\n 3.delete\n 4.display\n 5.Exit\nEnter your choice\n";
    cin>>ch;
    switch(ch){
        case 1:s.create();
               break;
        case 2:s.insert();
               break;
        case 3:s.del();
               break;
        case 4:s.dis();
               break;
        case 5:exit(0);
        default:cout<<"invalid\n";
    }
    }
    return 0;
}