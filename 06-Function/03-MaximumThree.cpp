#include<iostream>
using namespace std;

int findMaxi(int x,int y,int z){

    if(x>y && x>z){
        return x;
    }
    else if(y>z && y>x){
        return y;
    }
    else{
        return z;
    }


}


int main(){

    int a,b,c;
    cin>>a>>b>>c;

    int maxiumNumber = findMaxi(a,b,c);

    cout<<"Maximum Number is: "<<maxiumNumber;

    return 0;
}