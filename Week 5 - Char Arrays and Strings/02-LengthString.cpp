#include<iostream>
#include<string>
using namespace std;

int main(){
    char ch[100];
    
    cin.getline(ch,100);
    
    int counter = 0; 

    // for(int i=0;i<100;i++){
    //     if(ch[i] == '\0'){
    //         break;
    //     }
    //     counter++;
    // }
    int i = 0;

    while(ch[i] != '\0'){
        counter++;
        i++;
    }

    cout<<"Length of String is: "<<counter;
    return 0;
}