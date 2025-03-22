#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void mainMenu();
class Management{
    public:
    Management(){
        mainMenu();
    }
};
class Details{
    public:
    static string name,gender;
    int phone_number;
    int age;
    string add;
    static int cId;
    char arr[100];
    void information(){
        cout<<"\nEnter the customer ID";
        cin>>cId;
        cout<<"\nEnter the  name: ";
        cin>>name;
        cout<<"\nEnter the  gender: ";
        cin>>gender;
        cout<<"\nEnter the  phone number: ";
        cin>>phone_number;
        cout<<"\nEnter the  age: ";
        cin>>age;
        cout<<"your details are saved with us \n";
    }
};
int Details::cId;
string Details::name;
    string Details::gender;
class registration
{
    public:
    static int choice;
    int choice1;
    int back;
    static float charges;
    void flights(){
        string flightN[]={"Dubai","Cananda","UK","USA","Australia","Europe"};
        for(int i=0;i<6;i++){
            cout<< (i+1) << ".flight to " << flightN[i]<<endl;
        }
        cout<<"\nWelcome to the Airlines!"<<endl; 
        cout<<"press the number of country of which you want to book the flight: ";
        cin>>choice;
        switch(choice){
            case 1:
            {
                cout<<"____________Welcome to Dubai Emirates______\n"<<endl;
                cout<<"Your confor is my first priority. Enjoy the Journey"<<endl;
                cout<<"following are the flight\n"<<endl;

                cout<<"1. DUB-498"<<endl;

                cout<<"\t08-01-2022 8:00AM 10hrs Rs.140000"<<endl;
                cout<<"1. DUB-696"<<endl;

                cout<<"\t09-01-2022 8:00AM 13hrs Rs.150000"<<endl;
                cout<<"1. DUB-785"<<endl;

                cout<<"\t10-01-2022 8:00AM 14hrs Rs.1444000"<<endl;

                cout<<"\n Select the flight you want to book:";

                cin>>choice1;
                if(choice1==1){
                    charges=140000;
                    cout<<"\n you have booked the flight to dubai-498"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;

                }
                else if(choice1==2){
                    charges=150000;
                    cout<<"\n you have booked the flight to dubai-696"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==3){
                    charges=1444000;
                    cout<<"\n you have booked the flight to dubai-785"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"\nInvalid choice. Try again."<<endl;
                    flights();
                }
                cout<<"press any key to main menu"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }

            }
            case 2:
            {

                cout<<"____________Welcome to canadian Airlines______\n"<<endl;
                cout<<"Your confor is my first priority. Enjoy the Journey"<<endl;
                cout<<"following are the flight\n"<<endl;

                cout<<"1. cun-100"<<endl;

                cout<<"\t08-01-2022 12:00AM 12hrs Rs.140"<<endl;
                cout<<"1. cun-200"<<endl;

                cout<<"\t19-01-2022 8:00AM 13hrs Rs.150"<<endl;
                cout<<"1. cun-300"<<endl;

                cout<<"\t10-01-2022 09:00AM 14hrs Rs.144"<<endl;

                cout<<"\n Select the flight you want to book:";

                cin>>choice1;
                if(choice1==1){
                    charges=140;
                    cout<<"\n you have booked the flight to cun-100"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==2){
                    charges=150;
                    cout<<"\n you have booked the flight to cun-200"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==3){
                    charges=144;
                    cout<<"\n you have booked the flight to cun-300"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid choice. Try again."<<endl;
                    flights();
                }
                cout<<"press any key to main menu"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }

            }
            case 3:
            {

                cout<<"____________Welcome to UK Airlines______\n"<<endl;
                cout<<"Your confor is my first priority. Enjoy the Journey"<<endl;
                cout<<"following are the flight\n"<<endl;

                cout<<"1. UK-10"<<endl;

                cout<<"\t08-01-2022 12:00AM 12hrs Rs.240"<<endl;
                cout<<"1. UK-20"<<endl;

                cout<<"\t19-01-2022 8:00AM 13hrs Rs.350"<<endl;
                cout<<"1. UK-30"<<endl;

                cout<<"\t10-01-2022 09:00AM 14hrs Rs.444"<<endl;

                cout<<"\n Select the flight you want to book:";

                cin>>choice1;
                if(choice1==1){
                    charges=240;
                    cout<<"\n you have booked the flight to UK-10"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;

                }
                else if(choice1==2){
                    charges=250;
                    cout<<"\n you have booked the flight to UK-20"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==3){
                    charges=444;
                    cout<<"\n you have booked the flight to UK-30"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid choice. Try again."<<endl;
                    flights();
                }
                cout<<"press any key to main menu"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }

            }
            case 4:
            {

                cout<<"____________Welcome to USA Airlines______\n"<<endl;
                cout<<"Your confor is my first priority. Enjoy the Journey"<<endl;
                cout<<"following are the flight\n"<<endl;

                cout<<"1. USA-101"<<endl;

                cout<<"\t08-01-2022 12:00AM 12hrs Rs.2240"<<endl;
                cout<<"1. USA-201"<<endl;

                cout<<"\t19-01-2022 8:00AM 13hrs Rs.3250"<<endl;
                cout<<"1. USA-301"<<endl;

                cout<<"\t10-01-2022 09:00AM 14hrs Rs.4244"<<endl;

                cout<<"\n Select the flight you want to book:";

                cin>>choice1;
                if(choice1==1){
                    charges=2240;
                    cout<<"\n you have booked the flight to USA-101"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;

                }
                else if(choice1==2){
                    charges=3250;
                    cout<<"\n you have booked the flight to USA-201"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==3){
                    charges=4244;
                    cout<<"\n you have booked the flight to USA-301"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid choice. Try again."<<endl;
                    flights();
                }
                cout<<"press any key to main menu"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }

            }
            case 5:
            {

                cout<<"____________Welcome to Australian  Airlines______\n"<<endl;
                cout<<"Your confor is my first priority. Enjoy the Journey"<<endl;
                cout<<"following are the flight\n"<<endl;

                cout<<"1. AUS-111"<<endl;

                cout<<"\t08-01-2022 12:00AM 12hrs Rs.2240"<<endl;
                cout<<"1. AUS-211"<<endl;

                cout<<"\t19-01-2022 8:00AM 13hrs Rs.3250"<<endl;
                cout<<"1. AUS-301"<<endl;

                cout<<"\t10-01-2022 09:00AM 14hrs Rs.4244"<<endl;

                cout<<"\n Select the flight you want to book:";

                cin>>choice1;
                if(choice1==1){
                    charges=2240;
                    cout<<"\n you have booked the flight to AUS-111"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;

                }
                else if(choice1==2){
                    charges=3250;
                    cout<<"\n you have booked the flight to AUS-201"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==3){
                    charges=4244;
                    cout<<"\n you have booked the flight to AUS-301"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid choice. Try again."<<endl;
                    flights();
                }
                cout<<"press any key to main menu"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }

            }
            case 6:
            {

                cout<<"____________Welcome to the European Airlines______\n"<<endl;
                cout<<"Your confor is my first priority. Enjoy the Journey"<<endl;
                cout<<"following are the flight\n"<<endl;

                cout<<"1. EUP-111"<<endl;

                cout<<"\t08-01-2022 12:00AM 12hrs Rs.2240"<<endl;
                cout<<"1. EUP-211"<<endl;

                cout<<"\t19-01-2022 8:00AM 13hrs Rs.3250"<<endl;
                cout<<"1. EUP-301"<<endl;

                cout<<"\t10-01-2022 09:00AM 14hrs Rs.4244"<<endl;

                cout<<"\n Select the flight you want to book:";

                cin>>choice1;
                if(choice1==1){
                    charges=2240;
                    cout<<"\n you have booked the flight to EUP-111"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;

                }
                else if(choice1==2){
                    charges=3250;
                    cout<<"\n you have booked the flight to EUP-201"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==3){
                    charges=4244;
                    cout<<"\n you have booked the flight to EUP-301"<<endl;
                    cout<<"you can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid choice. Try again."<<endl;
                    flights();
                }
                cout<<"press any key to main menu"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }

            }
            default: {
                cout<<"invalid input,shifting you to the main menu"<<endl;
                mainMenu();
                break;
            }  
        }
    }    
    
};

