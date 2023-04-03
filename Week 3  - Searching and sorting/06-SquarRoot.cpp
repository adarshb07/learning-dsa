#include<iostream>
using namespace std;

double sqRoot(int n){
    int start = 0;
    int end = n/2;
    double ans = 0;
    while(start<=end){
        
        int mid =  start + (end-start)/2;
        if (mid*mid ==  n){
            ans = mid;
            break;
        }
        else if(mid*mid > n ){
            end = mid - 1;
        }
        else {
            ans = mid;
            start = mid + 1;
        }
    }

    // int precision;
    // cin>>precision;

    // double step = 0.1;

    // for(int i=0;i<precision;i++){
    //     for( double j=ans;j*j <=n; j = j+step){
    //         ans = j;
    //     }
    //     step /=10;
    // }


    return ans;
}

int main(){

    int n = 1;

    cout<<"Answer is: "<<sqRoot(n);
    return 0;
}