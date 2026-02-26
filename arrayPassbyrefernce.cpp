#include<iostream>
using namespace std;
void ar(int arr[],int n){
    arr[0]+=1;
    cout<<"Value by funcn for 0 index is: "<<arr[0]<< endl;
}
int main(){
    int n=7;
    int arr[n];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    ar(arr,n);
    cout<<"Value by main for 0 index is: "<<arr[0]<< endl;
    return 0;
}

// if the input is 1 2 3 4 5 6 7 is used as input then the output will be
// 2 2 as array always pass by reference by default they dont need & like others.