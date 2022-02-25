#include <iostream>
#define size 20
using namespace std;
class stack
{
 int a[size],top,ms;
 public:
  stack()
  {
           top=-1; cout<<"MAX:";cin>>ms;
 }

 stack operator +(int ele)
 {
   if(top>ms-2)
   cout<<"Stack Overflow\n";
   else
       {
            top++;
            a[top]=ele;
        }

       return (*this);
 }

  stack operator --(int)
  {
    if(top==-1)
        cout<<"Stack Underflow";
    else
   {
       cout<<"\nElement deleted is "<<a[top--];}
    return (*this);
 }

 friend ostream& operator <<(ostream& c,stack s)
 {
    if(s.top==-1)
          cout<<"Stack Empty";
    else
    for(int j=s.top;j>=0;j--)
                 cout<<" "<<s.a[j];
    return c;
 }
}s;
int main()
{
  int ch,ele;
  while(1){
  cout<<"\n1:Enter an element\n2:Delete an element\n3:Display\n4:exit\n";
  cout<<"\n enter your choice\n";
  cin>>ch;
  switch(ch)
  {
      case 1:cout<<"Enter the element:\n";cin>>ele;s=s+ele;break;
      case 2:s=s--;break;
      case 3:cout<<s;break;
      default:exit(0);
   }
  }
return 0;
}