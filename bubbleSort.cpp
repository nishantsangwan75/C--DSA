#include<iostream>
using namespace std;
void bubbleSort(int n,int arr[]){
    int count=0;
    for(int i=n-1;i>=1;i--){
        bool swapped=false;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int a;
                a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
                swapped=true;
            }
        }
        if(swapped==false) break;
        count++;
    }
    cout<<"loop ran "<<count<<" times"<<endl; 
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