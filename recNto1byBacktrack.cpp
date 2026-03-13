#include<iostream>
using namespace std;
void printt(int n, int i){
    if(i>n) return;
    printt(n,i+1);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    int i=1;
    printt(n,i);
    return 0;      
}