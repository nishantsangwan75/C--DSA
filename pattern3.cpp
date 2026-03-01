#include<iostream>
using namespace std;
void printt(int n){
    for(int i=0;i<n;i++){
        int a=1;
        for(int j=0;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        printt(n);
    }
    return 0;
}