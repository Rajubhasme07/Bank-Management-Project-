#include <iostream>
#include<windows.h>
using namespace std;

class Bank
{
    private:

    string name,addre,acctype,mobno,pincode,pin2,pin1,pin;

    int accno,cd,i=0,bar1=137,bar2=146,exit;

    float accbal;

    public:

    void createacc()
    {

        system("cls");

        cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t   ||\t\tEnter Your Full Name:\t      ||"<<endl;

        cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t\t->";cin>>name;

        cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t  ||        Enter your Account No:\t      ||"<<endl;

        cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t\t->";cin>>accno;

        cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t  ||        Enter your Mobile Number:\t      ||"<<endl;

        cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t\t->";cin>>mobno;
        cout<<endl;

        cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t  ||        Enter your Address:\t               ||"<<endl;

        cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t\t->";cin>>addre;
        cout<<endl;

         cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t  ||        Enter Your Pin Code:\t      ||"<<endl;

        cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t\t->";cin>>pincode;

        system("cls");

        cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t  ||          CREATE ACCOUNT PIN               ||"<<endl;
        cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<endl;

        cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t   ||\t     Enter The Pin:  \t\t      ||"<<endl;
        cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t  ->";cin>>pin;

       k:cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t   ||\t    Enter Confirm Pin:  \t      ||"<<endl;
        cout<<"\t\t   ---------------------------------------------"<<endl;
        cout<<"\t\t  ->";cin>>pin2;

        system("cls");

       cout<<"\n\n\n\t\t Wait a Second Your Transaction In Process";
       cout<<"\n\n\t\t\t\t";
       for(i=0;i<3;i++)
        {

        cout<<" * * *";
       Sleep(140);
       cout<<"\r";
       cout<<"\t\t\t\t";

        }

       system("cls");

        if(pin==pin2)

        {

        cout<<endl;

        cout<<"\t\t\t\t\t Your Transaction Completed Successfully!!!"<<endl;
        cout<<"\t\t\t\t\t Your Pin Set Successfully!!!"<<endl;

        }
        else
        {
        cout<<"\t\t---------------------------------------------"<<endl;
        cout<<"\t\t||                                          ||"<<endl;
        cout<<"\t\t||    ??YOU ENTER WRONG CONFIRM PIN ??      ||"<<endl;
        cout<<"\t\t||                                          ||"<<endl;
        cout<<"\t\t---------------------------------------------"<<endl;

        goto k;
        cout<<endl;

        }

        cout<<endl;
        system("cls");

        cout<<"\t\t\tNote* Type Saving or Current In Account Type"<<endl;
        cout<<endl;

        cout<<"\t\t\t---------------------------------------------"<<endl;
        cout<<"\t\t\t||           Enter Account Type:\t   ||"<<endl;
        cout<<"\t\t\t---------------------------------------------"<<endl;
        cout<<"\t\t\t->";cin>>acctype;


        if(acctype=="saving"|| acctype=="SAVING")
        {



        cout<<"\t\t\t---------------------------------------------"<<endl;
        cout<<"\t\t\t|\t\tFeatures                     |"<<endl;
        cout<<"\t\t\t---------------------------------------------"<<endl;
        cout<<"\t\t\t| * Available at all branches                |"<<endl;
        cout<<"\t\t\t|                                            |"<<endl;
        cout<<"\t\t\t| * Maximum Balance/amount No upper limit    |"<<endl;
        cout<<"\t\t\t|                                            |"<<endl;
        cout<<"\t\t\t| * No cheque Book Facility available.       |"<<endl;
        cout<<"\t\t\t|                                            |"<<endl;
        cout<<"\t\t\t| * Minimum balance amount Nil               |"<<endl;
        cout<<"\t\t\t|                                            |"<<endl;
        cout<<"\t\t\t| * Basic Rupay ATM-CUM-DEBIT CARD WILL      |"<<endl;
        cout<<"\t\t\t|          -BE ISSUED.                       |"<<endl;
        cout<<"\t\t\t---------------------------------------------"<<endl;
        cout<<endl;

        cout<<"\t\t\t->";cout<<"Press Any No For continued"<<endl;
        cout<<"\t\t\t->";cin>>exit;

        cout<<"\n\n\n\t\tWait a Second Your Transaction is Process"<<endl;;
        cout<<"\n\n\t\t\t\t";

        for(i=0;i<3;i++)
        {

        cout<<" * * *";
        Sleep(200);
        cout<<"\r";
        cout<<"\t\t\t\t";
        }
        cout<<endl;
        cout<<endl;
        system("cls");

        cout<<"\n\n\n\n\n\n\n\t\t\t\tTransaction Successfully Completed!!!"<<endl;
        cout<<"\t\t\t----------------------------------------------------"<<endl;
        cout<<"\t\t\t      YOUR ACCOUNT CREATED SUCCESSFULLY!!!!!!!!!";
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"\t\t\t->";cout<<"*Press Any no to exit"<<endl;
        cout<<"\t\t\t->";cin>>exit;

        system("cls");
        cout<<endl;

        }

        else
{
        cout<<"\n\n\n\t\t\t\t Wait a Second Your Transaction is Process"<<endl;
        cout<<"\n\n\t\t\t\t";

        for(i=0;i<3;i++)
        {

        cout<<" * * *";

        Sleep(140);

        cout<<"\r";
        cout<<"\t\t\t\t";

        }

        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"\t\t\t---------------------------------------------"<<endl;
        cout<<"\t\t\t|\tACCOUNT CREATED SUCCESSFULLY!!!     |"<<endl;
        cout<<"\t\t\t---------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;

        cout<<"\t\t\t->";cout<<"Press Any No For continued"<<endl;
        cout<<"\t\t\t->";cin>>exit;
        system("cls");
        }
        }

