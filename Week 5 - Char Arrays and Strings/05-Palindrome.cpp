#include<iostream>
using namespace std;

int stringLength(char ch[]){
    int counter = 0;
    for(int i=0;ch[i] != '\0';i++){
        counter++;
    }
    return counter;
}

bool palindrome(char ch[]){

    int size = stringLength(ch);
    int start  = 0;
    int end =  size - 1;

    while(start<=end){
        if(ch[start] !=  ch[end]){
            return false;
        }
        else{
            start ++;
            end -- ;
        }
    }

    return true;
}

int main(){

    char ch[100];
    cin.getline(ch,100);

    bool ans = palindrome(ch);
    // cout<<ans;
    if(ans){
        cout<<"It is Palindrome";
    }
    else{
        cout<<"It is not Palindrome";
    }

    return 0;
}