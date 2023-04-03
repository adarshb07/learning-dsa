#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for (int row = 0; row < n; row++)
    {   
        for (int space = 0; space < n-row-1; space++)
        {
            cout<<" ";
        }
        
        for (int col = 0; col < 2*row+1; col++)
        {
            if(col==0||col== 2*row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }   
        }
        cout<<endl;
    }

    for(int row=0;row<n-1;row++){
        for(int space=0;space<row+1;space++){
            cout<<" ";
        }
        for(int col=((n-1)-row)*2-1;col>0;col--){
            if(col==((n-1)-row)*2-1 || col==1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    


    return 0;
}