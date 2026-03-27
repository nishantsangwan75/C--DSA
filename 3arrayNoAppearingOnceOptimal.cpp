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
    int num=-1,xor1=0;
    for(int i=0;i<n;i++){
        xor1=xor1^arr[i]; // xor with itself is zero and xor of 0 with any number is that number.
    }
    num=xor1;
    cout<<num;
    return 0;
}