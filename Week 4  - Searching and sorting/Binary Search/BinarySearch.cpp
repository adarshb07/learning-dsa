#include<iostream>
#include<vector>

using namespace std;



/* 
    agar mid bada hai key se tho end peche le aao 
    aur agar mid chota hai key se tho start aage le jaao
*/
int binarySearch(vector<int> arr,int key){

    int start = 0;
    int end = arr.size() - 1;
    
    while(start<=end){
        
        int mid = start+(end-start)/2;

        if(arr[mid] ==  key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return -1;
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

    int foundAt = binarySearch(arr,key);

    if(foundAt == -1){
        cout<<"Key not found in this array";
    }
    else{
        cout<<"Key found at index: "<<binarySearch(arr,key);
    }
    return 0;
}