#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1) return n;
    int last_no = fib(n-1);
    int second_last_no = fib(n-2);
    return last_no + second_last_no;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}