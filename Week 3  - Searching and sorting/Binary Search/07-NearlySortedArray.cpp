#include<iostream>
using namespace std;

int main(){

    int arr[] = {10,3,40,20,60,80,70};

    int target = 10;
    int size = 7;
    int start=0,end=6;

    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid] == target ){
            cout<<mid;
            return 0;
        }

        if(arr[mid+1] == target && mid+1<=end){
            cout<<mid+1;
            return 0;
        }

        if(arr[mid-1] == target && mid-1>=start){
            cout<<mid-1;
            return -1;
        }
        

        if(target > arr[mid]){
            start = mid + 2;
        }
        else{
            end = mid - 2;
        }
    }

    cout<<"-1";

    return 0;
}