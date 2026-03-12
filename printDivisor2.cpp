#include<iostream>
using namespace std;
void printDivisor(int n){
    vector<int> v;
    // if n = 100 10*10=100  11*11!=100 
    for(int i=1;i*i<=n;i++){ 
        if(n%i==0){
            v.push_back(i);
            if((n/i)!=i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for( auto it:v) cout<<it<<" ";
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        printDivisor(n);
    }
    return 0;
}