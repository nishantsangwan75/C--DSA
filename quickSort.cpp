#include<iostream>
using namespace std;
int partition_index(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>=pivot && j>low){
            j--;
        }
        if(i<j){
            int temp = arr[i];
             arr[i]=arr[j];
            arr[j]=temp;
        }  
    }   
    int temp = arr[j];
    arr[j] = arr[low];
    arr[low] = temp;
    return j;
}
void quickSort(vector<int> &arr,int low,int high){
    if(low<high){
        int partitionIndex = partition_index(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
return 0;
}