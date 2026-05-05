#include<iostream>
using namespace std;
int multi(int a , int b){
    return a*b;
}
int main(){
    int a,b;

    cout<<"enter you takeing shot number";
    cin>>a;
    cout<<"enter taking 1 shot ml";
    cin>>b;
    int result= multi(a,b);
    cout<<result;
    
}