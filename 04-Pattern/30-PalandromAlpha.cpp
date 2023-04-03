#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        char ch = 'A';
        int j;
        ch = 'A';
        for (j = 0; j < i+1; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        ch--;
        for(int j=i;j>0;j--){
            ch--;
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    return 0;
}