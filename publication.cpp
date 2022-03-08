#include<iostream>
using namespace std;
class publication{
    public:
    string title;
    publication(){
        title="IEEOOP";
    }
    void print(){
        cout<<"TITLE : "<<title<<endl;
    }
};
class book:public publication{
    public:
    float an;
    book(){
        an=681.3;
    }
    void print(){
        publication::print();
        cout<<"ACCESSION NUMBER : "<<an<<endl;
    }
};
class mag:public publication{
    public:
    int vol;
    mag(){
        vol=1;
    }
    void print(){
        cout<<"VOLUME : "<<vol<<endl;
    }
};
class journal:public book,mag{
    public:
    void print(){
        book::print();
        mag::print();
    }
};
int main(){
    journal j;
    j.print();
    return 0;
}