#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int sum_real=(n*(n+1))/2;
    int sum_observed=0;
    for(int i=0;i<n-1;i++){
        sum_observed=sum_observed+arr[i];
    }
    int missing_no=sum_real-sum_observed;
    cout<<"the missing no. is "<<missing_no;
    return 0;
}