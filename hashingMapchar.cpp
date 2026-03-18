#include<iostream>
#include<map>                    // we can also use unordered_map in general as 
                                 // it has better avg and best case time complexity 
                                 // but in worst case map has better (
                                 // map has same in all the cases ie log(N) 
                                 //where n is the no. of elements in map
                                 //in map any data type can be a key 
                                 //but in unordered map only single data structures can be pairs can't
using namespace std;
int main(){
    string s;
    cin>>s;
    char arr[s.size()];
    map<char,int> m1;            // we can also use unordered_map
    for(int i=0;i<s.size();i++){
        arr[i]=s[i];
        m1[arr[i]]=m1[arr[i]]+1;
    }
    int queries;
    cin>>queries;
    while(queries--){
        char q;
        cin>>q;
        cout<<m1[q]<<endl;;
    }
    //we can also iterate in the map
    for(auto it:m1) {
        cout<<it.first<<"=>"<<it.second<<endl;
    }
    return 0;
}