#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=0;row<n;row++){
        for(int space=0;space<n-row-1;space++){
            cout<<"  "; 
        }
        for(int col=0;col< 2*row+1; col++){
            if(col==0 || col==2*row|| row==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}