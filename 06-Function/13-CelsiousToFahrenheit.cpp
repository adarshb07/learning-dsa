#include<iostream>
using namespace std;

float converter(int n){

    return (n*1.8) + 32;
}


int main(){

    int n;
    cout<<"Enter the Temp. in Celsious: ";
    cin>>n;
    float a = converter(n);
    cout<<n<<" celsious in Fahrenheit is: "<<a;
    return 0;
}