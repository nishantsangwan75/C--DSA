#include<iostream>
using namespace std;
void printt(int n){
    int start;
    for(int i=1;i<=n;i++){
        if(i%2==0) start = 0;
        else start = 1;
        for(int j=1;j<=i;j++){
            cout<<start<<" ";
            start=1-start;     // it'll flip 0 to 1 and 1 to 0;
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