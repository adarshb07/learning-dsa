#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{1,10,5,7};

    int start = 0, end = arr.size() - 1;

    while(start<end){
        int mid = start + (end - start) / 2;
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    cout<<arr[end];
    return 0;
}