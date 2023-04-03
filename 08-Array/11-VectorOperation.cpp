#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> arr;
    int var;
    for(int i=0;i<n;i++){
        cin>>var;
        arr.push_back(var);
    }
    

    if(arr.empty()){
        cout<<"Print array is empty";
    }


    arr.pop_back();
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}