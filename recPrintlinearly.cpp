#include<iostream>
using namespace std;
void printt(int n,int i=1){
    if(i>n) return;
    cout<<i<<endl;
    printt(n,i+1);
}
int main(){
    int n,i;
    cin>>n;
    printt(n,i);
    return 0;
}