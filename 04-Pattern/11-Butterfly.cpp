#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    for(int row=1;row<=n;row++){

        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        int sp = (n*2)-(row*2);
        for(int space=1;space<=sp;space++){
            cout<<"  ";
        }
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row=n;row>=1;row--){

        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        int sp = (n*2)-(row*2);
        for(int space=1;space<=sp;space++){
            cout<<"  ";
        }
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}