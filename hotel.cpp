#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <windows.h>
using namespace std;	

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void checkCreditcard(string name){
	string a;
    cout<<"Please press card number: ";
    cin>>a; 
    int c = a.size();
    while(c != 16){
        cout<<"Seem like you have pressed wrong number.Please press again: ";
        cin>>a;
        c = a.size();
    }
    cout<<endl;
    cout<<"---------------------------------------------\n";
    cout<<"\t\t Reciept.\n";
    cout<<"---------------------------------------------\n";
    cout<<"Card owner \t\t\t: "<<name<<endl;
    cout<<"Card number \t\t\t: "<<a;
    cout<<endl;
    cout<<"\nPayment done,Thank you.";
}

double addition(int checkin)
{
    double bed, breakfast,total = 0;

    cout << "\nNo. of extra bed(1 bed = 100 THB/night): ";
    cin >> bed;
    cout << endl;
    cout << "No. of package for breakfast(150 THB/package): ";
    cin >> breakfast;
    cout << endl;

    bed = bed * 100 * checkin;
    breakfast = breakfast * 150 * checkin;
    total=total+bed+breakfast;

    cout<<"Extra bed: "<<bed<<" THB.\n";
    cout<<"Breakfast package: "<<breakfast<<" THB.\n";
    cout<<"Total: "<<total<<" THB."; 
    cin.get();
	return total;
}


void detail(double sum, double addf, string name, string phonenum, int room,string roomSelect, int people, int day1, int month1, int year1, int day2, int month2, int year2, int days)
{

    double tax = 0;
    double total = 0;
    tax = (sum + addf) * 0.07;
    total = tax + sum + addf;

    string room_type;
    if (room == 1)
    {
        room_type = "Standard";
    }
    else if (room == 2)
    {
        room_type = "Deluxe";
    }
	

    cout << "\t\t\t\t";
      for(int i = 1;i<12;i++){
    		 SetConsoleTextAttribute(h,i);
    	cout<<"**";
}
	   
     SetConsoleTextAttribute(h,15);
        cout<<endl;
    cout << "\t\t\t\t      Booking detail" << endl;
    cout << "\t\t\t\t";
      for(int i = 1;i<12;i++){
    		 SetConsoleTextAttribute(h,i);
    	cout<<"**";
}
	    SetConsoleTextAttribute(h,15);
    cout << "\n\t\t\t\t";
       cout<<endl;
          SetConsoleTextAttribute(h,15);
    cout << "Name : " << name << endl;
    cout << "Phone Number : " << phonenum << endl
         << endl;
    cout << "Room \t\t\t: " << room_type << endl;
    cout << "Room No.\t\t: " <<roomSelect<<endl;
    cout << "guest \t\t\t: " << people << " people" << endl;
    cout << "Check in date\t\t: " << day1 << "/" << month1 << "/" << year1 << endl;
    cout << "Check out date\t\t: " << day2 << "/" << month2 << "/" << year2 << endl;
    cout << "Duration Stayed \t: " << days << endl
         << endl;
    cout << "Room Price\t\t: " << sum << " THB" << endl;
    cout << "Additional fees \t: " << addf << " THB" << endl;
    cout << "Service tax (7%)\t: " << tax << " THB" << endl;
    cout << "Final Total \t\t: " << total << " THB" << endl;
     for(int i = 1;i<16;i++){
    		 SetConsoleTextAttribute(h,i);
    	cout<<"--";
    }
	cout<<endl;
}

double date(int day1, int month1, int year, int day2, int month2, int year4, int room)
{
    int i;
    double difference;
    month1 -= 1;
    month2 -= 1;
    struct tm a = {0, 0, 0, day1, month1, year};
    struct tm b = {0, 0, 0, day2, month2, year4};
    time_t x = mktime(&a);
    time_t y = mktime(&b);
    double days;
    if (x != (std::time_t)(-1) && y != (time_t)(-1))
    {
        double difference = difftime(y, x) / (60 * 60 * 24);
        days = difference;
    }

    cout << days << endl;
    return days;
}

