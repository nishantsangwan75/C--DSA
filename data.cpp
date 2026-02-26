#include <iostream>
using namespace std;
int main(){
    string s,t;
    getline(cin,s); // instead we can write cin >> s >> t;
    cout<< s;       // cout << s <<" " << t; then only first 2 words of the sentence will be printed
    return 0;
}