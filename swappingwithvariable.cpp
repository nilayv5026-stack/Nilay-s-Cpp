#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<a<<" is now the first number and "<<b<<" is now the second number."<<endl;

}