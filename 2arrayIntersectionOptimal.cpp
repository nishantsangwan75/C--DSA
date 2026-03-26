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
    vector<int>arr_intersection;
    int i=0,j=0;
    while(i<n1&&j<n2){
        if(arr2[j]==arr1[i]){
                arr_intersection.push_back(arr1[i]);
                i++;
                j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else {
            j++;
        }
    }
    for(int q=0;q<arr_intersection.size();q++){
        cout<<arr_intersection[q]<<endl;
    }
    return 0;
}