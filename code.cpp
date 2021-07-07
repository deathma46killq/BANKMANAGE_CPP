/*       TITLE:PROGRAM TO CREATE BANK MANAGEMENT SYSTEM
         LANGUAGE:C++.
         AUTHOR:SUJAL VISHWAKARMA (student in fy diploma).
         INSTA-ID:@hey_sujal.

*/

#include<iostream>
#include<string>   
using namespace std;


float bankbalance=20000.00;   //default bank balance
string name;             //name of user.
int accno,tracc;               //account number & tranferingaccount number.
float tr, with,dep;     //transfered withdraw and deposited amount




 void interface();   //interface of a program.
 int list();        // list of choices.
 void deposit();      //deposit.
 void transfer();     //tranfering money
 void withdraw();      //withdrawing money
 void check();         //checking details about account


int main()
{
    interface();

    while(1)       //creating infinity loop to repeat the list
    {



    switch(list())           //for calling list and choices
    {
    case 1:
     deposit();
     break;
     case 2:
      transfer();
      break;

      case 3:
      withdraw();
      break;

      case 4:
      check();
      break;

      case 5:
      break;


      default:
      cout<<"                      INVALID CHOICE:";
     
      

  }
}


    return 0;
}
void interface()    
{
cout<<"                    ``````````````````````````````````\n";
cout<<"                    ``````````````````````````````````\n";
cout<<"                    `            SUJAL'S             `\n";
cout<<"                    `             BANK               `\n";
cout<<"                    `                                `\n";
cout<<"                    `Your money Is our responsiblity `\n";
cout<<"                    ` -----------------------------  `\n";
cout<<"                    ` -----------------------------  `\n\n\n";

cout<<"                            ENTER YOUR NAME :\n";
cin>>name;
cout<<"\n";

cout<<"                       ENTER YOUR ACCOUNT NUMBER :\n";
cin>>accno;
cout<<"\n";


}
int list()            //list definetion
{
  int ch;
cout<<"                             1. DEPOSIT\n";  
cout<<"                             2. TRANSFER\n";
cout<<"                             3. WITHDRAW\n";
cout<<"                             4. CHECK DETAILS\n";
cout<<"                             5. EXIT\n";

cout<<"                           enter your choice:\n";
cin>>ch;
return ch;

}
void deposit()      //deposit definition
{
cout<<"              enter the amount you want to deposit"<<endl;
   cin>>dep;
   bankbalance=bankbalance+dep;
cout<<"              You have successfully deposited "<<dep<<"RS . in your account";
  

}
void transfer()    // transfer definintion
{
  
cout<<"             enter the which account you want to transfer:"<<endl;
cin>>tracc;

cout<<"                   enter the amount you want to transfer: \n";
if (tr>bankbalance)
{
  cout<<"                       ERROR-YOU DONT HAVE ENOUGH MONEY\n";
 
}
else
{
  cin>>tr;
  bankbalance=bankbalance-tr;
  cout<<"Your "<<tr<<"RS. is succesfully transferred to:"<<tracc<<"\n";
 
}

}
void withdraw()   //withdraw definition
{
  cout<<"                enter the amount you want withdraw:\n";
  if (with>bankbalance)
  {
cout<<"                     ERROR!- you dont have enough money\n";
 
  }
  else
  {
    cin>>with;
    bankbalance=bankbalance-with;
cout                    <<with<<"RS. is withdraw successfully\n";

  }
  
}
void check()    //check details definition
{
 cout<<"                            ````CHECK DETAILS``````\n\n";
 cout<<"                             | NAME:        |"<<name<<"|\n";
 cout<<"                             | ACC.NO:      |"<<accno<<"|\n";
 cout<<"                             | BANKBALANCE: |"<<bankbalance<<"|\n";
 cout<<"                             | AMM.TRANSFER:|"<<tr<<"|\n";
 cout<<"                             | AMM.WITHDRAW:| "<<with<<"|\n";
 cout<<"                             |AMM.DEPOSITED:| "<<dep<<"|\n\n\n\n";
 
};
