#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[]={0,1,1,1,0,1,0,0,1,0};
    int n = 10;

    int start = 0;
    int end = n-1;
    int i = 0;
    while(i<=end){

        if(arr[i] == 0){
           swap(arr[start],arr[i]);
           start++;
           i++ ;
        }
        else{
            swap(arr[end],arr[i]);
            end--;
        }

        // if(arr[start] == 1){
        //     swap(arr[start],arr[end]);
        // }
        // if(arr[end] == 0){
        //     swap(arr[start],arr[end]);
        // }

        // if(arr[start] == 0){
        //     start++;
        // }
        // if(arr[end] == 1){
        //     end--;
        // }
        
        // while(arr[start] == 0 && start<end){
        //     start++;
        // }
        // while(arr[end] == 1 && start<end){
        //     end--;
        // }

        // if(arr[start] == 1 && arr[end] == 0){
        //     swap(arr[start],arr[end]);
        // }
    }

    cout<<"Display"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}