#include<iostream>
using namespace std;

int sumEven(int n){

    int ans=0;

    for(int i=2;i<=n;i+=2){
        ans+=i;
    }

    return ans;
}


int main(){

    int n;
    cin>>n;

    int ans = sumEven(n);

    cout<<"Sum of Even Number is: "<<ans;

    return 0;
}