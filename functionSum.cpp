// #include<iostream>
// using namespace std;
// int sum(int n1,int n2){
//     int s=n1+n2;
//     return s;
// }
// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     int finalSum = sum(n1,n2);
//     cout<<finalSum;
//     return 0;
// }




// void function doesn't return anything.
// like in int sum function the output can be returned to the main body
//in int sum we have to store the returned value and then print it 
// whereas in void sum we directly call the void sum function
// and it returns nothing here instead the output is printed using cout




#include<iostream>
using namespace std;
void sum(int n1, int n2){
    cout<<n1+n2;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    sum(n1,n2);
    return 0;
}