  void setname()
  {

    cout<<"Enter Your Full Name:"<<endl;
        cin>>name;
  }
   void setaccno()
   {
       cout<<"Enter your Account No:"<<endl;
        cin>>accno;
    }
    void setmono()
    {
      cout<<"Enter your Mobile Number:"<<endl;
    cin>>mobno;
    }
    void resetpin()
    {
        cout<<"PLEASE ENTER YOUR NEW PIN"<<endl;
              cin>>pin;
    }

    void banlanceinfo()
    {

        system("cls");
        k:cout<<"Enter the PIN"<<endl;
        cin>>pin1;





    cout<<"\n\n\n\t\t WAIT A SECOND YOUR TRANSACTION PROCCESS";
    cout<<"\n\n\t\t\t\t";
    for(i=0;i<20;i++)
    cout<<(char)bar1;
    cout<<"\r";
    cout<<"\t\t\t\t";
    for(int i=0;i<20;i++)
    {
      cout<<(char)bar2;
      Sleep(100);
    }

        if(pin1==pin)
        {
system("cls");
      cout<<endl;
      cout<<"------------------------------------------------"<<endl;
      cout<<"|\nAccount Balance is:"<<"|||||||||"<<accbal<<"||"<<endl;
      cout<<"------------------------------------------------"<<endl;

        cout<<endl;
                      cout<<"Press any no to exit"<<endl;
       cin>>exit;
       system("cls");
        }
        else
        {
            system("cls");
            cout<<"Please Enter Right pin"<<endl;
            goto k;
        }

    }
    void widraw()
    {
        float withdraw;

        system("cls");

    k:cout<<"\t\t\t\t------------------------------------------------"<<endl;
      cout<<"\t\t\t\t||\t\t  Enter the PIN:\t\t||"<<endl;
      cout<<"\t\t\t\t------------------------------------------------"<<endl;
        cin>>pin1;

        cout<<"\n\n\n\t\t WAIT A SECOND YOUR TRANSACTION PROCCESS";
    cout<<"\n\n\t\t\t\t";
    for(i=0;i<3;i++)
        {
        cout<<" * * *";
        Sleep(140);
    cout<<"\r";
    cout<<"\t\t\t\t";
        }
        if(pin1==pin)
        {

            cout<<endl;
            system("cls");
        cout<<"Enter Amount to widtdraw:";
        cin>>withdraw;
        if(accbal>=withdraw)
        {
        accbal=accbal-withdraw;
           cout<<"\n\n\n\t\t WAIT A SECOND YOUR TRANSACTION PROCCESS";
    cout<<"\n\n\t\t\t\t";
   for(i=0;i<3;i++)
        {
        cout<<" * * *";
        Sleep(140);
    cout<<"\r";
    cout<<"\t\t\t\t";
        }

        cout<<"\n\t\t\t\tTransaction Successfull!!!!"<<endl;
        cout<<"\n";
        cout<<"\n";
        cout<<endl;
        cout<<"\t\t\t\t\tCurrent account balance is:"<<accbal<<endl;
                      cout<<"Press any no to exit"<<endl;
       cin>>exit;
system("cls");
        }
        else
        {
            cout<<"current Account has insufficient balance:"<<endl;
            cout<<endl;
            cout<<endl;
                                  cout<<"Press any no to exit"<<endl;
       cin>>exit;

        }
        }
        else
        {
            system("cls");
            cout<<"Please Enter Right pin"<<endl;
            goto k;
        }

    }
    void depocash()
    {
        float depo;

        system("cls");
        k:cout<<"Enter the PIN"<<endl;
        cin>>pin1;

        cout<<"\n\n\n\t\t WAIT A SECOND YOUR TRANSACTION PROCCESS";
    cout<<"\n\n\t\t\t\t";
    for(i=0;i<3;i++)
        {
        cout<<" * * *";
        Sleep(140);
    cout<<"\r";
    cout<<"\t\t\t\t";
        }
        if(pin1==pin)
        {
            system("cls");
            cout<<endl;

       cout<<"Enter amount to Deposit"<<endl;
       cin>>depo;
       accbal=accbal+depo;
       cout<<"\n\n\n\t\t WAIT A SECOND YOUR TRANSACTION PROCCESS";
    cout<<"\n\n\t\t\t\t";
for(i=0;i<3;i++)
        {
        cout<<" * * *";
        Sleep(140);
    cout<<"\r";
    cout<<"\t\t\t\t";
        }
        system("cls");
       cout<<"\n\n\t\t\t\t\t\Transaction successfully complited!!!!!"<<endl;

         cout<<"\t\t\t\t==================================================="<<endl;

       cout<<"\t\t\t\t|| Your Current Balance is\t  ||"<<accbal<<"Rs"<<"\t ||"<<endl;
       cout<<"\t\t\t\t==================================================="<<endl;
       cout<<"Press any no to exit"<<endl;
       cin>>exit;
       system("cls");
        }
        else
        {

            cout<<endl;
system("cls");
            cout<<"Please Enter Right pin"<<endl;
            cout<<endl;
            goto k;
        }

    }
    void shdetails()
    {
        system("cls");

        k:cout<<"Enter the PIN"<<endl;
        cin>>pin1;
              cout<<"\n\n\n\t\t WAIT A SECOND YOUR TRANSACTION PROCCESS";
    cout<<"\n\n\t\t\t\t";
    for(i=0;i<3;i++)
        {
        cout<<" * * *";
        Sleep(140);
    cout<<"\r";
    cout<<"\t\t\t\t";
        }


        if(pin1==pin)
        {
            system("cls");
    cout<<"------------------------------------------"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Name"<<name<<endl;
    cout<<endl;
    cout<<"Account No:"<<accno<<endl;
    cout<<endl;
    cout<<"Address:"<<addre<<endl;
    cout<<endl;
    cout<<"Mobile NO:"<<mobno<<endl;
    cout<<endl;

    cout<<"------------------------------------------"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Press any no to exit"<<endl;
    cin>>exit;
    system("cls");
        }
        else
        {

            cout<<endl<<"Please Enter Right pin"<<endl;
            goto k;
        }

    }
    Bank()
    {
      string name="Unknown",addre="Unknown";
     float accbal=0,depo=0;
     int accno=0,mobno=0;
    }

