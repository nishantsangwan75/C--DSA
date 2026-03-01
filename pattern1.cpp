#include<iostream>
using namespace std;
void printt(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){   // t is no. of test cases like if we have to make 2 pattern
    int n;                   // with 3 as input and 4 as input so we'll enter 
    cin>>n;                  // 2 3 4 so it'll take  2 patterns of 3 as input and 4 as input.
    printt(n);
    }
    return 0;
}