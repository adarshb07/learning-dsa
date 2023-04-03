#include<iostream>
#include<vector>
using namespace std;


void display(vector<int> ans){
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return;
}
// combining 2 array in one 
void unionArray(vector<int> arr1, vector<int> arr2){
    vector<int> ans;

    for (int  i = 0; i < arr1.size(); i++)
    {
        ans.push_back(arr1[i]);
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        ans.push_back(arr2[i]);
    }
    cout<<"Answer After Union: "<<endl;
    display(ans);

    return;
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
    unionArray(arr1,arr2);
    
    return 0;
}