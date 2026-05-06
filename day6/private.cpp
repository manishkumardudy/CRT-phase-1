#include<iostream>
using namespace std;
class student{
    private:
    int registetion_number;

    public:
    string name;
    int rollno;
    void display(){
         cout<<"name:"<< name<<endl;
         cout<<"roll:"<<rollno<<endl;
         cout<<"regestetion_number"<<registetion_number<<endl;
         registetion_number++;
    }
};
int main(){
    student c1;
    c1.name="hhhh";
    c1.rollno=56;
    c1.display();
}

