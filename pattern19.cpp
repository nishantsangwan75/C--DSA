#include<iostream>
using namespace std;
void printt(int n){
    for(int i=0;i<2*n;i++){
       if(i<n){
         //star
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        //star
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
       }
       else{
        //star
        for(int j=0;j<=i-n;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<2*n-i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<=i-n;j++){
            cout<<"*";
        }
       }
       cout<<endl;
    }
}

// the above one prints 1 pattern step by step inside 1 main outer loop 
// with if condition in it whereas the below one uses 2 seperate for loops
// as outer loop and then merges them both.

// void printt(int n){
//     for(int i=0;i<n;i++){
//          //star
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         //space
//         for(int j=0;j<i;j++){
//             cout<<"  ";
//         }
//         //star
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//        cout<<endl;
//     }
//     for(int i=1;i<=n;i++){
//         //star
//         for(int j=0;j<i;j++){
//             cout<<"*";
//         }
//         //space
//         for(int j=0;j<n-i;j++){
//             cout<<"  ";
//         }
//         //star
//         for(int j=0;j<i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
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