#include<iostream>
using namespace std;
void printt(int n){
    if(n<1) return;
    printt(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    printt(n);
    return 0;
}