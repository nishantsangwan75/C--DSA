#include<iostream>
using namespace std;
void printt(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";          //printing row no. like
        }                          //   1
        cout<<endl;                //   22
    }                              //   33
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