#include<iostream>
#include<vector>
using namespace std;

int ans(vector<int>arr){

    int start = 0;
    int end = arr.size();
    int ans = -1;

    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid] ==  mid+1){
            start = mid + 1;
        }
        else{
            end = mid-1;
            ans = arr[mid];
        }
    }
    return ans-1;
}

int main(){
    vector<int>arr{1,3,4,5,6,7,8};

    cout<<"Missing Number is: "<<ans(arr);


    return 0;
}