#include<iostream>
#include<vector>

using namespace std;

int main(){



    //First Method

    /*
    vector<vector<int>> arr;
    vector<int>arr1{1,2,3};
    vector<int>arr2{4,5,6,7,8,9};
    vector<int>arr3{7,8,9};

    arr.push_back(arr1);
    arr.push_back(arr2);
    arr.push_back(arr3);

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    */

   //Second Method

    int row = 5;
    int col = 5;
//    vector<vector<int>>arr(row,vector<int>(col,10));
    vector<vector<int>>arr(row,vector<int>(col,-8));
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}