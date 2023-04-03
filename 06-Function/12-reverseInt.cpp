#include<iostream>
using namespace std;

int reverse(int n){
    
    int ans = 0;

    while(n!=0){
        int rem = n%10;
        ans = (ans*10)+rem;
        n/=10;
    }

    return ans;
}


int main(){

    int n;
    cout<<"Enter any Number: ";
    cin>>n;

    int ans = reverse(n);

    cout<<"Reverse of "<<n<<" is: "<<ans;
    return 0;
}