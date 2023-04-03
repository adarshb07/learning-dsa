#include<iostream>
using namespace std;

//This logic is use to search element in array if element not find it will return 0;
bool linearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            return 1;
        }
    }
    return 0;
}


int main(){

    int n;
    int arr[500];
    cout<<"Enter the size of the array: ";
    cin>>n;
    int k;
    cout<<"Enter Element to find"<<endl;
    cin>>k;

    cout<<"Enter Element in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    

    if(linearSearch(arr,n,k)){
        cout<<"Element Found";
    }
    else{
        cout<<"Element Not Found";
    }

    return 0;
}