#include<iostream>
using namespace std;
void swap_arry(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

}
int selection_sort(int num[],int n){
    for (int i=0;i<n;i++){
        int mini =i;
        bool swapeed = false;
        for (int j=i+1;j<n;j++){
             if(num[mini]>num[j]){
                 mini = j;

             }
            

        }
        if(mini !=i){
        swap_arry(num [i] , num[mini]);
        swapeed = true;
        }
        if(!swapeed){
            cout << "Araray is already Sorted" << endl;
            break; /* code */
            
        }
        
        


    }
}
int main(){
    int array_y[5] = {1,2,4,3,5};
    int size = sizeof(array_y)/sizeof(array_y[0]);
    selection_sort(array_y,size);
    for (int i=0;i<size;i++){
        cout << array_y[i] << " ";
    }

    cout<<endl;


}