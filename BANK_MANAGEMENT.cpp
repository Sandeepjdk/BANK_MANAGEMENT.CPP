
#include<iostream>//HEADER FILES
#include<string>
  using namespace std;
  class BANK//CLASS
  {
      char nm[100],add[100],y;// DATA MEMBER
      int balance;
  public:
      void open_account();
      void deposit_money();//FUNCTION NO RETURN NO ARGUMENT
      void withdrawal_money();
      void display_account();
  };
  void BANK :: open_account()//DEFINE FIRST FUNCTION  UNDER CLASS
  {
   cout<<"Enter your name \n:";
   cin.ignore();
   cin.getline(nm,100);
   cout<<"Enter your address \n :";
   cin.ignore();
   cin.getline(add,100);
   cout<<" what type of account you want to open saving and current :\n";
   cin>>y;
   cout<<"Enter the amount for deposit :\n";
   cin>>balance;
  }
  void BANK :: deposit_money()
  {
      int bal;
      cout<<"Enter the amount for deposit :\n";
      cin>> bal;
      balance+=bal;
      cout<<"Total amount  :"<<balance;
  }
  void BANK :: withdrawal_money()//DEFINE SECOND FUNCTION UNDER CLASS
  {
      int bala;
      cout<<"Enter  the amount for withdrawal :\n";
      cin>>bala;
      balance-=bala;
      cout<<"Total amount : \n"<<balance;
  }
  void BANK :: display_account()//DEFINR THIRD FUNCTION WITH CLASS
  {
      cout<<"YOUR NAME :"<<nm;
      cout<<"\nYOUR ADDRESS :"<<add;
      cout<<"\nTYPE OF ACCOUNT YOU WANT TO OPEN :"<<y;
      cout<<"\nNOW YOUR TOTAL BALANCE IS :"<<balance;//NO ANY ERROE
  }
  int main()// MY MAIN FUNCTION
  {
      BANK obj;//OBJ IS OBJECT FOR CLASS BANK
      int ch;
      char again;//DATA MEMBER
      do
      {
      cout<<"\n\n\t";
      cout<<"1.Open account\n\t";
      cout<<"2.Deposit money\n\t";//UDER MANU
      cout<<"3.Withdrawal money\n\t";
      cout<<"4.Display account\n\t";
      cout<<"Exit \n";
      cout<<"\n select option from above :";
      cin>>ch;
      switch(ch)//USING SWITCH CASE
      {
      case 1:
        obj.open_account();
          break;
      case 2:
        obj.deposit_money();
        break;
      case 3:
        obj.withdrawal_money();
        break;
      case 4:
        obj.display_account();
        break;
        }
          cout<<"do you want to continue (y/n) :";//USING DO WHILE LOOP FOR Y AND N;
          cin>>again;
      }while(again=='y'||again=='Y');
      return 0;
  }
  //END OF PROGRAM
  // LETS GO TO RUN;
