//Complexity of this code is Ɵ(sqrt(n)/6). concept behind to stop each time division from 2,3 and its multiple
#include<iostream>
using namespace std;
bool isPrime(int num){
    if(num==1 || num==0)
        return false;
    if(num==2 || num==3)
        return true;
    if(num%2==0 || num%3==0)
        return false;
    for(int i=5;i*i<=num;i+=6){
        if(num%i==0 || num%(i+2)==0)
            return false;
    }
    return true;
}
int main(){
    int t=0;cout<<"Enter the test case: ";cin>>t;
    while(t-->0){
        int num=0;cout<<"Enter the number: ";cin>>num;
        if(isPrime(num))
            cout<<num<<" is Prime"<<endl;
        else
            cout<<num<<" is not Prime"<<endl;
    }
    return 0;
}