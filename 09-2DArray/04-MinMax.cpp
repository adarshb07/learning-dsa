#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter Number of Rows: ";
    cin>>row;
    cout<<"Enter Number of Col: ";
    cin>>col;

    int arr[100][100];

    cout<<"Input in the array: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            maxi = max(maxi,arr[i][j]);
            mini = min(mini,arr[i][j]);
        }
    }

    cout<<"Maximum Value in array is: "<<maxi<<endl;
    cout<<"Minimum Value in array is: "<<mini;

    return 0;
}