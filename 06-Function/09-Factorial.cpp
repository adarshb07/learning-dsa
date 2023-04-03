#include<iostream>
using namespace std;

int fact(int n){
    
    int ans=1;

    for(int i=1;i<=n;i++){
        ans = ans * i;
    }

    return ans;
}

int main(){

    int n;
    cout<<"Enter number to find it's Factorial: ";
    cin>>n;

    int ans=fact(n);
    cout<<"Answer is: "<<ans;

    return 0;
}