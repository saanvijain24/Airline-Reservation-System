// this is a nasic airline management system project in c++ that I am creating using basics concept of oops in c++ this projevt will help me enhance my understanding of c++

#include <iostream>
#include <fstream> //for file handing in c++
#include <iomanip> //for floating point values

using namespace std;

void mainMenu(); // creating this function globally cause we have to create a menu that will display on the screen and will be used many time in our code

class management
{
public:
    management()
    {
        mainMenu();
    }
};

class Details
{ // 1st functionality
public:
    static string name, gender;
    int phoneno, age;
    string add;
    static int cid;
    char arr[100];
    void information()
    {
        cout << "\n Enter The Customer ID : ";
        cin >> cid;
        cout << "\n Enter Your Name : ";
        cin >> name;
        cout << "\n Enter Your Age : ";
        cin >> age;
        cout << "\n Enter Your Address : ";
        cin >> add;
        cout << "\n Enter Your Gender : ";
        cin >> gender;
        cout << "\n Your Details Are Saved With Us !" << endl;
    }
};

// now i will create the registration class but first i will use some variables from details class into ticket class
int Details::cid;
string Details::name;
string Details::gender;

class Registration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightN[] = {"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};
        for (int i = 0; i < 6; i++)
        {
            cout << (i + 1) << ") flight to " << flightN[i] << endl;
        }
        // now i will ask user to input the number of flight they want to book
        cout << "\n WELCOME!....." << endl;
        cout << " Press the number of country you want to book flight for: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "----------Welcome To Dubai Emirates----------\n"
                 << endl;
            cout << "Your comfort is our first Priority! Enjoy Your Journey." << endl;
            cout << "Following are the flights: \n"
                 << endl;

            cout << "1. DUB -498 " << endl;
            cout << "\t30-06-2025 8:00AM 10hrs ₹14000/- " << endl;

            cout << "2. DUB -852 " << endl;
            cout << "\t02-07-2025 10:00AM 12hrs ₹19999/- " << endl;

            cout << "3. DUB -674 " << endl;
            cout << "\t10-07-2025 5:00PM 09hrs ₹17850/- " << endl;

