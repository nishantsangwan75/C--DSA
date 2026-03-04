#include<iostream>
using namespace std;
// void printt(int n){
//     for(int i=1;i<=n;i++){
//         char chr = 'A';
//         for(int j=0;j<n-i+1;j++){
//             cout<<chr<<" ";
//             chr++;
//         }
//         cout<<endl;
//    }
// }

void printt(int n){
    for(int i=1;i<=n;i++){
        for(char chr='A';chr<='A'+n-i;chr++){
            cout<<chr<<" ";
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