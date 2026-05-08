#include<iostream>
using namespace std;
class circter{ 
    string name;
    int runs;
public:
    circter(string name, int r){
        this->name=name;
        runs=r;
    }
    circter(const circter &c){
        this->name=c.name;
        this->runs=c.runs;

    }

    void show(){
        cout <<"name"<<name<<endl;
        cout <<"runs"<<runs<<endl;
        }

};
int main (){
    circter c1("virt", 12000);
    c1.show();
    circter c2(c1);
    c2.show();
    return 0;

}