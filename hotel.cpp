#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//สุ่มPackage
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

int main(){
}