#include<iostream>
#include<algorithm>
using namespace std;
void reverse(int arr[],int i,int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse(arr,i+1,n);
}
int main(){
    int n;
    int i=0;
    cin>>n;
    int arr[n];
    for(int q=0;q<n;q++) cin>>arr[q];
    reverse(arr,i,n);
    for(int q=0;q<n;q++) cout<<arr[q]<<" ";
    return 0;
}