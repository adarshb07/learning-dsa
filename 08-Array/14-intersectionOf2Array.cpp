#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(vector<int> arr1, vector<int> arr2){

    vector<int> ans;
    
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int  j = 0; j < arr2.size(); j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr2[j] = -1;
                ans.push_back(arr1[i]);
                break;
            }
            
        }
        
    }
    return ans;
}
void display(vector<int> arr){

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<< " ";
    }
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

    vector<int> ans = intersection(arr1,arr2);

    cout<<"Common Number Between Them is: "<<endl;
    display(ans);
    // cout<<endl;
    // for (int i = 0; i < arr2.size(); i++)
    // {
    //     cout<<arr2[i]<< " ";
    // }
    return 0;
}