#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int count=1;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<count++<<" ";
            if(col!=row){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    count = count - n;

    for(int row = n; row>0;row--){
        for(int col = 0;col<row;col++){
            cout<<count++<<" ";
            if(col!=row-1){
                cout<<"* ";
            }
        }
        cout<<endl;
        count = (count-row+1)/2;
    }

    return 0;
}