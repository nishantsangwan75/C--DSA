// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int age;
// //     cin>> age;
// //     if(age<=18){
// //         cout<< "The person is not adult.";
// //     }
// //     else{
// //         cout<< "The person is an adult.";
// //     } 
// //     return 0;
// // }

// /*
// kewncklewnc;pewjcm;kwenc;kenc;kwe2nco;2ewmc;ewnc;ewn;ewqf2c
// */

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     float a;
// //     cin>> a;
// //     if(a<25){
// //         cout<< "F";
// //     }
// //     else if(a<=44){
// //         cout<< "E";
// //     }
// //     else if(a<=49){
// //         cout<< "D";
// //     }
// //     else if(a<=59){
// //         cout<< "C";
// //     }
// //     else if(a<=79){
// //         cout<< "B";
// //     }
// //     else if(a<=100){
// //         cout<< "A";
// //     }
// //     return 0;
// // }

// ## // the above method is better than this one.

// // #include<iostream>
// // using namespace std;
// // int main(){
// // int a;
// // cin>> a;
// // if(a<25){
// //     cout<< ("F");
// // }
// // if(a>=25 && a<=44){
// //     cout<< "E";
// // }
// // if(a>=45 && a<=49){
// //     cout<< "D";
// // }
// // if(a>=50 && a<=59){
// //     cout<< "C";
// // }
// // if(a>=60 && a<=79){
// //     cout<< "B";
// // }
// // if(a>=80 && a<=100){
// //     cout<< "A";
// // }
// // return 0;
// // } 

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>> a;
//     if(a<18){
//         cout<< "not eligible for job";
//     }
//     else if(a<=54){
//         cout<< "eligible for job";
//     }
//     else if(a<=57){
//         cout<< "eligible for job, but retirement soon.";
//     }
//     else {
//         cout<< "retirement time";
//     }
//     return 0;
// }

//nested if else 

#include<iostream>
using namespace std;
int main(){
    int a;
    cin>> a;
    if(a<18){
        cout<< "not eligible for job";
    }
    else if(a<=54){
        cout<< "eligible for job";
    }
    else if(a<=57){
        cout<< "eligible for job";
        if(a>=55){
            cout<< ", but retirement soon.";
        }
    }
    else{
        cout<<"not eligible for job";
    }
    return 0;
}