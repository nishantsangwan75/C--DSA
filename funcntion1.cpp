// #include<iostream>
// using namespace std;
// void printname(string name){
//     cout<<"Hey "<< name <<" !!";
// }
// int main(){
//     string name;
//     cin>>name;
//     printname(name);
//     return 0;
// }

#include<iostream>
using namespace std;
void printname(string name){  // void function doesn't return anything.
    cout<<"Yo! "<<name<<"\n"; // like in sum function the output can be returned to the main body
}                             // here instead the output is printed using cout
int main(){
    string name,name2;
    cin>>name;
    printname(name);
    cin>>name2;
    printname(name2);
    return 0;
}