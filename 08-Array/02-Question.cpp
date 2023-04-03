#include<iostream>
using namespace std;

int main(){


    int arr[5];
    cout<<"Enter value from the user"<<endl;
    for(int index = 0; index < 5; index++){
        cin>> arr[index];
    }


    //It is use to double the value of the array
    cout<<"Double of the array"<<endl;
    for(int index = 0; index < 5; index++){
        cout<< arr[index]*2<< " ";
    }


    return 0;
}