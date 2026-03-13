#include<iostream>
using namespace std;
void printt(int n){
    if(n==0) return;
    cout<<n<<endl;
    printt(n-1);
}
int main(){
    int n;
    cin>>n;
    printt(n);
    return 0;
}