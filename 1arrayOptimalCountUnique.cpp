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
    int i=0,j=1;
    while(j<n){
            if(arr[j]!=arr[i]){
                arr[i+1]=arr[j];
                i++;
            }
            j++;
    }
    for(int index=0;index<=i;index++){
        cout<<arr[index]<<endl;
    }
    return 0;
}