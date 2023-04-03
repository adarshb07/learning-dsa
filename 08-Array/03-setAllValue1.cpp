#include<iostream>
#include<cstring>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};


    // This code is use to set all the value of array to some default value.

    for (int index = 0; index < 5; index++)
    {
        arr[index] = 1;
    }
    // memset(arr,1,sizeof(arr));


    for (int  index = 0; index < 5; index++)
    {
        cout<<arr[index]<< " ";
    }
    

    return 0;
}