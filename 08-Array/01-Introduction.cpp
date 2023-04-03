#include<iostream>
using namespace std;

int main(){

    
    int arr[5]; //Declaration of array

    //Take Input from the user
    cout<<"Enter value from the user"<<endl;
    for(int index = 0; index < 5; index++){
        cin>> arr[index];
    }


    //Output of the Array
    cout<<"Value in the array"<<endl;
    for(int index = 0; index < 5; index++){
        cout<< arr[index] << " ";
    }


    return 0;
}