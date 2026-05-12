#include<iostream>
#include<string>

using namespace std;

class Solution{
public:

    void reversestring(string num[], int n){

        int i = 0;
        int j = n - 1;

        while(i < j){

            string temp = num[i];
            num[i] = num[j];
            num[j] = temp;

            i++;
            j--;
        }

        for(int i=0; i<n; i++){
            cout << num[i] << " ";
        }
    }
};

int main(){

    Solution s1;

    string s[5] = {"h","e","l","l","o"};

    int size = sizeof(s)/sizeof(s[0]);

    s1.reversestring(s, size);

    return 0;
}