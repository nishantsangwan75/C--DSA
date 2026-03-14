#include<iostream>
using namespace std;
void factorial(int i,int fact){
    if(i==1){
        cout<<fact;
        return;
    }
    factorial(i-1,i*fact);
}
int main(){
    int i,n;
    cin>>n;
    factorial(n,1);
    return 0;
}