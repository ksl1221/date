#include<iostream>
using namespace std;
class date{
    int dd,mm,yy;
    int a[13];
    long double dateno;
    void getno();
    public:
    date(){
        a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31;
        a[4]=a[6]=a[9]=a[11]=30;
        a[2]=28;
        dd=yy=mm=1;
    }
    void getdate();
    long double operator -(date&);
    date operator +(long double);
    friend ostream& operator <<(ostream&,date&);

};
void date::getdate(){
    cout<<"\nEnter date\n";
    cout<<"\nDay(dd) : ";
    cin>>dd;
    cout<<"\nMonth(mm) : ";
    cin>>mm;
    cout<<"\nYear(yy) : ";
    cin>>yy;
    while((yy%4!=0 && dd>a[mm])||(yy%4==0 && mm==2 && dd>29)||dd<=0||mm>12||mm<=0)
    {
        cout<<"Invalid entry\n";
        getdate();
    }
    getno();
} 
void date::getno(){
    int m=1;
    dateno=(long double)yy*365+yy/4;
    if(yy%4>0)
    dateno++;
    while(m!=mm){
        dateno+=a[m];
        if(yy%4==0 && m==2)
        dateno++;
        m++;
    }
    dateno+=dd;
}
ostream& operator <<(ostream &out,date &d1){
    out<<d1.dd<<"/"<<d1.mm<<"/"<<d1.yy;
    return out;
}
long double date::operator-(date &b){
    return (dateno-b.dateno);
}
date date::operator +(long double b){
    for(int i=1;i<=b;i++){
        dd++;
        if(dd>a[mm]){
            mm++;
            dd=1;
        }
        if(mm>12){
            yy++;
            mm=1;
        }
        if(yy%4==0)
        a[2]=29;
}
return *this;
}
int main(){
    date d1,d2,d3;
    d1.getdate();
    cout<<"\ndate 1 : "<<d1;
    d2.getdate();
    cout<<"\ndate 2 : "<<d2;
    long double dif,day;
    dif=d1-d2;
    cout<<"\nThe difference between the two dates is "<<dif<<endl;
    cout<<"\nenter the number of days to be added to the date"<<d1<<endl;
    cin>>day;
    d3=d1+day;
    cout<<"the new date is "<<d3;
    return 0;
}