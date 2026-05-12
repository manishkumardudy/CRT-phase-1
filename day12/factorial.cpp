#include <iostream>
using namespace std;
int fac(int num){
    if(num == 1)
       return 1;

    return num*fac(num-1);
      
   
}
int main(){
  int a;
  cin>>a;
  int n = fac(a);
  cout<<n<<endl;
  return 0;
}