#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    void display()
    {
        cout<<"name:"<< name<<endl;
        cout<<"roll"<<rollno<<endl;
    
    }
};
int main(){
    student c1;
    c1.name="aayush";
    c1.rollno=46;
    c1.display();
    


}