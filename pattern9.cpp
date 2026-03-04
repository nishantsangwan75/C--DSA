#include<iostream>
using namespace std;
// sometimes merging patterns is easier to make a pattern instead of thinking how do we make it 

void printt7(int n){
    for(int i=0;i<n;i++){
        //space formula is no. of space = n-i-1
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star formula is no. of star = 2i+1
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void printt8(int n){
    for(int i=0;i<n;i++){
        //space formula is no. of space = i
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star formula is no. of star = 2n-2i-1
        for(int j=0;j<2*n-2*i-1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        printt7(n);
        printt8(n);
    }
    return 0;
}