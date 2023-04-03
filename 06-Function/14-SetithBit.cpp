#include<iostream>
using namespace std;

int set1(int n,int pos){
    return n | 1<<(pos-1);
}
int main(){

    int n,pos;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout<<"Enter the postion where you want to set 1"<<endl;
    cin>> pos;


    int ans = set1(n,pos);

    cout<<"Answer is: "<<ans;

    return 0;
}