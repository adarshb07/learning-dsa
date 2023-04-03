#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int sum;
    cout<<"Enter the sum of the array: "<<endl;
    cin>>sum;

    vector<int> arr(n);
    cout<<"Enter the element in the array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int  i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
        
    }
    


    return 0;
}