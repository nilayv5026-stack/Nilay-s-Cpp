#include<iostream>
using namespace std;
int main(){
    float w,h,bmi;
    cout<<"Enter your weight in kg: ";
    cin>>w;
    cout<<"Enter your height in m: ";
    cin>>h;
    bmi=w/(h*h);
    cout<<"Your BMI is: "<<bmi<<endl;

    if(bmi<18.5){
        cout<<"You are underweight.";}
        else if(bmi>=18.5 && bmi<24.9){
            cout<<"You have a normal weight.";}
            else if(bmi>=25 && bmi<29.9){
                cout<<"You are overweight.";}
                else{
                    cout<<"You are obese.";
    }
    return 0;
}