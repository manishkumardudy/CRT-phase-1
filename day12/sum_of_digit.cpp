#include <iostream>
using namespace std;
int sum_of(int n){
    if (n==0)
        return 0;
    return (n%10)+sum_of(n/10);

}
    
int main(){
    cout<<"enter a number:";
    int a;
    cin>>a;
    int n=sum_of(a);
    cout<<"number of sum is "<<n;
}