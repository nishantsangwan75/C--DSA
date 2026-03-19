#include<iostream>
using namespace std;
void selectionSort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        int minimum = i;
        for(int j=i;j<=n-1;j++){
            if(arr[minimum]>arr[j]) minimum=j;
        }
        int temporary=arr[i];
        arr[i]=arr[minimum];
        arr[minimum]=temporary;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}