#include<iostream>
using namespace std;
class area{
    public:
    int  lenth;
    int width;

    area(){
        lenth=0;
        width=0;
    }

    area(int l , int width){
       lenth=l;
       this->width=width;



    }
    area(int s){
        lenth=s;
        width=s;

    }
    
    void show(){
        cout<<"rectangle:"<<lenth*width<<endl;
       

    }
};
int main(){
    area a1;
    a1.show();
    area a2(5,10);
    a2.show();
    area a3(7);
    a3.show();
    return 0;

}
