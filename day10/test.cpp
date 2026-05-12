#include<iostream>
#include<string>
#include<cctype>

using namespace std;

class Solution {
public:

    bool isPalindrome(string s) {

        string temp = "";

        // Step 1: remove special characters and make lowercase
        for(int i = 0; i < s.length(); i++) {

            if(isalnum(s[i])) {

                temp += tolower(s[i]);
            }
        }

        // Step 2: check palindrome
        int start = 0;
        int end = temp.length() - 1;

        while(start < end) {

            if(temp[start] != temp[end]) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};
int main(){
    Solution s1;
    string j="hello dear";
    bool ans= s1. isPalindrome(j);
    if(ans){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    
    return 0;

}