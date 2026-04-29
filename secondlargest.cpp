#include<iostream>
#include<algorithm>
using namespace std;
// int secondLargest(int n,int arr[]){
//     sort(arr, arr + n);
//     int largest = arr[n-1];
//     for(int i=n-1;0<i;i--){
//         if(arr[i]!=largest){
//             return arr[i];
//         }
//     }
//     return -1;
// }

// int secondLargest(int n,int arr[]){
//     int largest=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     int sLargest=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>sLargest && arr[i]!=largest){
//             sLargest = arr[i];
//         }
//     }
//     return sLargest;
// }

// int secondLargest(int n,int arr[]){
//     int Largest=arr[0],sLargest=-1;
//     for(int i=1;i<n;i++){
//         if(arr[i]>Largest){
//             sLargest=Largest; Largest=arr[i];
//         }
//         if(arr[i]>sLargest && arr[i]<Largest){
//             sLargest=arr[i];
//         }
//     }
//     return sLargest;
// }
// int secondSmallest(int n,int arr[]){
//     int Smallest=arr[0],sSmallest=INT_MAX;
//     for(int i=1;i<n;i++){
//         if(arr[i]<Smallest){
//             sSmallest=Smallest; 
//             Smallest=arr[i];
//         }
//         if(arr[i]<sSmallest && arr[i]>Smallest){
//             sSmallest=arr[i];
//         }
//     }
//     return sSmallest;
// }

bool CheckSorted(int n,int arr[]){
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<CheckSorted(n,arr);
    return 0;
} 