// #include<iostream>
// using namespace std;
// int a=0;
// void palindrome(string s,int i,int n){
//     if(i>=(n+1)/2) a=1;
//     if(s[i]==s[n]) palindrome(s,i+1,n-1);
//     else return ;
// }
// int main(){
//     int i=0;
//     int l;
//     string s;
//     cin>>s;
//     l=s.length();
//     palindrome(s,i=0,l-1); 
//     if(a=0) cout<<"not palindrome";
//     else cout<<"palindrome";
//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;
void palindrome(string &s,int i,int n){
    if(i>=n) return; // as n is decreasing and i is increasing 
    swap(s[i],s[n]);
    palindrome(s,i+1,n-1);
}
int main(){
    int i=0;
    int l;
    string s,q;
    cin>>s;
    q=s;
    l=s.length();
    palindrome(s,0,l-1); 
    if(q==s){cout<<"palindrome";}
    else{cout<<"not palindrome";}
    return 0;
}