#include<iostream>
#include<vector>    
using namespace std;

int main(){

    vector<int> arr{10,20,30,40};
    vector<int> arr1(10);
    cout<<"Size Taken in Mem"<<sizeof(arr)<<endl;
    cout<<"Size of arr: "<<arr.size()<<endl; // This will return the size of the array
    cout<<"Capacity of arr: "<<arr.capacity()<<endl;    //This will tell the capacity of the array

    for(int i=0;i<10;i++)
        cout<<arr1[i]<<" ";

    
    return 0;
}


 