//this algo used here is seive of eratosthnes which is best for finding all prime numbers within a range
//Time complexity of below code is O(log(log n))
#include<iostream>
#include<cstring> // library used for memset function, which is used to set all values of array with specific values
using namespace std;
void findAllPrimeNumber(int num){
    bool prime[num+1];
    memset(prime,true,sizeof(prime));
    for(int i=2;i*i<=num;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=num;j+=i)
                prime[j]=false;
        }
    }
    cout<<"Prime Number upto "<<num<<" is: ";
    for(int i=2;i<sizeof(prime);i++){
        if(prime[i]==true)
            cout<<i<<" ";
    }
}
int main(){
    int t=0;cout<<"enter the test case: ";
    cin>>t;
    while (t-->0)
    {
        int num=0;cout<<"enter the number: ";
        cin>>num;
        findAllPrimeNumber(num);
        cout<<endl;
    }
    return 0;
}