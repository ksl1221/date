#include<iostream>
#include<math.h>
using namespace std;
class octal
{
    public:
    int oct[200],count;
    octal(int);
    friend int operator +(octal,int);
    friend ostream & operator <<(ostream &,octal);
};
octal::octal(int x)
{
    int a[200];
    int i=0,rem,n;
    while(x!=0)
    {
        rem=x%8;
        a[i]=rem;
        i=i+1;
        x=x/8;
    }
    count =i;
    n=count-1;
    for(i=0;i<count;i++)
        oct[i]=a[n-i];
}
int operator +(octal o1,int n)
{
    int s=0;
    for(int i=0;i<o1.count;i++)
    {
        s=s+(o1.oct[(o1.count)-i-1]*pow(8,i));
    }
    return(n+s);
}
ostream & operator <<(ostream &print,octal h)
{
    for(int i=0;i<h.count;i++)
    {
        print<<h.oct[i];
    }
    return print;
}
int main()
{
    int x,y,k;
    cout<<"Enter integer:-";
    cin>>x;
    octal h(x);
    cout<<"Enter an integer to add:-";
    cin>>k;
    y=h+k;
    cout<<"Octal of "<<x<<" is "<<h<<"\n";
    cout<<"The integer after adding is ";
    cout<<y;
    return 0;
}