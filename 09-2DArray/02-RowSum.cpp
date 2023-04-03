#include<iostream>
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
    cout<<"sum of array row wise: "<<endl;

    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
            sum  += arr[i][j];
        }
        cout<<"= "<<sum;
        cout<<endl;
    }


    cout<<"sum of array row wise: "<<endl;

    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            cout<<arr[j][i]<<" ";
            sum  += arr[j][i];
        }
        cout<<"= "<<sum;
        cout<<endl;
    }
    return 0;
}
