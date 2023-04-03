#include<iostream>
using namespace std;

void printPrime(int n){
    cout<<"All Prime Number B/w 1 to "<< n <<endl;
    bool flag = 1;
    for(int i=2;i<n;i++){
        
        for(int j=2; j<i;j++){
            if(i%j==0){
                flag=0;
            }
        }

        if(flag==1){
            cout<<i<<" ";
        }
        else{
            flag = 1;
        }
    }
    return;
}


int main(){

    int n;
    cout<<"Enter Number to print Prime Number: "<<endl;
    cin>>n;

    printPrime(n);

    return 0;
}