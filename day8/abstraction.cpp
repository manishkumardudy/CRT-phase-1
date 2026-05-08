#include<iostream>
using namespace std;
class atm{
    private:
    int balance;
    
    public:
    atm(int balance){
        this->balance=balance;
    }
    void withral(int amount){
        if (amount>balance){
            cout<<"insufficient balance"<<endl;

        }
        else{
            balance-=amount;
            cout<<"avlabial balance"<<amount<<endl;

        }

    }
    void showbalance(){
        cout<<"your balance"<<balance<<endl;
    }
};
int main() {
    atm a(5000);

    a.showbalance();
    a.withral(500);
    a.showbalance();

    return 0;

}