#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    bool flag = 1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"It is not prime number";
            return 0;
        }
    }
    cout<<"It is Prime";
    return 0;
}