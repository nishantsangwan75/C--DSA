#include<iostream>
using namespace std;
void SumN(int i,int sum){
    if(i<0){
        cout<<sum;
        return;
    }
    SumN(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    SumN(n,0);
    return 0;
}