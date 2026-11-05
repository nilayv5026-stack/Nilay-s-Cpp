#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3,s4,s5,per,q;
    cin>>s1>>s2>>s3>>s4>>s5;
    per=(s1+s2+s3+s4+s5)*100/500;
    if(per<=100){
    q=per/10;
    switch(q){
        case 0:
        case 1:
        case 2:
        case 3:
            cout<<"Fail";
            break;

        case 4:
        case 5:
            cout<<"C Grade";
            break;
        case 6:
            cout<<"B Grade";
            break;
        case 7: 
        if(per<75){
            cout<<"B Grade";
        }
        else{
            cout<<"A Grade";
        }
            break;
            case 8:
                cout<<"A Grade";
                break;
        case 9:
        case 10:
            cout<<"A+ Grade";
            break;
    }
}
else
{
    cout<<"Invalid Input";
}
}