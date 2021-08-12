// second loop is used to print divisor in ascending orders. overall time complexity is Ɵ(sqrt(n))
#include<iostream>
using namespace std;
void findDivisior(int num){
    int i=0;
    cout<<"Divisiors of "<<num<<" is: ";
    for( i=1; i*i<=num; i++){
        if(num%i==0)
            cout<<i<<" ";
    }
    while(i>1){
        if(num%i==0 && i!=num/i)
            cout<<num/i<<" ";
        i--;
    }
}
int main(){
    int t=0;cout<<"enter the test case: ";
    cin>>t;
    while(t-->0){
        int num=0;cout<<"enter the number: ";
        cin>>num;
        findDivisior(num);
        cout<<endl;
    }
    return 0;
}