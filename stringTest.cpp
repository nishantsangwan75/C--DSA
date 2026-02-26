#include<iostream>
using namespace std;
int main(){
    string sg= "inspector chingam";
    int length=sg.size();
    sg[length-7]='a'; // here '' this will be used not "" this.
    cout<< sg[length-7];
    return 0;
}