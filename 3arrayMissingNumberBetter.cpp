#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    vector<int> hash(n+1,0);
    for(int i=0;i<n;i++){
        hash[arr[i]]=1;
    }
    int missing_no;
    for(int i=1;i<n+1;i++){
        if(hash[i]==0){
            missing_no=i;
        }
    }
    cout<<"the missing no. is "<<missing_no;
    return 0;
}