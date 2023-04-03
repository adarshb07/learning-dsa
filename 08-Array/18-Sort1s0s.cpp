#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[]={0,1,1,1,0,0,0,1,0};
    int n = 8;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
                break;
            }
        }
    }

    cout<<"Display"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}