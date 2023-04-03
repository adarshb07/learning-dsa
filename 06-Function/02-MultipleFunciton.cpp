#include<iostream>
using namespace std;


void PrintCall(){
    cout<<"Hello";
}
void printh(){
    PrintCall();
}

int main(){

    printh();

    return 0;
}