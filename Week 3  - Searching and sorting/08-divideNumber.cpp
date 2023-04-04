#include<iostream>
using namespace std;


double ans(int divisor,int dividend){
    int start = 0,end= abs(dividend);
    double ans = 0;
    while (start<=end)
    {
        int mid = start + (end-start)/2;
        if(abs(mid*divisor) ==abs(dividend)){
            return mid;
        }

        if(abs(dividend) > abs(mid*divisor)){
            start = mid + 1;
            ans = mid;
        }
        else{
            end = mid - 1;
        }
    }
    
    double step = 0.1;
    for(int i=0;i<3;i++){
        for(double j=ans;j*abs(divisor) <= abs(dividend); j=j+step){
            ans = j;
        }
        step/=10;
    }


    if(dividend<0 && divisor<0 || dividend > 0 && divisor > 0){
        return ans;
    }
    else{
        return -ans;
    }
}

int main(){

    int dividend = -16;
    int divisor = -3;

    cout<<ans(divisor,dividend);

    return 0;
}