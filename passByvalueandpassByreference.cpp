// #include<iostream>
// using namespace std;
// void DingDong(int n1){
//    cout<<n1<<endl;
//    n1++;
//    cout<<n1<<endl;
//    n1++;
//    cout<<n1<<endl;
// }
// int main(){
//     int n1= 1;
//     DingDong(n1);
//     cout<<n1<<endl;
//     return 0;
// }

// the output will be 1 2 3 1  why no  three was repeated because a
// a copy of the integer defined in main body n1 was sent to the called
// function not the original n1 so the function kept on print and updating 
// copy of n1 whereas the original n1 was intact after the funcn was completed
// line 13 was executed and original n1 stored in main body was printed

// #include<iostream>
// using namespace std;
// void dingg(string s){
//     s[0]='D';
//     cout<<s<< endl;
// }
// int main(){
//     string s= "Ooggy";
//     dingg(s);
//     cout<<s;
//     return 0;
// }

// here value is (passed by). it means the value given to funcn is copy
// and changes are being made on the copy not the original value of the 
// string s. 
// if we want to change the original value s we'll have to add a & before 
// s in the funcn that is being calles like dingg(string &s)
// as I have written below

#include<iostream>
using namespace std;
void dingg(string &s){
    s[0]='D';
    cout<<s<< endl;
}
int main(){
    string s= "Ooggy";
    dingg(s);
    cout<<s;
    return 0;
}

// now the original value is being changes so the output came the same.
// this way it can be pass by value or pass by refernce.