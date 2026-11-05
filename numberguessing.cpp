#include<iostream>
using namespace std;
int main(){
    int SecretNumber = 49,Anynumber,attempts = 0;
    cout<<"Welcome to the number guessing game!"<<endl;
    while(Anynumber!=SecretNumber){
    cout<<"Please enter a number between 1 and 100: ";
    cin>>Anynumber;
    attempts++;
    if(Anynumber>100 || Anynumber<1){
        cout<<"Invalid input! Please enter a number between 1 and 100."<<endl;
    }
    else if(Anynumber==SecretNumber){
        cout<<"Congratulations! You guessed the correct number!"<<endl;
    }
    else if(Anynumber<SecretNumber){
        cout<<"Your guess is too low."<<endl;
    }
    else if(Anynumber>SecretNumber){
        cout<<"Your guess is too high."<<endl;
    }
    cout<<"Number of attempts: "<<attempts<<endl;
  }
}