            cout << "Select The flight you want to book : ";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 14000;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else if (choice1 == 2)
            {
                charges = 19999;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else if (choice1 == 3)
            {
                charges = 17850;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else
            {
                cout << "Invalid Input ---- Shifting back to main menu----" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;

        }
        case 2:
        {
            cout << "----------Welcome To Canadian Airlines ----------\n"
                 << endl;
            cout << "Your comfort is our first Priority! Enjoy Your Journey." << endl;
            cout << "Following are the flights: \n"
                 << endl;

            cout << "1. CA -591 " << endl;
            cout << "\t28-06-2025 01:00AM 20hrs ₹44000/- " << endl;

            cout << "2. CA -745 " << endl;
            cout << "\t04-07-2025 10:00PM 20hrs ₹24000/- " << endl;

            cout << "3. CA -984 " << endl;
            cout << "\t08-07-2025 04:00AM 22hrs ₹30000/- " << endl;

            cout << "Select The flight you want to book : ";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 44000;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else if (choice1 == 2)
            {
                charges = 24000;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else if (choice1 == 3)
            {
                charges = 30000;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else
            {
                cout << "Invalid Input ---- Shifting back to main menu----" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
        case 3:
        {
            cout << "----------Welcome To British Airways ----------\n"
                 << endl;
            cout << "Your comfort is our first Priority! Enjoy Your Journey." << endl;
            cout << "Following are the flights: \n"
                 << endl;

            cout << "1. BA -435 " << endl;
            cout << "\t26-06-2025 06:00AM 20hrs ₹36900/- " << endl;

            cout << "2. BA -352 " << endl;
            cout << "\t06-07-2025 09:06PM 20hrs ₹32000/- " << endl;

            cout << "3. BA -668 " << endl;
            cout << "\t09-07-2025 09:11AM 22hrs ₹26000/- " << endl;

            cout << "Select The flight you want to book : ";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 36900;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else if (choice1 == 2)
            {
                charges = 32000;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else if (choice1 == 3)
            {
                charges = 26000;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else
            {
                cout << "Invalid Input ---- Shifting back to main menu----" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
        case 4:
        {
            cout << "----------Welcome To American Airlines ----------\n"
                 << endl;
            cout << "Your comfort is our first Priority! Enjoy Your Journey." << endl;
            cout << "Following are the flights: \n"
                 << endl;

            cout << "1. AA -565 " << endl;
            cout << "\t26-06-2025 06:00AM 20hrs ₹36000/- " << endl;

            cout << "2. AA -520 " << endl;
            cout << "\t06-07-2025 09:06PM 20hrs ₹32000/- " << endl;

            cout << "3. AA -696 " << endl;
            cout << "\t09-07-2025 09:11AM 22hrs ₹26000/- " << endl;

            cout << "Select The flight you want to book : ";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 36000;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else if (choice1 == 2)
            {
                charges = 32000;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else if (choice1 == 3)
            {
                charges = 26000;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else
            {
                cout << "Invalid Input ---- Shifting back to main menu----" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
        case 5:
        {
            cout << "----------Welcome To Qantas Airlines ----------\n"
                 << endl;
            cout << "Your comfort is our first Priority! Enjoy Your Journey." << endl;
            cout << "Following are the flights: \n"
                 << endl;

            cout << "1. QA -435 " << endl;
            cout << "\t29-06-2025 06:00AM 12hrs ₹45600/- " << endl;

            cout << "2. QA -352 " << endl;
            cout << "\t03-07-2025 09:06PM 14hrs ₹44560/- " << endl;

            cout << "3. QA -668 " << endl;
            cout << "\t08-07-2025 09:11AM 12hrs ₹36539/- " << endl;

            cout << "Select The flight you want to book : ";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 45600;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else if (choice1 == 2)
            {
                charges = 44560;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else if (choice1 == 3)
            {
                charges = 36539;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else
            {
                cout << "Invalid Input ---- Shifting back to main menu----" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
        case 6:
        {
            cout << "----------Welcome To Europe Airlines ----------\n"
                 << endl;
            cout << "Your comfort is our first Priority! Enjoy Your Journey." << endl;
            cout << "Following are the flights: \n"
                 << endl;

            cout << "1. EA -201 " << endl;
            cout << "\t13-06-2025 06:00AM 20hrs ₹36900/- " << endl;

            cout << "2. EA -514 " << endl;
            cout << "\t02-07-2025 09:06PM 20hrs ₹32000/- " << endl;

            cout << "3. EA -147 " << endl;
            cout << "\t06-07-2025 09:11AM 22hrs ₹26000/- " << endl;

            cout << "Select The flight you want to book : ";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 36900;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else if (choice1 == 2)
            {
                charges = 32000;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else if (choice1 == 3)
            {
                charges = 26000;
                cout << "\n You have successfully booked the flight !!" << endl;
                cout << "You can go back to the main menu and fetch your tickets " << endl;
            }
            else
            {
                cout << "Invalid Input ---- Shifting back to main menu----" << endl;
                flights();
            }
            cout << "Press any key to go back to the main menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
        default:
        {
            cout << "Invalid Input! Shifting to the main menu" << endl;
            mainMenu();
         break;   
        }
        }
    }
};

float Registration::charges;
int Registration ::choice;

class Tickets : public Registration,public Details
{
public:
    void bill()
    {
         cout << "_____________ABC Airlines______________" << endl;
        cout << "_______________Tickets_________________" << endl;
        cout << "_______________________________________" << endl;
        cout << "Customer ID: " << Details::cid << endl;
        cout << "Customer Name: " << Details::name << endl;
        cout << "Customer Gender: " << Details::gender << endl;
        cout << "\tDescription" << endl << endl;
        string destination = " ";
        switch (Registration::choice) {
            case 1: destination = "Dubai"; break;
            case 2: destination = "Canada"; break;
            case 3: destination = "UK"; break;
            case 4: destination = "USA"; break;
            case 5: destination = "Australia"; break;
            case 6: destination = "Europe"; break;
        }
        cout << "Destination\t\t" << destination << endl;
        cout << "Flight cost:\t\t₹" << Registration::charges << endl;
    }

};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    // create structure/layout for the menu

    cout << "\t                      XYZ Airlines\n"<< endl;
    cout << "\t______________________Main Menu________________" << endl;
    cout << "\t_____________________________________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;
    // now we will create a sructure in which we will ask the user to press some button and select some functionalities

    cout << "\t|\t Press 1 to add Customer Details   \t|" << endl;
    cout << "\t|\t Press 2 for Flight Registration   \t|" << endl;
    cout << "\t|\t Press 3 for Ticket and Charges    \t|" << endl;
    cout << "\t|\t Press 4 to Exit                   \t|" << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;
    cout << "\t_____________________________________________________________" << endl;
    // take input from the user

    cout << "Enter the choice : ";
    cin >> lchoice;

    // we will make diffrent class for each functionality and to call them we will create some object of the classes
    Details d;
    Tickets t;
    Registration r;

    switch (lchoice)
    { // for above choice
    case 1:
    {
        cout << "_____________Customers______________" << endl;
        d.information();
        cout << "Press any key to go back to Main menu";
        cin >> back;
        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break; // case 1 ends
    }
    case 2:
    {
        cout << "_______Book a Flight using this system______" << endl;
        r.flights();

        break; // case 2 ends
    }

    case 3:
    {
        cout << "_________GET YOUR TICKET_______\n"
             << endl;
        
        cout << " Your ticket is printed ,  you can collect it \n"
             << endl;
        cout << "Press 1 to display your ticket ";
        cin >> back;
        if (back == 1)
        {
            t.bill();
            cout << "Press any key to go back to Main menu: ";
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        else
        {
            mainMenu();
        }
        break; // case 3 ends
    }

    case 4:
    {
        cout << "\n\n\t_____________Thank you!___________ " << endl;
        break;
    }
    default:
    {
        cout << "Invalid Input, Please try again!\n"
             << endl;
        mainMenu();
        break;
    }
    }
}

int main()
{
    management mobj;
    return 0;
}