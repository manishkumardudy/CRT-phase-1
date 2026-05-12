#include<iostream>
#include<string>
using namespace std;
int liner_search(int nums[], int n, int target){
    for (int i =0; i<n;i++){
        if(nums[i]==target){
            cout<<"target is found";
        }
        
        else{
            cout<<"target not found";
        }

    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans=liner_search(arr,size,3);
    cout<<"element found"<<ans;
    return 0;

}