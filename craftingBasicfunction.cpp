// #include<iostream>
// using namespace std;
// int maxx(int n1,int n2){
//     if(n1>=n2) return n1;
//     else return n2;
// }
// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     int maximum= maxx(n1,n2);    
//     cout<<maximum;
//     return 0;
// }

// there cant be repetition of funcn names so give a unique name that doesn't match with the funcn.

#include<iostream>
using namespace std;
int minn(int n1,int n2){
    if(n1<=n2) return n1;
    else return n2;
}
int main(){
    int n1,n2,minimum;
    cin>>n1>>n2;
    minimum= minn(n1,n2);
    cout<< minimum;
    return 0;
}