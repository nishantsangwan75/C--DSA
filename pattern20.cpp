#include<iostream>
using namespace std;
void printt(int n){
    for(int i=1;i<n;i++){
        //star
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        //star
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
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