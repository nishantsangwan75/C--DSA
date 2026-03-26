#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest = arr[0];
    int second_largest = INT_MIN;
    int smallest = arr[0];
    int second_smallest = INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest; // very important line as it updates the second largest to the previous largest
            largest = arr[i];
        }
        else if(arr[i]>second_largest&&arr[i]!=largest){
            second_largest=arr[i];
        }
        if(arr[i]<smallest){
            second_smallest = smallest;
            smallest=arr[i];
        }
        else if(arr[i]<second_smallest&&arr[i]!=smallest){
            second_smallest=arr[i];
        }
    }
    cout<<"second largest no. is "<<second_largest<<endl;
    cout<<"second smallest no. is "<<second_smallest;
    return 0;
}