#include<iostream>
using namespace std;
int i=0;
void printName(string name,int n){
    if(i==n) return;
    cout<<name<<endl;
    i++;
    printName(name,n);
}

//both are same

// void printName(int i ,string name,int n){
//     if(i==n) return;
//     cout<<name<<endl;
//     printName(i+1,name,n);
// }

int main(){
    string name;
    cin>> name;
    int n;
    cin>>n;
    printName(name,n); // if using 2nd function make it i,name,n
    return 0;
}