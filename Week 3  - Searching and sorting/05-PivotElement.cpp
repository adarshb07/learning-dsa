#include<iostream>
using namespace std;

/*
    we are checking if arr mid is greater than mid + 1 than mid is the pivot element
*/

int pivotElement(int arr[],int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        
        int mid = start + (end-start)/2;

        if(arr[mid] >= arr[mid+1] && mid+1 < n-1){
            return mid;
        }
        if(arr[mid-1]>arr[mid] && mid-1 >= 0){
            return mid-1;
        }

        if(arr[mid] > arr[start]){
            start =  mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}


int main(){
    
    int arr[7] ={1,2,3,4,5,6,7};
    int n = 7;
    cout<<"Pivot Element is: "<<pivotElement(arr,n);
    return 0;
}