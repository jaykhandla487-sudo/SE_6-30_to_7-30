#include <iostream>
#include <ctime>
using namespace std;

class ATM
{
private:
    int pin;
    double balance;

public:

    
    ATM()
    {
        pin = 12345;
        balance = 20000;   
    }

    
    void welcome()
    {
        time_t now = time(0);
        char* dt = ctime(&now);

        cout<<"==============================\n";
        cout<<"        WELCOME TO ATM\n";
        cout<<"==============================\n";
        cout<<"Current Date & Time: "<<dt<<endl;

        cout<<"Press 1 to Access Account\n";
        cout<<"Press 2 for Help\n";
    }

    
    void help()
    {
        cout<<"\nATM ACCOUNT STATUS\n";
        cout<<"You must have correct pin to access account.\n";
        cout<<"Contact bank representative if problem occurs.\n";
        cout<<"Thank you!\n\n";
    }

    
    bool login()
    {
        int input_pin;

        cout<<"Enter ATM PIN (Only one attempt): ";
        cin>>input_pin;

        if(input_pin == pin)
        {
            cout<<"Login Successful\n";
            return true;
        }
        else
        {
            cout<<"Incorrect PIN. No more attempts allowed.\n";
            return false;
        }
    }

    
    void deposit()
    {
        double amount;

        cout<<"Present Balance: "<<balance<<endl;
        cout<<"Enter amount to deposit: ";
        cin>>amount;

        balance += amount;

        cout<<"New Balance: "<<balance<<endl;
    }

    
    void withdraw()
    {
        double amount;

        cout<<"Enter amount to withdraw: ";
        cin>>amount;

        if(amount > balance)
        {
            cout<<"Insufficient Balance\n";
        }
        else
        {
            balance -= amount;
            cout<<"Withdraw Successful\n";
            cout<<"Remaining Balance: "<<balance<<endl;
        }
    }

    
    void check_balance()
    {
        cout<<"Your Balance: "<<balance<<endl;
    }

    
    void menu()
    {
        int choice;

        do
        {
            cout<<"\n===== ATM MENU =====\n";
            cout<<"1. Deposit\n";
            cout<<"2. Withdraw\n";
            cout<<"3. Balance Inquiry\n";
            cout<<"0. Exit\n";

            cout<<"Enter choice: ";
            cin>>choice;

            switch(choice)
            {
                case 1: deposit(); break;
                case 2: withdraw(); break;
                case 3: check_balance(); break;
                case 0: cout<<"Thank you for using ATM\n"; break;
                default: cout<<"Invalid choice\n";
            }

        }while(choice != 0);
    }
};

int main()
{
    ATM atm;
    int choice;

    atm.welcome();

    cout<<"Enter choice: ";
    cin>>choice;

    if(choice == 1)
    {
        if(atm.login())
        {
            atm.menu();
        }
    }
    else if(choice == 2)
    {
        atm.help();
    }
    else
    {
        cout<<"Invalid option\n";
    }

    return 0;
}
