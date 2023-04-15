#include<iostream>
#include<vector>
using namespace std;

int oddOccurance(vector<int>arr){
    int start = 0;
    int end = arr.size() - 1;

    while(start<=end){
        
        int mid = start + (end-start)/2;

        if(start ==  end){
            return start;
        }

        if(mid%2==0){
            if(arr[mid] == arr[mid+1] && mid >= start){
                start = mid + 2;
            }
            else{
                end = mid;
            }
        }
        else{
            if(arr[mid] == arr[mid+1] && mid <= end){
                end = mid - 1;
            }
            else{
                start = mid+1;
            }
        }
    }
    return -1;
}

int main(){

    vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    
    cout<<"Element Found at: "<<oddOccurance(arr);

    return 0;
}