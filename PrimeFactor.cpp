#include<iostream>
using namespace std;
void findPrimeFactor(int num){
    if(num==1)
        return;
    cout<<"Prime factor("<<num<<")= ";
    for(int i=2;i*i<=num;i++){
        while(num%i==0){
            num=num/i;
            cout<<i<<" ";
        }
    }
    if(num>1)
        cout<<num;
}
int main(){
    int t=0;
    cout<<"enter the test case: ";
    cin>>t;
    while(t-->0){
        int num=0;cout<<"enter the number: ";cin>>num;
        findPrimeFactor(num);
        cout<<endl;
    }
    return 0;
}