#include<iostream>
using namespace std;
int main(){
    int value=10;
    int *ptr= &value;
    cout<<"addres "<<ptr<<endl;
    cout<<"value"<<value<<endl;
    *ptr=20;
    cout <<"value:"<<*ptr<<endl;
    cout <<"addres "<<value<<endl;
    return 0;

}