#include<iostream>
using namespace std;
int main(){
    int n;
    int last_digit,sum=0;
    cin>>n;
    while(n>0){
        last_digit=n%10;
        n=n/10;
        sum=sum*10+last_digit;
    }
    cout<<sum;
    return 0;
}