#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}


int main(){

    int n;
    cout<<"Enter Number to Check it is prime or not"<<endl;
    cin>>n;

    bool ans = isPrime(n);

    if(ans==1){
        cout<<n<<" is prime number";
    }
    else{
        cout<<n<<" is not prime number";

    }

    return 0;
}