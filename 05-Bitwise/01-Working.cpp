#include<iostream>
using namespace std;

int main(){

    bool a = true;
    bool b = false;

    cout<<"And: "<<(a&b)<<endl;
    cout<<"Or: "<<(a|b)<<endl;
    cout<<"Not: "<<~(b)<<endl;
    cout<<"XOR: "<<(a^b)<<endl;


    cout<<"And of 10 and 5: "<<(10&5) <<endl;
    cout<<"OR of 3 and 7: "<<(3|7) <<endl;
    cout<<"XOR of 10 and 5: "<<(10^5) <<endl;
    return 0;
}