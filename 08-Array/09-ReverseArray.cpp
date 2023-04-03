#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;

    int arr[500];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // for(int i=0;i<n/2;i++){
    //     int temp = arr[i];
    //     arr[i] = arr[n-i-1];
    //     arr[n-i-1] = temp ;
    // }

    int start = 0;
    int end = n-1;

    // while (start<=end)
    // {
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp ;
    //     start++;
    //     end--;
    // }
    while (start<end)
    {
        arr[start] = arr[start] ^ arr[end];
        arr[end] = arr[start] ^ arr[end];
        arr[start] = arr[start] ^ arr[end]; 
        start++;
        end--;
    }
    

    cout<<"Array After Reverse"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
    return 0;
}