#include<iostream>
using namespace std;



// Original value of array can be updated in other function call stack because it send address of first element
// Rather than value
int updataArray(int arr[], int n){

    arr[2]+=50;
    cout<<"Array in Function "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
}


int main(){

    int arr[10]={10,40,30,20};
    updataArray(arr,4);
    cout<<endl;
    cout<<"Array after the updating Value in array "<<endl;
    for(int i=0;i<4;i++){
        cout<<arr[i] << " ";
    }
    return 0;
}