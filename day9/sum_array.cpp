#include<iostream>
using namespace std;
class Suum{
    public:

    int sumofarray(int num[],int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=num[i];
        }
        return sum;

    }
};
int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    Suum s1; 
    int ans = s1.sumofarray(arr,size);
    cout<<ans<<endl;
    return 0;

}