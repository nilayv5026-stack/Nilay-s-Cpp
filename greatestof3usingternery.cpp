#include<iostream>
using namespace std;
int main() {
    int a,b,c,greatest;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    greatest=(a>b)?((a>c)?a:c):((b>c)?b:c);
    cout<<greatest<<" is the greatest number."<<endl;
    return 0;
}