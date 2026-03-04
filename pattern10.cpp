#include<iostream>
using namespace std;
// void printt(int n){
//     for(int i=1;i<=2*n-1;i++){
//         if(i<=n){
//             for(int j=1;j<=i;j++){
//             cout<<"* ";
//             }
//         }
//         else{
//             for(int j=1;j<=2*n-i;j++){
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//    }
// }

// both mehthod are correct lower uses a newer variable whereas the above one uses if else condtions.

void printt(int n){
    for(int i=1;i<=2*n-1;i++){
        int no_stars = i;
        if(i>n) no_stars= 2*n-i;
        for(int j=1;j<=no_stars;j++){
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