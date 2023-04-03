#include<iostream>
#include<vector>
using namespace std;

int uniqueNumber(vector<int> arr){

    int ans=0;

    for(int i=0;i<arr.size();i++){
        ans ^= arr[i];             //XOR use to find out the unique element in the array or we can say cancel out the same element
    }


    return ans; 
}

int main(){

    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int answer = uniqueNumber(arr);

    cout<<"Unique number is: "<<answer;
    
    return 0;
}