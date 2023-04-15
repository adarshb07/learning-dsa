#include<iostream>
#include<vector>
using namespace std;

void displayArray(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(vector<int> &arr){

    for(int round = 1; round< arr.size(); round++){
        bool swapped = false;
        for(int j = 0; j<arr.size()-round;j++ ){
            if(arr[j]>arr[j+1]){
                swapped = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped == false){
            break;
        }
    }

}
int main(){

    vector<int> arr= {10,1,7,6,14,9};

    cout<<"Array Befor Sort"<<endl;
    displayArray(arr);
    bubbleSort(arr);
    cout<<"Array After Sort"<<endl;
    displayArray(arr);

    return 0;
}