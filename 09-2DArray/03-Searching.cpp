#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter Number of Rows: ";
    cin>>row;
    cout<<"Enter Number of Col: ";
    cin>>col;
    cout<<"Which element you to search: ";
    int key;
    cin>>key;
    int arr[100][100];

    cout<<"Input in the array: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] == key){
                cout<<"Element found at index: "<<i<<", "<<j;
                return 0;
            }
        }
    }

    cout<<"Element not found";

    return 0;
}