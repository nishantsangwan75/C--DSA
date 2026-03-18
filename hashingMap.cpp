#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int> m1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m1[arr[i]]=m1[arr[i]]+1;
    }
    int queries;
    cin>>queries;
    while(queries--){
        int q;
        cin>>q;
        cout<<m1[q]<<endl;;
    }
    //we can also iterate in the map
    for(auto it:m1) {
        cout<<it.first<<"=>"<<it.second<<endl;
    }
    return 0;
}