    void Loancal()
    {
        int loanamt,loantrm,totamt,emi;
        int loantype;
        system("cls");
        cout<<endl;
        cout<<"Which type of loan do you want?"<<endl;
        cout<<"Press 1.HOME LOAN"<<endl;
        cout<<"Press 2.EDUCATION LOAN"<<endl;
        cin>>loantype;



    cout<<"\n\n\n\t\t WAIT A SECOND YOUR TRANSACTION PROCCESS";
    cout<<"\n\n\t\t\t\t";
for(i=0;i<3;i++)
        {
        cout<<" * * *";
        Sleep(140);
    cout<<"\r";
    cout<<"\t\t\t\t";
        }
        if(loantype==1)
        {
            system("cls");
            int homeint=7;
            cout<<"\nCalculate Your Home Loan"<<endl;
            cout<<"Note- Intrest Rates starting @ 7.0 with Flat Processing Fees.Pre-qualify minutes."<<endl;
            cout<<endl;
            cout<<"Enter the loan amount"<<endl;
            cin>>loanamt;
            cout<<endl;

            cout<<"Enter the Loan Term Years"<<endl;

            cin>>loantrm;
           cout<<endl;

            totamt=(loanamt)+((loantrm*loanamt*homeint)/100.00);


         emi=loantrm*12;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<" Total Intrest will pay on the loan amount is"<<" "<<(totamt-loanamt)<<" "<<"Rs"<<" "<<endl;

            cout<<endl;

            cout<<" "<<"Total amount will pay with intrest is:"<<"  "<<totamt<<" "<<"Rs"<<"  "<<endl;

            cout<<endl;

cout<<"  Emi to be pay:"<<"  "<<(totamt-loanamt)/emi<<"  "<<"Rs"<<"Per Month In between the "<<loantrm<<"  "<<"Years of Time"<<" "<<endl;
 cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"Press any no to exit"<<endl;
    cin>>exit;
system("cls");
        }
else if(loantype==2)
{
    int stuintre=8.0;
    int tot;
    system("cls");
    cout<<endl;
  cout<<"Note- Intrest Rates starting @ 8.0 %* with Flat Processing Fees.Pre-qualify minutes."<<endl;
            cout<<endl;
            cout<<"Enter the loan amount";
            cout<<endl;
            cin>>loanamt;
            cout<<endl;

            cout<<"Enter the Loan Term Years";
            cout<<endl;
            cin>>loantrm;
            cout<<endl;

            totamt=(loanamt*loantrm)+(loantrm*loanamt*(stuintre/100.00));

          emi=loantrm*12;


            cout<<" Total Intrest will pay on the loan amount is"<<" "<<(totamt-loanamt)-loanamt<<" "<<"Rs"<<" "<<endl;

            cout<<endl;

            cout<<endl;
            cout<<""<<"Total amount will pay with intrest is:"<<"  "<<loanamt-(loanamt-(totamt-loanamt))<<" "<<"Rs"<<"  "<<endl;
            cout<<endl;


            cout<<endl;
cout<<"  Emi to be pay:"<<"  "<<(totamt-loanamt)/emi<<"  "<<"Rs"<<"Per Month In between the "<<loantrm<<"  "<<"Years of time\n";
            cout<<endl;
            cout<<"Press any no to exit"<<endl;
    cin>>exit;
            system("cls");

}


    }
    void editacc()
    {
        int upchoice;
        system("cls");
        cout<<endl;
cin>>pin;
        k:cout<<"Enter the PIN"<<endl;
        cin>>pin1;
        cout<<"\n\n\n\t\t WAIT A SECOND YOUR TRANSACTION PROCCESS";
    cout<<"\n\n\t\t\t\t";
for(i=0;i<3;i++)
        {
        cout<<" * * *";
        Sleep(140);
    cout<<"\r";
    cout<<"\t\t\t\t";
        }
        if(pin1==pin)
        {
            system("cls");
        d:cout<<"What do you want to Edit ? "<<endl;
        cout<<"Press 1.Mobile NO"<<endl;
        cout<<"Press 2.Account No"<<endl;
        cout<<"Press 3.Account Name"<<endl;
        cout<<"Press 4.Pin change"<<endl;
        cin>>upchoice;
        if(upchoice==1)
        {
            system("cls");
            cout<<"YOUR OLD MOBILE NO IS:"<<" "<<mobno<<endl;
            setmono();
            cout<<"Transaction Completed successfully"<<endl;
        cout<<"Press any no to exit"<<endl;
    cin>>exit;
            system("cls");
        }
        else if(upchoice==2)
        {
            system("cls");
            cout<<"YOUR OLD ACCOUNT NO IS:"<<" "<<accno<<endl;
            setaccno();
            cout<<"Transaction Completed successfully"<<endl;
            cout<<"Press any no to exit"<<endl;
           cin>>exit;
            system("cls");
        }
        else if(upchoice==3)
        {
           system("cls");
           cout<<"YOUR OLD NAME IS:"<<" "<<name<<endl;
            setname();
            cout<<"Transaction Completed successfully"<<endl;
            cout<<"Press any no to exit"<<endl;
           cin>>exit;
            system("cls");
        }
        else if(upchoice==4)
        {
          system("cls");
          cout<<"PLEASE ENTER YOUR OLD PIN"<<endl;
          cin>>pin1;
          if(pin1==pin)
          {
        resetpin();
    cout<<"\n\n\n\t\t WAIT A SECOND YOUR TRANSACTION PROCCESS";
    cout<<"\n\n\t\t\t\t";
for(i=0;i<3;i++)
        {
        cout<<" * * *";
        Sleep(140);
    cout<<"\r";
    cout<<"\t\t\t\t";
        }
    cout<<"YOUR PIN RESET SUCCESSFULLY"<<endl;
    cout<<"Press any no to exit"<<endl;
           cin>>exit;
            system("cls");

          }
        }
        else
        {
            system("cls");
            cout<<"Enter Correct Choice"<<endl;
            goto d;
        }


        }
        else
        {
            system("cls");
            cout<<"Please Enter Right pin"<<endl;
            goto k;
        }
    }

};
int main()
{
    int ch;
    Bank b1;
    system("COLOR 0D");
    cout<<"\t   \t||===================================================||"<<endl;
    cout<<"\t   \t||                   Welcome to Fbi                  ||"<<endl;
    cout<<"\t   \t||===================================================||"<<endl;
    cout<<endl;
    cout<<endl;
    while(ch!=8)
   {
    cout<<"\t\t|||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"\t\t||***********Enter Your preference*********||"<<endl;
    cout<<"\t\t||        1.Create Bank Account            ||"<<endl;
    cout<<"\t\t||        2.Deposit Cash                   ||"<<endl;
    cout<<"\t\t||        3.Withdraw cash                  ||"<<endl;
    cout<<"\t\t||        4.check Bank Balance             ||"<<endl;
    cout<<"\t\t||        5.Show Details                   ||"<<endl;
    cout<<"\t\t||        6.Calculate Loan                 ||"<<endl;
    cout<<"\t\t||        7.Edit Details                   ||"<<endl;
    cout<<"\t\t||        0.Exit                           ||"<<endl;
    cout<<"\t\t|||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                          cin>>ch;


    switch(ch)
    {
    case 1:
          b1.createacc();
          break;
    case 2:
       b1.depocash();
         break;
    case 3:
        b1.widraw();
        cout<<endl;
        break;
    case 4:

        b1.banlanceinfo();
        break;
    case 5:
        b1.shdetails();
        break;
    case 6:
        b1.Loancal();
        break;
    case 7:
        b1.editacc();
        break;

    case 0:
            exit(0);

    }
    }
    return 0;
}
