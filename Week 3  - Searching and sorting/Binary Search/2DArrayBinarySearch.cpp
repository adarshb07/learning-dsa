#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> arr{{1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12},
                            {13,14,15,16},
                            {17,18,19,20}};

    int target = 19;

    int start = 0;
    // int size = 4 * 5;
    int size = arr.size()*arr[0].size();

    int end = size - 1;

    while(start<=end){
        int mid = start + (end-start)/2;
        int rowIndex = mid / 4;
        int colIndex = mid % 4;

        if(arr[rowIndex][colIndex] ==  target){
            cout<<"Found at: \nRow Index: "<<rowIndex+1<<"\nCol Index "<<colIndex+1<<"\nAns: arr["<<rowIndex<<"]["<<colIndex<<"]"; 
            return 0;
        }
        else if(arr[rowIndex][colIndex] > target){
            end = mid -1;
        }
        else{
            start = mid + 1;
        }

    }
    
    cout<<"Element Not Found: ";
    return 0;
}