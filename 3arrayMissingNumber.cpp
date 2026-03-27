#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int missing_no;
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            missing_no=i;
            break;
        }
    }
    cout<<"the missing no. is "<<missing_no;
    return 0;
}