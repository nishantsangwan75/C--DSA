#include<iostream>
using namespace std;
void printt(int n){
    char chr='A'+n-1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<chr;
            chr++;
        }
        cout<<endl;
        chr=chr-(i+1);
   }

//we can also integrate char into the loop as below!! ;) 

//     for(int i=1;i<=n;i++){
//         for(char chr='A'+n-i;chr<='A'+n-1;chr++){
//             cout<<chr;
//         }
//         cout<<endl;
//    }


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