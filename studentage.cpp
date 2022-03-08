#include<iostream>
using namespace std;
class student{
    public:
    int reg,age;
    char name[50];
    void getdata();
};
class ug:public student{
    public:
    int sem;
    float fees,stipend;
    void getdata();
};
class pg:public student{
    public:
    int sem;
    float fees,stipend;
    void getdata();
};
void student::getdata(){
    cout<<"enter name \n";
    cin>>name;
    cout<<"Enter register num and age respectively"<<endl;
    cin>>reg>>age;
}
void ug::getdata(){
    student::getdata();
    cout<<"enter sem\n";
    cin>>sem;
    cout<<"enter fees and stipend repectively\n";
    cin>>fees>>stipend;
}
void pg::getdata(){
    student::getdata();
    cout<<"enter sem\n";
    cin>>sem;
    cout<<"enter fees and stipend repectively\n";
    cin>>fees>>stipend;
}
int main(){
    ug u[20];
    pg p[20];
    int j,i,n;
    float avg;
    cout<<"enter the entries of ug student\n";
    cin>>n;
    cout<<"enter the details\n";
    for(i=0;i<n;i++)
    u[i].getdata();
    for(i=1;i<=8;i++){
        int count=0,found=0;
        int sum=0;
        for(j=0;j<n;j++){
            if(u[j].sem==i){
                found=1;
                count++;
                sum=sum+u[j].age;
        }
        }
        if(found==1){
            avg=sum/count;
            cout<<"the average age of sem "<<i<<" is "<<avg<<endl;
        }
    }
cout<<"enter the entries of ug student\n";
cin>>n;
cout<<"enter the details\n";
for(i=0;i<n;i++)
p[i].getdata();
for(i=1;i<=4;i++){
    int count=0,found=0;
    float sum=0;
    for(j=0;j<n;j++){
        if(p[j].sem==i){
             found=1;
            count++;
             sum+=p[j].age;
        }
    }
    if(found==1){
         avg=sum/count;
         cout<<"the average age of sem "<<i<<" is "<<avg<<endl;
    }
}
return 0;
}