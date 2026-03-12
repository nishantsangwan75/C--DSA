#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        n=n/10;
        cout<<lastdigit;
    }
    return 0;
}