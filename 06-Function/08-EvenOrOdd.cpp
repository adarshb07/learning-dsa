#include<iostream>
using namespace std;

bool eveOrOdd(int n){
    
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }

}

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    bool ans = eveOrOdd(n);
    
    if(ans==1){
        cout<<n<<" is Even Number"<<endl;
    }
    else{
        cout<<n<<" is Odd Number"<<endl;
    }

    return 0;
}