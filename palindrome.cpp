#include<iostream>
using namespace std;
int main(){
    int n,n2;
    cin>>n;
    n2=n;
    int revNo=0,lastdigit;
    while(n>0){
        lastdigit = n%10;
        n=n/10;
        revNo = revNo*10 + lastdigit;
    }
    if(revNo==n2) cout<<"true";
    else cout<<"false";
    return 0;
}