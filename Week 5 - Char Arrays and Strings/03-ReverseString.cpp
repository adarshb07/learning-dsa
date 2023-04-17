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

void reverseString(char ch[]){
    int size = getlength(ch);
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(ch[start],ch[end]);
        start++;
        end--;
    }

}

int main(){

    char ch[100];
    cout<<"Enter any Input: ";
    cin.getline(ch,100);

    reverseString(ch);

    cout<<"Answer: "<<ch;


    return 0;
}