int main()
{	
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    string name;
    string phonenum;
    string add;
  	string standard[] = {"s1","s2","s3","s4","s5"};
	string deluxe[] = {"d1","d2","d3","d4","d5"};
	string roomSelect;
    int room;
    int people;
    int day1, month1, year1;
    int day2, month2, year2;
    int i, year, year4;
start:
	 SetConsoleTextAttribute(h,14);
	cout<<"\n\t\t\t\t\t      ------------------------------";
     SetConsoleTextAttribute(h,15);
    cout<<"\n\t\t\t\t\t      |                             |\n";
    cout << "\t\t\t\t\t      |    Welcome to TPC hotel.    |";
     SetConsoleTextAttribute(h,14);
    cout<<"\n\t\t\t\t\t      -------------------------------\n";
     SetConsoleTextAttribute(h,11);
    cout << "\n\t\t\t\t\t\tDue to covid-19 situation.";
    cout << "\n\t\t\t\t\t    We have create an online service .\n";
    SetConsoleTextAttribute(h,10);
    cout<<"\n\t\t\t\t\t\t";
    for(int i = 1;i<12;i++){
    		 SetConsoleTextAttribute(h,i);
    	cout<<"**";
	}
    SetConsoleTextAttribute(h,15);
    cout << "\n\t\t\t\t\t\t HOTEL BOOKING SERVICE ";
    cout << "\n\t\t\t\t\t\t      * MAIN MENU *";
     SetConsoleTextAttribute(h,10);
    cout << "\n\t\t\t\t\t\t";
     for(int i = 1;i<12;i++){
    		 SetConsoleTextAttribute(h,i);
    	cout<<"**";
}
	    SetConsoleTextAttribute(h,15);

    cout << "\n\nEnter the check in date:\n"
         << endl;
    ;
    cin >> day1 >> month1 >> year1;
    year = year1 - 1900;
    system("cls");
	
	SetConsoleTextAttribute(h,15);

    cout << day1 << "/" << month1 << "/" << year1 << endl;
    cin.ignore();
    cout<< endl;
    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout<< endl;
    cout << "Enter your phone Number: " << endl;
    cin >> phonenum;
    cout<< endl;
    cout << "How many guest is the reservation for:  " << endl;
    cin >> people;
    cout<< endl;
    cout << "Choose room type" << endl;
    cout << "Press '1' for standard room (1300 THB/night)" << endl;
    cout << "Press '2' for deluxe room (3200 THB/night)" << endl;
    cin >> room;
    cout<< endl;
     if(room == 1){
    	cout << "Standard room aviable: ";
    	for(i = 0; i < 5; i++){
    		if(standard[i] != "0"){
    			cout << standard[i] + " ";
			}
    		
		}
		cout << " " << endl;
    	cout << "Please select room: " ;
    	cin >> roomSelect;
    	for(i = 0; i < 5; i++){
    		if(roomSelect == standard[i]){
    			standard[i] = "0";
			}
		}
	}
	 if(room == 2){
    	cout << "Deluxe room aviable: ";
    	for(i = 0; i < 5; i++){
    		if(deluxe[i] != "0"){
    			cout << deluxe[i] + " ";
			}
    		
		}
		cout << " " << endl;
    	cout << "Please select room: " ;
    	cin >> roomSelect;
    	for(i = 0; i < 5; i++){
    		if(roomSelect == deluxe[i]){
    			deluxe[i] = "0";
			}	
		}
	}
	cout<< endl;
    cout << "Enter your check out date: " << endl;
    cin >> day2 >> month2 >> year2;
    year4 = year2 - 1900;
    double days = date(day1, month1, year, day2, month2, year4, room);
    double sum = 0;
    double addf = 0;


    if (people <= 2 && people > 0)
    {
        if (room == 1)
        {
            for (i = 1; i <= days; i++)
            {
                sum += 1300;
            }
        }

        else if (room == 2)
        {
            for (i = 1; i <= days; i++)
            {
                sum += 3200;
            }
        }
    }
    else if (people <= 4 && people > 2)
    {
        if (room == 1)
        {
            for (i = 1; i <= days; i++)
            {
                sum += 1300;
            }
        }

        else if (room == 2)
        {
            for (i = 0; i <= days; i++)
            {
                sum += 3200;
            }
        }
    }
    else if (people <= 6 && people > 4)
    {
        if (room == 1)
        {
            for (i = 1; i <= days; i++)
            {
                sum += 1300;
            }
        }

        else if (room == 2)
        {
            for (i = 1; i <= days; i++)
            {
                sum += 3200;
            }
        }
    }
    cout << sum << endl;

    system("cls");
    cout << "Do you want an addition of extra bed or any other services ? Type yes or no" << endl;
    cin >> add;
    if (add == "yes")
    {
        addf = addition(days);
    }
    cout << addf << endl;
    system("cls");
    detail(sum, addf, name, phonenum, room,roomSelect, people, day1, month1, year1, day2, month2, year2, days);
    string choice;
    SetConsoleTextAttribute(h,15);
    cout << "Please select your payment method (1.cash / 2.Credit card)" << endl;
    cin >> choice;
    cout<<endl;
    if (choice == "1")
    {
        cout<<"Booking done,Thank you.";
    }
    else if (choice == "2")
    {
        checkCreditcard(name);
    }
    string more;
    cout<<"\nDo you want to book another room?(yes/no): ";
    cin>>more;
    if(more == "YES" || more == "yes"){
    	goto start;
	}else{
		cout<<"Wish you have the best vacation.\n";
		return 0; 
	}	
}
