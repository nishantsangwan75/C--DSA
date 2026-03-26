#include<iostream>
using namespace std;
vector<int> deleteDupes(vector<int> arr){
    for(int i=1;i<arr.size();i++){
        if(arr[i]==arr[i-1]){
            arr.erase(arr.begin()+i);
        }
    }
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr=deleteDupes(arr);
    cout<<"There are "<<arr.size()<<" unique elements."<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}