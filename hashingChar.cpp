#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char arr[s.length()];
    for(int i=0;i<s.length();i++){
        arr[i]=s[i];
    }
    //making hash array (pre computation)
    int hash[256]={0};     // to make all the elements 0 inside the array of size 256
                           // as ASCII has 256 possible character values from 0 to 255
    for(int i=0;i<s.length();i++){
        hash[arr[i]]=hash[arr[i]] + 1; // or we can make array of size 26 and subtract 'a' from arr[i] and q
        //hash[] above is int array so it will go to ascii value of charracter returned by arr[i]                                         
    }
    int no_of_queries;
    cin>>no_of_queries;
    while(no_of_queries--){ // while(q--) means run it till q>0 and do q=q-1 after each iteration
        char q;
        cin>>q;
        cout<<hash[q]<<endl;
    }
    return 0;
}