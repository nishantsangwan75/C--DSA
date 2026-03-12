#include<iostream>
using namespace std;
void printt(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        //space n-i
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        //chr

        //j<=2i-1
        char chr ='A';
        for(int j=1;j<=a;j++){ // or we can use limit for j as 2i-1 instead of a.
           
           
           
           
           
            // if(j<=i) {
            //     cout<<chr;         
            //     if(j<i) chr++;
            //     else chr--;  
            // }
            // if(j>i){
            //     cout<<chr;
            //     chr--;
            // }

            // the above and below both are same in the code below
            // same cout is being used for both chr++ and chr--

            
             cout<<chr;
                if(j<i) chr++;
                else chr--;


        }    
        //space n-i
        for(int j=0;j<n-i;j++){ 
            cout<<" ";
        }
        cout<<endl;
        a=a+2;
   }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        printt(n);
    }
    return 0;
}