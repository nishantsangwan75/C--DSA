#include<iostream>
using namespace std;
void printt(int n){
    char chr='A';
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<chr;
        }
        chr++;
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