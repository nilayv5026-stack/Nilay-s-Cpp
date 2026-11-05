#include <iostream>
using namespace std;
int main(){
int num1,num2;
char op;
cout<<"Enter first number, operator and second number: ";
cin>>num1>>op>>num2;
     switch(op){
        case '+':
        cout<<num1+num2;
        break;
        case '-':
        cout<<num1-num2;
        break;
        case '*':
        cout<<num1*num2;
        break;
        case '/':
                 if(num2==0){
                    cout<<"Error: Division by zero is not allowed.";}
                    else{
                        cout<<num1/num2;        
                 }
        break;

}

}