float registration::charges;
int registration::choice;

class ticket:public registration, public  Details{
    public: 
         void Bill(){
            string destination="";
            ofstream outf("recodrs.txt");
            {
            outf<<"__________________XYZ Airline__________"<<endl;
            outf<<"__________________Ticket_______________"<<endl;
            outf<<"_______________________________________"<<endl;

            outf<<"Customer ID:"<<Details::cId<<endl;
            outf<<"Customer Name:"<<Details::name<<endl;
            outf<<"Customer Gender:"<<Details::gender<<endl;
            outf<<"\tDescription"<<endl<<endl;
            if(registration::choice==1){
                destination="Dubai";
            }
            else if(registration::choice==2){
                destination="Canada";
            }
            else if(registration::choice==3){
                destination="UK";
            }
            else if(registration::choice==4){
                destination="USA";
            }
            else if(registration::choice==5){
                destination="Australia";
            }
            else if(registration::choice==6){
                destination="Europe";
            }
            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Flight cost:\t\t"<<registration::charges<<endl;
         }
         outf.close();

         }
         void dispBill(){
            ifstream ifs("records.txt");
            {
                if(!ifs){
                    cout<<"File error!"<<endl;
                }
                while(!ifs.eof()){
                    ifs.getline(arr,100);
                    cout<<arr<<endl;
                }
                

            }
            ifs.close(); 

         }

};
void mainMenu(){
    int lchoice;
    // int schoice;
    int back;
    
    cout<<"\t                 XYZ Airline \n" << endl;
    cout<<"\t_________________Main Menu_________________" << endl;
    cout<<"\t___________________________________________" << endl;
    cout<<"\t\t\t\t\tt\t|" << endl;
    
    cout<<"\t|\t Press 1 to add the Customer Details      \t|"<<endl;
    cout<<"\t|\t Press 2 to add the flight Registration   \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges           \t|"<<endl;
    cout<<"\t|\t Press 4 Exist                            \t|" << endl;
    cout<<"\t|\t\t\t\t\t|" << endl;
    
    cout<<"\n\tEnter your choice: ";
    cin>>lchoice;
    
    Details d;
    registration r;
    ticket t; 
    switch(lchoice){
        case 1:{
         cout<<"____________Customer_______\n"<<endl;
         d.information();
         cout<<"press any key to go to main menu";
         cin>>back;
         if(back==1){
             mainMenu();
         }
         else{
             mainMenu();
         }
         break;    
        }
        case 2:{
            cout<<"__________Book the flight using the system________\n"<<endl;
            r.flights();
            break;
        }
        case 3:{
            cout<<"___________Get your Ticket_____________\n"<<endl;
            t.Bill();
            cout<<"now you can get your Ticket \n"<<endl;
            cout<<"press 1 to display your Ticket";
            cin>>back;
         if(back==1){
            t.dispBill();
            cout<<"press any key to go to main menu";
            cin>>back;
             if(back==1){
                 mainMenu();
             }
             else{
                 mainMenu();
             }
         }else{
             mainMenu();
             }
             break;
         }

            
        case 4:
              {
                cout<<"\n\n\t_______Thank _you____"<<endl;
              }
            default:{
                cout<<"\n\tInvalid choice. Please try again.\n";
                mainMenu();
            }
    }

}


int main(){
    Management Mob;
    return 0;
}
