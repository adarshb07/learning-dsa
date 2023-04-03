#include<iostream>
#include<algorithm>
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


    cout<<"OutPut "<<endl;

    for(int i=0;i<row;i++){
        for(int j=i+1;j<col;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
