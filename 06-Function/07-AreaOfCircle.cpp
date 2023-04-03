#include<iostream>
using namespace std;

float areaOfCircle(int radius){

    float ans;
    ans = 3.14159265359*(radius*radius);

    return ans;
}

int main(){

    int radius;
    cout<<"Enter the Radius of the circle "<<endl;
    cin>>radius;

    float answer = areaOfCircle(radius);

    cout<<"Area of Circle is: "<<answer<<endl;

    return 0;
}