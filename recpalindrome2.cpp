#include<iostream>
using namespace std;
bool palindrome(int i,string s,int l){
    if(i>=l/2) return true;
    if(s[i]!=s[l-i-1]) return false;
    return palindrome(i+1,s,l); // why this return ? cuz it's bool funcn so the value of 
                                // next called funcn is returned to the previous one 
                                //and the last value is returned to the main.
}
int main(){
    string s;
    cin>>s;
    int l;
    l=s.length();
    cout<<palindrome(0,s,l);
    return 0;
}