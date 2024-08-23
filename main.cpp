#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void mainMenu();

class Management
{
    public:

    Management()
    {
        mainMenu();
    }
};

class Details{
    public:
    static string name, gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information()
    {
        cout<<"\nEnter the customer ID : ";
        cin>>cId;
        cout<<"\nEnter the name : ";
        cin>>name;
        cout<<"\nEnter the age : ";
        cin>>age;
        cout<<"\nAddress : ";
        cin>>add;
        cout<<"\nGender : ";
        cin>>gender;
        cout<<"\t\t\t\t__________________________________"<<endl;
        cout<<"\t\t\t\t| Your details are saved with us |"<<endl;
        cout<<"\t\t\t\t__________________________________"<<endl<<endl;
    }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration{
    public:
    static int ch;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightN[]={"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};

        for(int a=0;a<6;a++)
        {
            cout<<(a+1)<<". Flight to "<<flightN[a]<<endl;
        }

        cout<<"\nWelcome to the Airlines!"<<endl;
        cout<<"Press the number of the country of what you want to book the flight : ";
        cin>>ch;

        switch (ch)
        {
            case 1:
            {
                cout<<"\n______________Welcome to Dubai Emirates_______________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights :  \n"<<endl;

                cout<<"1. DUB - 498"<<endl;
                cout<<"\t08-01-2024 8:00AM 10hrs Rs. 14000"<<endl;
                cout<<"2. DUB - 658"<<endl;
                cout<<"\t09-01-2024 4:00AM 12hrs Rs. 10000"<<endl;
                cout<<"3. DUB - 408"<<endl;
                cout<<"\t11-01-2024 11:00AM 11hrs Rs. 9000"<<endl;

                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=14000;
                    cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
                    cout<<"You can go back to menu and take the tickect"<<endl;
                }
                else if(choice1==2)
                {
                    charges=10000;
                    cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
                    cout<<"You can go back to menu and take the tickect"<<endl;
                }
                else if(choice1==3)
                {
                    charges=9000;
                    cout<<"\nYou have successfully booked the flight DUB - 408"<<endl;
                    cout<<"You can go back to menu and take the tickect"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl<<endl;
                    flights();
                }
                cout<<"\nPress any key to go back to Main Menu : ";
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 2:
            {
                cout<<"\n______________Welcome to Canadian Airlines_______________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights : \n"<<endl;

                cout<<"1. CA - 198"<<endl;
                cout<<"\t09-01-2024 2:00AM 20hrs Rs. 31000"<<endl;
                cout<<"2. CA - 518"<<endl;
                cout<<"\t12-01-2024 2:00AM 23hrs Rs. 29000"<<endl;
                cout<<"3. CA - 115"<<endl;
                cout<<"\t14-01-2024 12:00AM 21hrs Rs. 40000"<<endl;

                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=31000;
                    cout<<"\nYou have successfully booked the flight CA - 198"<<endl;
                    cout<<"You can go back to menu and take the tickect"<<endl;
                }
                else if(choice1==2)
                {
                    charges=29000;
                    cout<<"\nYou have successfully booked the flight CA - 518"<<endl;
                    cout<<"You can go back to menu and take the tickect"<<endl;
                }
                else if(choice1==3)
                {
                    charges=40000;
                    cout<<"\nYou have successfully booked the flight CA - 115"<<endl;
                    cout<<"You can go back to menu and take the tickect"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl<<endl;
                    flights();
                }
                cout<<"\nPress any key to go back to Main Menu : ";
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 3:
            {
                cout<<"\n______________Welcome to UK Airways_______________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights : \n"<<endl;

                cout<<"1. UK - 798"<<endl;
                cout<<"\t12-01-2024 10:00AM 14hrs Rs. 44000"<<endl;

                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=44000;
                    cout<<"\nYou have successfully booked the flight UK - 798"<<endl;
                    cout<<"You can go back to menu and take the tickect"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl<<endl;
                    flights();
                }
                cout<<"\nPress any key to go back to Main Menu : ";
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 4:
            {
                cout<<"\n______________Welcome to US Airways_______________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights : \n"<<endl;

                cout<<"1. US - 567"<<endl;
                cout<<"\t10-01-2024 3:00AM 13hrs Rs. 37000"<<endl;
                cout<<"2. US - 418"<<endl;
                cout<<"\t13-01-2024 9:00AM 11hrs Rs. 28000"<<endl;
                cout<<"3. US - 108"<<endl;
                cout<<"\t15-01-2024 11:00AM 10hrs Rs. 24000"<<endl;

                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=37000;
                    cout<<"\nYou have successfully booked the flight US - 567"<<endl;
                    cout<<"You can go back to menu and take the tickect"<<endl;
                }
                else if(choice1==2)
                {
                    charges=28000;
                    cout<<"\nYou have successfully booked the flight US - 418"<<endl;
                    cout<<"You can go back to menu and take the tickect"<<endl;
                }
                else if(choice1==3)
                {
                    charges=24000;
                    cout<<"\nYou have successfully booked the flight US - 108"<<endl;
                    cout<<"You can go back to menu and take the tickect"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl<<endl;
                    flights();
                }
                cout<<"\nPress any key to go back to Main Menu : ";
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 5:
            {
                cout<<"\n______________Welcome to Australia Airlines_______________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights : \n"<<endl;

                cout<<"1. AS - 167"<<endl;
                cout<<"\t09-01-2024 4:00AM 20hrs Rs. 47000"<<endl;
                cout<<"2. AS - 448"<<endl;
                cout<<"\t14-01-2024 7:00AM 14hrs Rs. 38000"<<endl;
                cout<<"3. AS - 578"<<endl;
                cout<<"\t16-01-2024 10:00AM 13hrs Rs. 44000"<<endl;

                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=47000;
                    cout<<"\nYou have successfully booked the flight AS - 167"<<endl;
                    cout<<"You can go back to menu and take the tickect"<<endl;
                }
                else if(choice1==2)
                {
                    charges=38000;
                    cout<<"\nYou have successfully booked the flight AS - 448"<<endl;
                    cout<<"You can go back to menu and take the tickect"<<endl;
                }
                else if(choice1==3)
                {
                    charges=44000;
                    cout<<"\nYou have successfully booked the flight AS - 578"<<endl;
                    cout<<"You can go back to menu and take the tickect"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl<<endl;
                    flights();
                }
                cout<<"\nPress any key to go back to Main Menu : ";
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 6:
            {
                cout<<"\n______________Welcome to Europe Airlines_______________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights : \n"<<endl;

                cout<<"1. EU - 167"<<endl;
                cout<<"\t05-01-2024 5:00AM 23hrs Rs. 25000"<<endl;
                cout<<"2. EU - 678"<<endl;
                cout<<"\t08-01-2024 2:00AM 12hrs Rs. 32000"<<endl;
                cout<<"3. EU - 231"<<endl;
                cout<<"\t12-01-2024 6:00AM 11hrs Rs. 23000"<<endl;

                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=25000;
                    cout<<"\nYou have successfully booked the flight EU - 167"<<endl;
                    cout<<"You can go back to menu and take the tickect"<<endl;
                }
                else if(choice1==2)
                {
                    charges=32000;
                    cout<<"\nYou have successfully booked the flight EU - 678"<<endl;
                    cout<<"You can go back to menu and take the tickect"<<endl;
                }
                else if(choice1==3)
                {
                    charges=23000;
                    cout<<"\nYou have successfully booked the flight EU - 231"<<endl;
                    cout<<"You can go back to menu and take the tickect"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl<<endl;
                    flights();
                }
                cout<<"\nPress any key to go back to Main Menu : ";
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }

            default:
            {
                cout<<"Invaild input, shifting you to the main menu !"<<endl<<endl;
                mainMenu();
                break;
            }
        }
    }
};

