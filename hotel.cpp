#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include<iomanip>

using namespace std;

//สุ่มPackage
string randompackage(string);

int main(){
    cout<<setw(30)<<"Welcome to TPC hotel.\n";
    cout<<setw(60)<<"For your best experience We have create an online service.\n";
    cout<<setw(30)<<"Is there anything I can help you?\n";
    cout<<setw(20)<<"1.Find aviable room."<<setw(20)<<"2.Check out";
}

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

string checkout(){
    
}