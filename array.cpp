// 1D array

// #include<iostream>
// using namespace std;
// int main(){
//     double arr[5];
//     cin>> arr[0]>> arr[1]>> arr[2]>> arr[3]>> arr[4];
//     cout << (arr[0]+arr[1])/arr[3]<<"\n";
//     arr[4]+=1; // means array 4 add 1 in yourself whereas =+ means make yourself 1
//     cout<< arr[4];
//     return 0;
// }

// 2D array

#include<iostream>
using namespace std;
int main(){
    int arr[3][4]; // here it created a matrix of 3 rows and 4 columns and stored the input values and matrice starts from 00, 01 ,02 and upto 34 where 3 is i and 4 is j
    cin>>arr[0][0]>>arr[0][1]>>arr[0][2]>>arr[0][3]>>arr[0][4];
    cin>>arr[1][0]>>arr[1][1]>>arr[1][2]>>arr[1][3]>>arr[1][4];
    cin>>arr[2][0]>>arr[2][1]>>arr[2][2]>>arr[2][3]>>arr[2][4];
    cin>>arr[3][0]>>arr[3][1]>>arr[3][2]>>arr[3][3]>>arr[3][4];
    cout<<arr[0][3];
    return 0;
}