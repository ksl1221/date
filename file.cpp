#include <iostream>
#include <fstream>
using namespace std;
class student_info{
    char name[20];
    int age;
    char sex;
    float height;
    float weight;
    public:void read();
    void write();
    };
    void student_info::read()
    {
        cout << "\nEnter Name: ";
        cin>>name;cout << "Enter Age: ";
        cin>>age;cout << "Enter Gender (F/M): ";
        cin>>sex;cout << "Enter Height: "; 
        cin>>height;cout << "Enter Weight (kilogram): ";
        cin>>weight;
    }
    void student_info::write(){
         cout<<"\n\nName: "<<name<<"\nAge: "<<age<<"\nGender: "<<sex<<"\nHeight:"<<height<<"\nWeight: "<<weight<<"kg";
    }
    int main(){
        int n;
        cout<<"Enter how many records are to be stored:";
         cin>>n;
         student_info s[n];
         ofstream fout;
         fout.open("data.txt");
         for(int i=0;i<n;i++){s[i].read();
         fout.write((char*)&s[i],sizeof(s[i]));
         }
         fout.close();
         ifstream fin;
         cout<<"..............DISPLAYING THE CONTENTS OF THE FILE...........\n"<<endl;
         fin.open("data.txt");
         for(int i=0;i<n;i++){
             while(fin.read((char*)&s[i],sizeof(s[i]))){s[i].write();
            }
            }
            fin.close();
                return 0;
    }