#include<iostream>
#include<vector>
using namespace std;

void displayArray(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        int mini = i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[mini]) 
                mini = j;
        }
        swap(arr[i],arr[mini]);
    }
}

int main(){

    vector<int> arr= {5,4,3,2,1};

    cout<<"Array Befor Sort"<<endl;
    displayArray(arr);
    selectionSort(arr);
    cout<<"Array After Sort"<<endl;
    displayArray(arr);

    return 0;
}