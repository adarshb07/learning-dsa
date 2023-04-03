#include<iostream>
using namespace std;

//This code is use to count number of 1's and 0's in the code.

int count1(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            ans++;
        }
    }
    return ans;
}

int count0(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            ans++;
        }
    }
    return ans;
}

int main(){

    int arr[]={1,1,1,1,1,1,0,0,0,0};
    
    cout<<"One's in array: "<<count1(arr,10)<<endl;
    cout<<"Zero in array: "<<count0(arr,10)<<endl;

    return 0;
}