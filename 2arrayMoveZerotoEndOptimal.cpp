#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int i=0,j=0;
    // while(j<n){
    //     if(arr[j]!=0){
    //         arr[i]=arr[j];
    //         i++;
    //     }
    //     j++;
    // }
    // for(int index=i;index<n;index++){
    //     arr[index]=0;
    // }

    //the above method is completely right and has the same time complexity O(N).
    int i=-1;
    for(int j=0;j<n;j++){
        if(arr[j]==0){
            i=j;
            break;
        }
    }
    for(int j=i+1;j<n;j++){
        if(arr[j]!=0){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            i++; 
        }
    }
    for(int index=0;index<n;index++){
        cout<<arr[index]<<endl;
    }
    return 0;
}