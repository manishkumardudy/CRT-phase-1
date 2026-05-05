#include<iostream>
using namespace std;
void applydis(float &bill){
    bill=bill-(0.10*bill);

}
int main(){
    float bill;
    cout<<"enter your amount";
    cin>>bill;
    applydis(bill);
    cout<<"this is your bill :: "<<bill;

}