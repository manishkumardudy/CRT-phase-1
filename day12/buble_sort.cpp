#include<iostream>
using namespace std;
void swap_arry(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

}
int bubble_sort(int num[],int n){
    for (int i=0;i<n;i++){
        bool flag= false;
        for (int j=0;j<n-(i-1);j++){
            if (num[j]>num[j+1]){
                swap_arry(num [j] , num[j+1]);
                flag=true;

            }

        }
        if (!flag)
        {
          cout << "Array is already Sorted" << endl;
            break; /* code */
        }
        


    }
}
int main(){
    int array_y[5] = {1,2,4,3,5};
    int size = sizeof(array_y)/sizeof(array_y[0]);
    bubble_sort(array_y,size);
    for (int i=0;i<size;i++){
        cout << array_y[i] << " ";
    }

    cout<<endl;


}