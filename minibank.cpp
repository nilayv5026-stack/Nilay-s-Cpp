#include<iostream>
using namespace std;
int main() {
    int choice,balance=20000,deposit,withdraw;
    cout<<"Welcome to Mini Bank!"<<endl;
    cout<<"1. Deposit Money"<<endl;
    cout<<"2. Withdraw Money"<<endl;
    cout<<"3. Check Balance"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Enter amount to deposit: ";
        cin>>deposit;
        balance=balance+deposit;
        cout<<"Your new balance is: "<<balance<<endl;
        break;
        case 2:
        cout<<"Enter amount to withdraw: ";
        cin>>withdraw;
        if(withdraw>balance){
            cout<<"Insufficient balance!"<<endl;
        }
        else{
            balance=balance-withdraw;
            cout<<"Your new balance is: "<<balance<<endl;
        }
        break;
        case 3:
        cout<<"Your balance is: "<<balance<<endl;
        break;
    }
}