#include<iostream>
#include<string>
using namespace std;

int main(){

    // string str ="Hello";
    // getline(cin,str);
    // cout<<"String is: "<<str<<endl;
    // cout<<"Length is: "<<str.length()<<endl;
    // cout<<"isEmpty: "<<str.empty()<<endl;
    // str.push_back('a');
    // cout<<"New: "<<str;
    // str.pop_back();
    // cout<<"PopBack: "<<str;

    // cout<<"Sub String: "<<str.substr(1,5); //index and length
    // cout<<"\nCompare: "<<str.compare("h");
    // cout<<str.find("h");

    string str1= "This is string example";
    string str2= "Hello";
    str1.replace(0,4,str2);

    cout<<str1;

    return 0;
}