#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include<iomanip>

using namespace std;

//สุ่มPackage
string randompackage(string);

//เช็คบัตรเครดิต
double checkCreditcard(int);

/*int main(){
    cout<<setw(30)<<"Welcome to TPC hotel.\n";
    cout<<setw(60)<<"For your best experience We have create an online service.\n";
    cout<<setw(30)<<"Is there anything I can help you?\n";
    cout<<setw(20)<<"1.Find aviable room."<<setw(20)<<"2.Check out";
}*/

string randompackage(string x){
    while(x=="YES" || x=="yes"){
        srand(time(0));
        int y = rand()%4;
        if(y==0) return "You just got 50 % off. ";
        if(y==1) return "You just got 30 % off. ";
        if(y==2) return "You just got 10 % off and Free breakfast.";
        else  return "You just got stay 2 nights free 1 night." ;
    }
    return "OK Your welcome. :) ";   
}

void checkCreditcard(){
    string a;
    cout<<"Please press card number: ";
    cin>>a;
    int b = a.size();
    while(b != 13){
        cout<<"Seem like you press wrong number.Please press again: ";
        cin>>a;
        b = a.size();
        }
    cout<<"Payment done,Thank you.";
}
void findAviableroom(){
    int guest,date,month,year,type;
    cout<<setw(30)<<"find aviable room.\n";
    cout<<"How many guest is the reservation for:  ";
    cin>>guest;
    cout<<"what is the date of your arrival?\n";
    cout<<"date: ";
    cin>>date;
    cout<<"month: ";
    cin>>month;
    cout<<"year: ";
    cin>>year;
    roomtype(guest);
    cout<<"Please select room type: ";
    cin>>type;
}

int main(){
    checkCreditcard();
}