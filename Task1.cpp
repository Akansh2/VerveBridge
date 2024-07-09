// #include<conio.h>
// #include<stdio.h>
// #include<iostream>
// using namespace std;

// class bank
// {
//     char name[100],add[100],y;
//     int balance, amount;
// public:
//     void open_account ();
//     void deposite_money();
//     void withdraw_money ();
//     void display_account();
// };
// void bank::open_account()
// {
//     system("cls");
//     cout<<"Enter full name ::";
//     cin.ignore();
//     cin.getline(name,100);
//     cout<<"Enter your Permanent addess ::";
//     cin.ignore();
//     cin.getline(add,100);
//     cout<<"what type of account you want to open saving(s) or current s(c)";
//     cin>>y;
//     cout<<"Enter amount for deposite ::";
//     cin>>balance;
//     cout<<"Your account is created ";

// }
// void bank::deposite_money()
// {
//     int a ;
//     cout<<"Enter how much money you want to deposit::";
//     cin>>a;
//     balance+=a;
//     cout<<"Your total deposit amount\n";
// }
// void bank::display_account()
// {
//     cout<<"Enter the name ::"<<name<<endl;
//     cout<<"Enterened your addees ::"<<add<<endl;
//     cout<<"Type of account that you open ::"<<y<<endl;
//     cout<<"Amount you deposite ::"<<balance<<endl;

// }
// void bank::withdraw_money()
// {
//     cout<<"withdeaw ::";
//     cout<<"Enter your amount for withdrawing ";
//     cin>>amount;
//     balance=balance-amount;
//     cout<<"Now your total amount is left ::"<<balance;
// }

// int main()
// {
//     int ch,x,n;
//     bank obj;
//     system("cls");
//     system("color 0A");
//     do
//     {
//     cout<<"01)Open account \n";
//     cout<<"02)Deposit money \n";
//     cout<<"03)WithDraw money \n";
//     cout<<"04)Display account\n";
//     cout<<"05)Exit\n";
//     cout<<"Please sir, select the option from above ";
//     cin>>ch;

//     switch(ch)
//     {
//         case 1:"01)Open account \n";
//         obj.open_account ();
//         break;
//         case 2:"02)Deposit money \n";
//         obj.deposite_money();
//         break;
//         case 3:"03)WithDraw money \n";
//         obj.withdraw_money ();
//         break;
//         case 4:"04)Display account\n";
//         obj.display_account();
//         break;
//         case 5:
//             if(ch==5)
//             {
//                cout<< "exit";
//             }
//         default:
//             cout<<"This is not exit please try again ";

//     }
//     cout<<"\n do you want to select next step then please press::y\n";
//     cout<<"if you want to exit then please press:: N ";
//     x=getch();
//     if(x=='n' || x=='N')
//     cout<<"exit";
//     }
//     while (x=='y' || x=='Y');


//  getch();
//  return 0;




// }
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

// Class definition for bank
class bank
{
    char name[100], add[100], y;
    int balance, amount;
public:
    // Member functions
    void open_account();     // Function to open a new account
    void deposite_money();   // Function to deposit money
    void withdraw_money();   // Function to withdraw money
    void display_account();  // Function to display account details
};

// Function to open a new account
void bank::open_account()
{
    system("cls"); // Clear the console screen
    cout<<"Enter full name ::";
    cin.ignore(); // Ignore the newline character left in the buffer
    cin.getline(name, 100); // Read the full name
    cout<<"Enter your Permanent address ::";
    cin.ignore(); // Ignore the newline character left in the buffer
    cin.getline(add, 100); // Read the address
    cout<<"What type of account you want to open saving(s) or current(c): ";
    cin>>y; // Read the type of account
    cout<<"Enter amount for deposit ::";
    cin>>balance; // Read the initial deposit amount
    cout<<"Your account is created ";
}

// Function to deposit money
void bank::deposite_money()
{
    int a;
    cout<<"Enter how much money you want to deposit::";
    cin>>a; // Read the deposit amount
    balance += a; // Add the deposit amount to the balance
    cout<<"Your total deposit amount\n";
}

// Function to display account details
void bank::display_account()
{
    cout<<"Enter the name ::"<<name<<endl; // Display the name
    cout<<"Entered your address ::"<<add<<endl; // Display the address
    cout<<"Type of account that you open ::"<<y<<endl; // Display the type of account
    cout<<"Amount you deposit ::"<<balance<<endl; // Display the balance
}

// Function to withdraw money
void bank::withdraw_money()
{
    cout<<"Withdraw ::";
    cout<<"Enter your amount for withdrawing ";
    cin>>amount; // Read the withdrawal amount
    balance = balance - amount; // Subtract the withdrawal amount from the balance
    cout<<"Now your total amount is left ::"<<balance;
}

int main()
{
    int ch, x, n;
    bank obj;
    system("cls"); // Clear the console screen
    system("color 0A"); // Set the console text color to green

    // Menu-driven program
    do
    {
        // Display menu options
        cout<<"01) Open account \n";
        cout<<"02) Deposit money \n";
        cout<<"03) Withdraw money \n";
        cout<<"04) Display account\n";
        cout<<"05) Exit\n";
        cout<<"Please select an option from above: ";
        cin>>ch; // Read the user's choice

        switch(ch)
        {
            case 1:
                obj.open_account(); // Call open_account function
                break;
            case 2:
                obj.deposite_money(); // Call deposite_money function
                break;
            case 3:
                obj.withdraw_money(); // Call withdraw_money function
                break;
            case 4:
                obj.display_account(); // Call display_account function
                break;
            case 5:
                cout<< "exit";
                break;
            default:
                cout<<"This is not a valid option, please try again ";
        }

        // Prompt user to select the next step
        cout<<"\nDo you want to select the next step then please press 'y'\n";
        cout<<"If you want to exit then please press 'N' ";
        x = getch(); // Read the user's choice
        if(x == 'n' || x == 'N')
            cout<<"exit";
    }
    while (x == 'y' || x == 'Y'); // Continue the loop if the user chooses 'y'

    getch();
    return 0;
}
