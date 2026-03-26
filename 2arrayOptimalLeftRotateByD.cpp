#include<iostream>
#include<set>
using namespace std;
void reverse(int arr[],int start,int end){ 
  while(start<=end){
    int temp =arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
  }
} //it has slightly higher time complexity but has less space complexity
  //as no new array is being used.
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}