#include<iostream>
using namespace std;
int main() {
    double a, b, greatest;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    greatest=(a>b)?a:b;
    cout<<greatest<<" is the greatest number."<<endl;
    return 0;
}