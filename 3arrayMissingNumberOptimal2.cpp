#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n-1;i++){
        xor1=xor1^(i+1);
        xor2=xor2^arr[i];
    }
    xor1=xor1^n;
    int missing_no=xor1^xor2;
    cout<<"the missing no. is "<<missing_no;
    return 0;
}