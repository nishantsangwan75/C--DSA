#include<iostream>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    vector<int> arr1(n1);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    vector<int> arr2(n2);
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    vector<int>arr_union;
    int i=0,j=0;
    while(i<n1&&j<n2){
        if(arr2[j]>=arr1[i]){
            if(arr_union.empty()||arr1[i]!=arr_union.back()){ //we can also use the condition union_arr.size()==0 instead of .empty()
                arr_union.push_back(arr1[i]);
            }
            i++;
        }
        else {
            if(arr_union.empty()||arr2[j]!=arr_union.back()){
                arr_union.push_back(arr2[j]);
            }
            j++;
        }
    }
     while(i<n1){
            if(arr_union.empty()||arr1[i]!=arr_union.back()){
                arr_union.push_back(arr1[i]);
            }
            i++;
     }
     while(j<n2){
        if(arr_union.empty()||arr2[j]!=arr_union.back()){
                arr_union.push_back(arr2[j]);
            }
            j++;
    }
    for(int q=0;q<arr_union.size();q++){
        cout<<arr_union[q]<<endl;
    }
    return 0;
}