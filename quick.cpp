#include<iostream>
using namespace std;
class sort{
    public:
    int partition(int [],int,int);
    void quick(int [],int,int);
};
int sort::partition(int a[],int l,int h){
    int i,j,t;
    int pivot=a[l];
    i=l;
    j=h;
    while(i<j){
        while(a[i]<=pivot)
        i++;
        while(a[j]>pivot)
        j--;
    if(i<j){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
 }
    t=a[l];
    a[l]=a[j];
    a[j]=t;
    return j;
}
void sort::quick(int a[],int l,int h){
    if(l<h){
        int j=partition(a,l,h);
        quick(a,l,j-1);
        quick(a,j+1,h);
    }
}
int main(){
    int n,i,l,h,a[50];
    cout<<"enter the number of elements\n";
    cin>>n;
    l=0;
    h=n-1;
    sort s;
    cout<<"enter the elements\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    s.quick(a,l,h);
    cout<<"sorted array \n";
    for(i=0;i<n;i++)
    cout<<a[i]<<"  ";
    return 0;
}