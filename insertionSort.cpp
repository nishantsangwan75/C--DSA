#include<iostream>
using namespace std;
// void bubbleSort(int n,int arr[]){
//         for(int j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int a;
//                 a=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=a;
//                 j=0;
//             }
//         }
// }


// the above one has poor time complexity


void bubbleSort(int n,int arr[]){
        for(int i=0;i<=n-1;i++){ //to do iteration till 0 to n-1th index
            int j=i;
             while(j!=0 && arr[j]<arr[j-1]){
                int a;
                a=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=a;
                j--;
                }
        }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}