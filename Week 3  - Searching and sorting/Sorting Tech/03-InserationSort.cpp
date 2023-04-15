#include<iostream>
#include<vector>
using namespace std;

void displayArray(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void inserationSort(vector<int> &arr){

    for(int i=1;i<arr.size();i++){
        //Step 1: fetch the element;
        int val = arr[i];
        //Step 2: Compare with pervious Element;
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>val){
                //Step 3: Shift;
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }

        arr[j+1] = val;
    }

}
int main(){

    vector<int> arr= {10,1,7,6,14,9};

    cout<<"Array Befor Sort"<<endl;
    displayArray(arr);
    inserationSort(arr);
    cout<<"Array After Sort"<<endl;
    displayArray(arr);

    return 0;
}