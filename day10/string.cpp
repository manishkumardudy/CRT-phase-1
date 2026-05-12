#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1="hello";
    string s2="aayush";
    cout<<s1<<" "<<s2<<endl;
    int n =s1.length();
    cout<<"lenth is "<<n<<endl;
    //append
    cout<<"appned is "<<s1.append("student")<<endl;
    //empty
    cout<<"empty"<<s2.empty()<<endl;
    cout<<s2<<endl;
    //concet
    cout<<s1+"bacha"<<endl;
    cout<<s1<<endl;
    //push_back
    s1.push_back('t');
    cout<<"puh_bvak"<<s1<<endl;
    //pop_bcak
    s1.pop_back();
    cout<<"pop"<<s1<<endl;
    //fint
    int index=s1.find("hello");
    cout<<"found"<<index<<endl;
    //swap
    s1.swap(s2);
    cout<<"swap"<<s1<<"/"<<s2<<endl;
    //substr

    cout<<"substr"<<s2.substr(5,6)<<endl;
    //getline
    string j;
    cin>>j;
    getline(cin,j);
    cout<<"your string"<<j<<endl;
}