float registration::charges;
int registration::ch;

class ticket : public registration, Details{
    public:
    void Bill()
    {
        string destination = "";
        ofstream outf("records.txt");
        {
            outf<<"\n_________________ABC Airlines_________________"<<endl;
            outf<<"___________________Ticket_____________________"<<endl;
            outf<<"______________________________________________"<<endl<<endl;

            outf<<"Customer ID : "<<Details::cId<<endl;
            outf<<"Customer Name : "<<Details::name<<endl;
            outf<<"Customer Gender : "<<Details::gender<<endl;
            outf<<"\n\tDescription "<<endl<<endl;

            if(registration::ch==1)
            {
                destination="Dubai";
            }
            else if(registration::ch==2)
            {
                destination="Canada";
            }
            else if(registration::ch==3)
            {
                destination="Uk";
            }
            else if(registration::ch==4)
            {
                destination="USA";
            }
            else if(registration::ch==5)
            {
                destination="Australia";
            }
            else if(registration::ch==6)
            {
                destination="Europe";
            }

            outf<<"Destination :\t"<<destination<<endl;
            outf<<"Flight cost :\t"<<registration::charges<<endl;
        }
        outf.close();
    }
    void disBill()
    {
        ifstream ifs("records.txt");
        {
            if(!ifs)
            {
                cout<<"File error!"<<endl;
            }
            while(!ifs.eof())\
            {
                ifs.getline(arr, 100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }
};

void mainMenu()
{
    int lchoice, schoice, back;

    cout<<endl;
    cout<<"\t                       ABC Airlines \n"<<endl;
    cout<<"\t_________________________Main Menu_______________________"<<endl;

    cout<<"\t_________________________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t|"<<endl;

    cout<<"\t|\t Press 1 to add the Customer Details     \t|"<<endl;
    cout<<"\t|\t Press 2 for Flight Registration         \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges          \t|"<<endl;
    cout<<"\t|\t Press 4 to Exit                         \t|"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t|"<<endl;
    cout<<"\t_________________________________________________________"<<endl<<endl;

    cout<<"Enter the choice : ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
        case 1:
        {
            cout<<"\n_______________CUSTOMERS_______________\n"<<endl;
            d.information();
            cout<<"Press any key to go back to Main Menu : ";
            cin>>back;

            if(back==1)
            {
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;
        }
        case 2:
        {
            cout<<endl;
            cout<<"_______________BOOK A FLIGHT USING THIS SYSTEM_______________\n"<<endl;
            r.flights();
            break;
        }
        case 3:
        {
            cout<<"_______________GET YOUR TICKET_______________\n"<<endl;
            t.Bill();
            cout<<"Your tickect is printed, you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket : ";

            cin>>back;
            if(back==1)
            {
                t.disBill();
                cout<<"Press any key to go back to Main Menu : ";
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            else{
                mainMenu();
            }
            break;
        }
        case 4:
        {
            cout<<"_______________Thank You_______________\n"<<endl;
            exit(0);
            break;
        }
        default:
        {
            cout<<"Invalid Input, Please try again! \n"<<endl;
            // mainMenu();
            break;
        }
    }
}
int main(){
    Management Mobj;
    return 0;
}