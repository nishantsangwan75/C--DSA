#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    for(int i=0;i<n;i++){
        int count=0;
        num=arr[i];
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]) count++;;
        }
        if(count==1) break;
    }
    cout<<num;
    return 0;
}