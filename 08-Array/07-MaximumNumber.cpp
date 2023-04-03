#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

//This code is use to check maximum and minimum number in the array.


int maxNumber(int arr[],int n){
    int maxNumber = INT_MIN;
    for(int i=0;i<n;i++){
        // if(maxNumber<arr[i]){
        //     maxNumber = arr[i];
        // }
        maxNumber = max(maxNumber,arr[i]);
    }
    return maxNumber;
}
int minNumber(int arr[],int n){
    int minNumber = INT_MAX;
    for(int i=0;i<n;i++){
        // if(maxNumber<arr[i]){
        //     maxNumber = arr[i];
        // }
        minNumber = min(minNumber,arr[i]);
    }
    return minNumber;
}

int main(){

    int arr[]={10,1,4,13,31,2,3,4,-10,5};
    int size = 10;

    cout<<"Maximum Number is "<<maxNumber(arr,size)<<endl;
    cout<<"Minimum Number is "<<minNumber(arr,size);


    return 0;
}