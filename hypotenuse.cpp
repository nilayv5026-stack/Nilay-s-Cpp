#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c;
    cout<<"Enter one side of the triangle: ";
    cin>>a;
    cout<<"Enter another side of the triangle: ";
    cin>>b;
    c=sqrt((a*a)+(b*b));
    cout<<"The hypotenuse of The Triangle is: "<<c<<endl;
    return 0;
}