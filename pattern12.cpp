#include<iostream>
using namespace std;
// void printt(int n){
//     for(int i=1;i<=n;i++){
//         //no.
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         //space  2*(n-i)
//         for(int j=1;j<=2*(n-i);j++){
//             cout<<" ";
//         }
//         //no.
//         for(int j=i;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//    }
// }

// the above one uses formula for space whereas the one below uses space-2 after every iteration of i

void printt(int n){
    int space =2*(n-1);
    for(int i=1;i<=n;i++){
        //no.
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space  2*(n-i)
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //no.
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
        space=space-2;
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