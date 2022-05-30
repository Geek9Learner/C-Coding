/*
Requirement: Given a sorted increasing vector and we need to return the sorted square of vector in O(n) complexity.

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
*/

//Approach: two pointer algorithms
#include<bits/stdc++.h>
using namespace std;
vector<int> squareSort(vector<int>& nums){
    vector<int> negative,positive;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<=0){
            negative.push_back(nums[i] * nums[i]);
        }
        else{
            positive.push_back(nums[i] * nums[i]);
        }
    }

    reverse(negative.begin(),negative.end());

//merging positive and negative vector
    int i=0,j=0,k=0;
    while(i<negative.size() && j<positive.size()){
        if(negative[i]<positive[j]){
            nums[k]=negative[i];
            k=k+1;i=i+1;
            
        }
        else{
            nums[k]=positive[j];
            k=k+1;j=j+1;
        }

    }
    while(i<negative.size()){
        nums[k]=negative[i];
        k=k+1;i=i+1;
    }

    while (j<positive.size()){
        nums[k]=positive[j];
        k=k+1;j=j+1;
    }
    
    return nums;
}
int main(){
    vector<int>vect {-4,-1,0,3,10};
    vector<int> result=squareSort(vect);
  //  cout<<endl;
    for(int i=0;i<result.size();i++)
        cout<<result[i]<<" ";
    return 0;
}
