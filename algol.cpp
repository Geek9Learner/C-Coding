#include<iostream>
using namespace std;
void r(int k,int j){
  k=k+1;
  j=j+2;
  cout<<j<<" "<<k<<endl;      
}
int main(){
    int m=10;
    int n=5;
    r(m,n);
    cout<<m<<" "<<n<<endl;
    return 0;
}