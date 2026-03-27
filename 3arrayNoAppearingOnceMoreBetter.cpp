#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<long long,int>m1;
    for(int i=0;i<n;i++){
        m1[arr[i]]++;
    }
    int num=-1;
    for(auto it:m1){
        if(it.second==1) num=it.first; break;
    }
    cout<<num;
    return 0;
}