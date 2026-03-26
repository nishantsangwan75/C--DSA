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
    vector<int>temp(n2,0);
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]&&temp[j]==0){
                arr_intersection.push_back(arr2[j]);
                temp[j]=1;
                break; //very important to associate 1 element of arr1 with only 1 element of arr2.
            }
            if(arr2[j]>arr1[i]) break; //as going further in aar 2 we'll not find any element equal to arr1[i] as arr2[j] is greater and array is sorted so the upcoming elements will also be greater than or equal to arr1[i] so break and continue withnext i.
        }
    }
    for(int q=0;q<arr_intersection.size();q++){
        cout<<arr_intersection[q]<<endl;
    }
    return 0;
}