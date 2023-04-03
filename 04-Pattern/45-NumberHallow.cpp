#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int space=0;space<n-i-1;space++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            if(j==0||j==i||i==n-1){
                cout<< j+1<<" " ;
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}