#include<iostream>
using namespace std;
class student{
    public:
    string a;
    int b;
    float c;
};
int main (){
    student dettalis;

    cout<<"enter your name ";
    cin>>dettalis.a;
    cout<<"enter your roll no ";
    cin>>dettalis.b;
    cout<<"enter your marks ";
    cin>>dettalis.c;
    cout<<"student dettails"<<endl<<"your name is:"<<dettalis.a<<endl<<"your roll is :"<<dettalis.b<<endl<<"your marks is :"<<dettalis.c; 

}