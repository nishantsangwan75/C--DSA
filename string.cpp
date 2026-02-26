#include<iostream>
using namespace std;
int main(){
    string s="Boxer"; // string and array are 0 base index so 0 for B and 4 for r
    int a,l = s.size();
    cout<< "length is " << l <<"\n";
    cin>>a;
    if(a<=l){cout<<s[a-1];} // here i gave input - 1 so 1 for B and 5 for r
    else{cout<<"invalid";}
    return 0;
}

// string s = " nfwdehnoiw" aise likhte h 
// or char ch = 'w' aise likhte h 
// string define krke s[4] = 'a' aise likha jayega jb index 4 pe a krna ho to ... 
// yha "a" use nhi krna h