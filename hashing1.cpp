#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //making hash array (pre computation)
    int hash[14]={0};     // to make all the elements 0 inside the array 
    for(int i=0;i<n;i++){
        hash[arr[i]]=hash[arr[i]] + 1;
    }
    int no_of_queries;
    cin>>no_of_queries;
    while(no_of_queries--){ // while(q--) means run it till q>0 and do q=q-1 after each iteration
        int q;
        cin>>q;
        cout<<hash[q]<<endl;
    }
    return 0;
}