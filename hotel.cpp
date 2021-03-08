#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

//เช็คบัตรเครดิต(บัต)
void checkCreditcard(){
    string a;
    cout<<"Please press card number: ";
    cin>>a;
    int b = a.size();
    while(b != 13){
        cout<<"Seem like you have pressed wrong number.Please press again: ";
        cin>>a;
        b = a.size();
    }
    cout<<"Payment done,Thank you.";
}

//บริการเสริม(แชม)
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

//บอกรายละเอียดการจอง(ภู)
void detail(double sum, double addf, string name, string address, string phonenum, int room, int people, int day1, int month1, int year1, int day2, int month2, int year2, int days)
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

    cout << "\t\t\t\t*************************\n"
         << endl;
    cout << "\t\t\t\t      Booking detail" << endl;
    cout << "\n\t\t\t\t*************************" << endl
         << endl;
    cout << "Name : " << name << endl;
    cout << "Phone Number : " << phonenum << endl
         << endl;
    cout << "Room \t\t\t: " << room_type << endl;
    cout << "guest \t\t\t: " << people << " people" << endl;
    cout << "Check in date\t\t: " << day1 << "/" << month1 << "/" << year1 << endl;
    cout << "Check out date\t\t: " << day2 << "/" << month2 << "/" << year2 << endl;
    cout << "Duration Stayed \t: " << days << endl
         << endl;
    cout << "Room Price\t\t: " << sum << " THB" << endl;
    cout << "Additional fees \t: " << addf << " THB" << endl;
    cout << "Service tax (7%)\t: " << tax << " THB" << endl;
    cout << "Final Total \t\t: " << total << " THB" << endl;
    cout<<"---------------------------------------------" << endl;
}

//คิดจำนวนวันที่อยู่(ภู)
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
        cout << ctime(&x);
        cout << ctime(&y);
        cout << "difference = " << difference << " days" << endl;
        days = difference;
    }

    cout << days << endl;
    return days;
}

int main()
{
    string name;
    string address;
    string phonenum;
    string add;
    int room;
    int people;
    int day1, month1, year1;
    int day2, month2, year2;
    int i, year, year4;
start:
    cout << "\n\t\t\t\t   Welcome to TPC hotel.";
    cout << "\n\t\t\t\tDue to covid-19 situation.";
    cout << "\n\t\t\t     We have create an online service .\n";
    cout << "\n\t\t\t\t*************************";
    cout << "\n\t\t\t\t HOTEL BOOKING SERVICE ";
    cout << "\n\t\t\t\t      * MAIN MENU *";
    cout << "\n\t\t\t\t*************************";

    cout << "\n\nEnter the check in date:\n\n"
         << endl;
    ;
    cin >> day1 >> month1 >> year1;
    year = year1 - 1900;
    system("cls");

    cout << day1 << "/" << month1 << "/" << year1 << endl;
    cin.ignore();
    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Enter your phone Number: " << endl;
    cin >> phonenum;
    cout << "How many guest is the reservation for:  " << endl;
    cin >> people;
    cout << "Choose room type" << endl;
    cout << "Press '1' for standard room (1300 THB/night)" << endl;
    cout << "Press '2' for deluxe room (3200 THB/night)" << endl;
    cin >> room;
    cout << "Enter your check out date" << endl;
    cin >> day2 >> month2 >> year2;
    year4 = year2 - 1900;
    double days = date(day1, month1, year, day2, month2, year4, room);
    double sum = 0;
    double addf = 0;

    //คำนวณราคา(แชม)
    if (people <= 2 && people > 0)
    {
        if (room == 1)
        {
            for (i = 2; i <= days; i++)
            {
                sum += 1300;
            }
        }

        else if (room == 2)
        {
            for (i = 2; i <= days; i++)
            {
                sum += 3200;
            }
        }
    }
    else if (people <= 4 && people > 2)
    {
        if (room == 1)
        {
            for (i = 2; i <= days; i++)
            {
                sum += 1300;
            }
        }

        else if (room == 2)
        {
            for (i = 2; i <= days; i++)
            {
                sum += 3200;
            }
        }
    }
    else if (people <= 6 && people > 4)
    {
        if (room == 1)
        {
            for (i = 2; i <= days; i++)
            {
                sum += 1300;
            }
        }

        else if (room == 2)
        {
            for (i = 2; i <= days; i++)
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
    detail(sum, addf, name, address, phonenum, room, people, day1, month1, year1, day2, month2, year2, days);
    string choice;
    cout << "Please select you payment method (1.cash / 2.Credit card)" << endl;
    cin >> choice;
    if (choice == "1")
    {
        cout<<"Booking done,Thank you.";
        return 0;
    }
    else if (choice == "2")
    {
        checkCreditcard();
    }
}