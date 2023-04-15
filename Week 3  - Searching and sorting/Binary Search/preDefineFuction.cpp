#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){


    //using vector
    vector<int> arr{1,2,3,4,5};
    if(binary_search(arr.begin(),arr.end(),10)){
        cout<<"Founded";
    }
    else{
        cout<<"Not Founded";
    }


    //using array

    // int arr[5] = {1,2,3,4,5};
    // int size = sizeof(arr)/sizeof(int);
    // // cout<<size<<endl; 
    // if(binary_search(arr,arr + size,3)){
    //     cout<<"Founded";
    // }
    // else{
    //     cout<<"Not Founded";
    // }

    return 0;
}