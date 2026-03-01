#include<iostream>
using namespace std;
// void printt(int n){
//     for( int i=n;i>0;i--){
//         for(int j=i;j>0;j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// the above one is correct also if we want it to be formula based we can do this 

// void printt(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// if we start i form 1 instead 0 it should be like this

void printt(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"* ";
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