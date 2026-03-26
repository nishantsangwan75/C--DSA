#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int>set1;
    for(int i=0;i<n;i++){
        set1.insert(arr[i]);
    }
    int index=0;
    for(auto it:set1){
        arr[index]=it;
        index++;
    }
    for(int i=0;i<index;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}