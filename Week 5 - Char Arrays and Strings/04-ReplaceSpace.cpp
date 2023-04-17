#include<iostream>
using namespace std;

void replaceSpace(char ch[]){
    for(int i=0 ;ch[i] != '\0';i++){

        if(ch[i] == ' '){
            ch[i] = '_';
        }
    }
}

int main (){
    char ch[100];
    cout<<"Enter Input: ";
    cin.getline(ch,100);

    replaceSpace(ch);

    cout<<"Output: "<<ch;

}