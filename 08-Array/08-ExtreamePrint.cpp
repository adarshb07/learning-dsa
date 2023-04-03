#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[500];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array Before Operation look likes this: ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    int temp[500]={0};
    int start = 0;
    int end = n-1;
    int counter = 0;


    // Operation to store first element first then end element to make it look like extreme 
    while(start<=end){

        temp[counter] = arr[start];
        counter++;

        if(start < end){
        temp[counter] = arr[end];
        }
        else{
            break;
        }
        counter++;
        start++;
        end--;
    }

    cout<<"New Array after all the operations"<<endl;
    for(int i=0;i<n;i++){
        cout<<temp[i] << " ";
    }


    return 0;
}