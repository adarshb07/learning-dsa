#include<iostream>
#include<vector>

using namespace std;

int firstOccurance(vector<int> arr, int key){

    int index = -1, start = 0 , end = arr.size() - 1;

    while (start<=end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid] ==  key){
            index = mid;
            end = end-1;
        }
        else if(arr[mid] < key){
            start = start + 1;
        }
        else{
            end = end-1;
        }
    }
    return index;
}

int lastOccurance(vector<int> arr, int key){

    int index = -1, start = 0 , end = arr.size() - 1;

    while (start<=end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid] ==  key){
            index = mid;
            start=start+1;
        }
        else if(arr[mid] < key){
            start = start + 1;
        }
        else{
            end = end-1;
        }
    }
    return index;
}

int main(){

    cout<<"Enter the size of array: ";
    int n; cin>>n;

    cout<<"Enter key to search: ";
    int key; cin>>key;

    vector<int> arr(n);

    cout<<"Enter Element in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int first = firstOccurance(arr,key);
    int last = lastOccurance(arr,key);
  
    cout<<"Total number of Occurrence is: "<< last - first + 1;

    return 0;
}