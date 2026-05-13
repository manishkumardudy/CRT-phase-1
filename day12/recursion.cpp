#include <iostream>
using namespace std;
int a_tree(int x){
    if(x==1)
        return true;
    if(x==0||x%2==0)
       return false;
    return (x/2);
}
    
    
    
int main(){
    int a;
    cout<<"enter your number :";
    cin>>a;
    cout<<a_tree(a);
    
}