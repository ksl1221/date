#include<iostream>
using namespace std;

template<typename t>
int partition(t a[],int l,int h)
{
    int i,j;
    t pivot=a[l];
    i=l;
    j=h;
    while(i<j)
    {
        while(a[i]<=pivot)
        i++;
        while(a[j]>pivot)
        j--;
        if(i<j)
        {
            t temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    t v=a[l];
    a[l]=a[j];
    a[j]=v;
    return j;
}
template<typename q>
void qsort(q a[],int l,int h)
{
    if(l<h)
    {
        int j=partition(a,l,h);
        qsort(a,0,j-1);
        qsort(a,j+1,h);
    }
}
int main()
{
    int a[100],i,ch,n;
    double b[100];
    while(1)
    {
        cout<<"\nMENU---\n1.integers\n2.double\n3.exit\n";
        cout<<"Your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:cout<<"Enter the no.of terms:";
            cin>>n;
            cout<<"Enter the elements:"<<endl;
                   for(i=0;i<n;i++)
                   { cin>>a[i];}
                   qsort(a,0,n-1);
                   cout<<"\nSorted array:";
                   for(i=0;i<n;i++)
                   cout<<a[i]<<" ";
                   break;
            case 2: cout<<"Enter the no.of terms:";
            cin>>n;
            cout<<"Enter the elements:"<<endl;
                   for(i=0;i<n;i++)
                   { cin>>b[i];}
                   qsort(b,0,n-1);
                   cout<<"\nSorted array:";
                   for(i=0;i<n;i++)
                   cout<<b[i]<<" ";
                   break;      
                   case 3:exit(0);
                   default:cout<<"INVALID!!!";
        }
    }
    return 0;
}