#include<iostream>
#include<vector>
#include<climits>
using namespace std;


void display(vector<int> ans){
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return;
}

void unionArray(vector<int> arr1, vector<int> arr2){
    vector<int> ans;
    for (int i = 0; i < arr1.size(); i++)
    {
        ans.push_back(arr1[i]);
    }
    for(int j=0;j<arr2.size();j++){
        if(arr2[j]!=INT_MIN){
            ans.push_back(arr2[j]);
        }
    }
    cout<<"Answer After Union: "<<endl;
    display(ans);
}


vector<int> intersection(vector<int> arr1,vector<int> arr2){
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if(arr1[i] ==  arr2[j]){
                arr2[j] = INT_MIN;
                break;
            }
        }       
    }
    unionArray(arr1,arr2);
}


int main(){

    int n;
    cout<<"Enter the size of First array: ";
    cin>>n;
    cout<<"Enter Element in First Array: "<<endl;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the size of Second array: ";
    cin>>n;
    cout<<"Enter Element in Second Array: "<<endl;
    vector<int> arr2(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }
    intersection(arr1,arr2);
    
    return 0;
}