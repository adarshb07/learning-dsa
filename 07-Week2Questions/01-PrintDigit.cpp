#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int rev=0;
    while (n!=0)
    {
        int rem = n%10;
        rev = (rev*10)+rem;
        n/=10;
    }
    
    while (rev!=0)
    {
        int rem=rev%10;
        cout<<rem<<" ";
        rev/=10;
    }
    return 0;
}