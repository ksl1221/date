#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class s{
    public:
    string name;
    int id;
    void read(ofstream &);
    void write(ifstream &);
};
void s::read(ofstream &fout){
    cout<<"enter name and id\n";
    cin>>name>>id;
    fout<<"name : "<<name<<"\nid : "<<id<<endl;
}
void s::write(ifstream &fin){
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
}
int main(){
    cout<<"enter the number of records\n";
    int n;
    cin>>n;
    s s1;
    ofstream fout;
    fout.open("data1.txt");
    for(int i=0;i<n;i++)
    s1.read(fout);
    fout.close();
    cout<<"displaying contents \n";
    ifstream fin;
    fin.open("data1.txt");
    s1.write(fin);
    fin.close();
    return 0;
}
