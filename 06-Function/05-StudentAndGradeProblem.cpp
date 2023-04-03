#include<iostream>
using namespace std;

char studentGrade(int marks){

    if(marks>=90){
        return 'A';
    }
    else if(marks>=80){
        return 'B';
    }
    else if(marks>=70){
        return 'C';
    }
    else if(marks>=60){
        return 'D';
    }
    else{
        return 'E';
    }

}

int main(){
    
    int marks;
    cin>>marks;

    char grade = studentGrade(marks);

    cout<<"Grade of Student is: "<<grade;

    return 0;
}