#include<iostream>
#include<vector>

using namespace std;

/* 
    phele array element ko find karo agar mila tho
        uske right me search karo ki waha exist krta hai ki nahi agar krta hai tho index ko update kr do
        nahi tho phele wala ko hi return kr do
    othewise return -1;
    
*/


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

    int foundAt = lastOccurance(arr,key);

    if(foundAt == -1){
        cout<<"Key not found in this array";
    }
    else{
        cout<<"Key found at index: "<<foundAt;
    }   


    return 0;
}