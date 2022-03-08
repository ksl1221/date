#include<iostream>
using namespace std;
class dll{
    int data,n,i,pos;
    dll *prev,*next;
    public:
    void create();
    void insert();
    void del();
    void dis();
};
dll *head=NULL,*temp=NULL,*newnode,*t=NULL;
void dll::create(){
    cout<<"enter the number of nodes to be created\n";
    cin>>n;
    for(i=0;i<n;i++){
        newnode = new dll;
        cout<<"enter the data field\n";
        cin>>newnode->data;
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        head=temp=newnode;
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=temp->next;
        }
}
}
void dll::insert(){
     newnode = new dll;
        cout<<"enter the data field\n";
        cin>>newnode->data;
        newnode->next=NULL;
        newnode->prev=NULL;
        cout<<"enter the position\n";
        cin>>pos;
        temp=head;
        for(i=1;i<pos-1;i++){
            temp=temp->next;
        }
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next=newnode;
        newnode->next->prev=newnode;               
}
void dll::del(){
    cout<<"enter the position\n";
    cin>>pos;
    temp=head;
    if(head==NULL)
    cout<<"underflow\n";
    else{
    for(i=1;i<pos-1;i++){
        temp=temp->next;
    }
    t=temp;
    t=t->next;
    t->next->prev=temp;
    temp->next=t->next;
    delete t;
    }
}
void dll::dis(){
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
    dll d;
    while(1){
    cout<<" 1.create\n 2.insert\n 3.delete\n 4.display\n 5.Exit\nEnter your choice\n";
    cin>>ch;
    switch(ch){
        case 1:d.create();
               break;
        case 2:d.insert();
               break;
        case 3:d.del();
               break;
        case 4:d.dis();
               break;
        case 5:exit(0);
        default:cout<<"invalid\n";
    }
    }
    return 0;
}