#include<iostream>
using namespace std;

int getlength(char ch[]){
    int counter = 0;
    int i=0;
    while(ch[i] != '\0'){
        counter++;
        i++;
    }

    return counter;
}

void lowerCase(char ch[]){
    int n = getlength(ch);
    for(int i=0;i<n;i++){
        if(ch[i]>='A' && ch[i]<='Z'){
            ch[i] = ch[i] - 'A' + 'a';
        }
    }
}

void upperCase(char ch[]){
    int n = getlength(ch);
    for(int i=0;i<n;i++){
        if(ch[i]>='a' && ch[i]<='z'){
            ch[i] = ch[i] - 'a' + 'A';
        }
    }
}

int main(){

    char ch[100];
    cin.getline(ch,100);

    // upperCase(ch);
    lowerCase(ch);
    cout<<ch;
    return 0;
}