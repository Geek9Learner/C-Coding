//Basically in this program we are counting the number of 5 in the factorial of the given number.
//Also we know that only 2 and 5 multiplication help in getting trailing zeroes in a factorial.
 
int findTrailingZeroes(int num){
    int numOfZeroes=0;
    for(int i=5;i<=num;i=i*5){
        numOfZeroes += num/i;
    }
    return numOfZeroes;
}
#include<iostream>
using namespace std;
int main(){
    int testcase=0;
    cout<<"enter the test case: ";
    cin>>testcase;
    while (testcase-->0)
    {
        int num=0;
        cout<<"enter the number: ";
        cin>>num;
        int numberofTrailingZeroes=findTrailingZeroes(num);
        cout<<"Number of trailing zeroes in factorial of "<<num<<" is "<<numberofTrailingZeroes<<endl;
    }
    return 0;
}