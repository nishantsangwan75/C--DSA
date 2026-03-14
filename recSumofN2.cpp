#include<iostream>
using namespace std;
int SumN(int i){
    if(i==0){
        return 0;
    }
    return (i+SumN(i-1));
}
int main(){
    int n;
    cin>>n;
    cout<<SumN(n);
    return 0;
}