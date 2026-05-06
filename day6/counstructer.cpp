#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
student(){
    name="aayush";
    rollno=44;
}
void show(){
     cout<<"name:"<< name<<endl;
     cout<<"roll:"<<rollno<<endl;
     cout<<"defult constucter"<<endl;

}
};
int main(){
    student s1;
    s1.show();
    return 0;
}