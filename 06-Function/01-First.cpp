#include<iostream>
using namespace std;

int getSum(int a,int b){
    return a+b;
}


int main(){

    int a,b;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter second Number: ";
    cin>>b;

    int sum = getSum(a,b);

    cout<<"Sum is: "<<sum;
    return 0;
}