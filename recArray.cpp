#include<iostream>
#include<algorithm>
using namespace std;

void reverse(int arr[],int a,int b){
    if(a>=b){

        // b+a=n is true 
        // for(int i=0;i<=b+a;i++){      
        // cout<<arr[i]<<" ";
        // }
        return;
    }
    swap(arr[a],arr[b]);
    reverse(arr,a+1,b-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    reverse(arr,0,n-1);

    // either use this cout or the above one
    for(int i=0;i<n;i++){ 
        cout<<arr[i]<<" ";
        }
    return 0;
}
