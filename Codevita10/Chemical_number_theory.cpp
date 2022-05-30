#include<bits/stdc++.h>
using namespace std;
int findAffinity(unordered_map<char,int>& ele_pair,vector<string>& element){
    //Making Reactivity list of element
    unordered_map<string,int>reactivity;
    for(int i=0;i<(int)element.size();i++){
        string temp=element[i];
        if(temp.length()==1){
            auto it=ele_pair.find(temp[0]);
            reactivity[temp]=it->second;
        }
        else{
            auto it1=ele_pair.find(temp[0]);
            int v1=it1->second;
            auto it2=ele_pair.find(temp[1]);
            int v2=it2->second;
            reactivity[temp]=((v2+1)*v1)+v2;
        }
    }
    //finding affinity of element
    vector<int>affinity;
    for(int i=0;i<(int)element.size();i++){
        string temp=element[i];
        auto t1=reactivity.find(temp);
        int r1=t1->second;
        for(int j=i+1;j<(int)element.size();j++){
            auto t2=reactivity.find(element[j]);
            int r2=t2->second;
            affinity.push_back(__gcd(r1,r2));
        }
    }
    int res=0;
    for(int i=0;i<(int)affinity.size();i++){
        if(res<affinity[i])
            res=affinity[i];
    }
   return res;
}
int main(){
    string input="";bool inn=true;vector<string>element;//={"Tc","S","Be","Li","Er","In","Dy","As","I","Ac"};
    while(inn){
        cin>>input;
        if(input!="")
            element.push_back(input);
        else
            break;
        input="";
    }
    //making pair for all combination
    unordered_map<char,int>ele_pair;
    //for 0 to 9
    char n='0';
    for(int i=0;i<10;i++){
        ele_pair[n]=i;
        n=char(int(n)+1);
    }
    //for A to Z
    char c='A';
    for(int j=10;j<36;j++){
        ele_pair[c]=j;
        c=char(int(c)+1);
    }
    //for a to z
    int s='a';
    for(int k=36;k<62;k++){
        ele_pair[s]=k;
        s=char(int(s)+1);
    }
    int result=findAffinity(ele_pair,element);
    cout<<result;
    return 0;
}