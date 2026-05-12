#include<iostream>
#include<string>
using namespace std;
int binarysea(int nums[], int n,int target){
    int left=0;
    int right=n-1;
    while(left<=right){
     int mid= left+(right-left)/2;
     if (nums[mid]==target){
                return mid;}
     else if(nums[mid]<target){
        left=mid+1;
        

     }  
     else {
        right=mid-1;
        
      }     
     
      
    }
    return -1;

}
int main(){
     int arr[9]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans=binarysea(arr,size,2);
    cout<<"element found"<<ans;
    return 0;

}