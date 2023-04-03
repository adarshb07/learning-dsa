#include<iostream>
using namespace std;

int main(){

    int i,j;  //i for rowCount and j for coloumCount.
    cin>>i>>j;
    for(int row=0; row < i; row++){
        for(int col= 0;col < j; col++) {
            if( row == 0 || row == i-1 || col == 0 || col == j-1){
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}