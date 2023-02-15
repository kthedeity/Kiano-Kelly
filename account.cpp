// Kiano Kelly 
// date 10/3/2021
/* The program simulates banking Transactions */
//libary function
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void Makewithdrawal(float,float&); // Declare the prototype
void Makedeposit(float, float&);
int main()
{
  ifstream indata,indata2;
  char process;
  int numtransac =0;
  float money, firstBalance;
  ofstream outdata;
  indata.open("transactions.txt");
  indata2.open("account.txt");
  outdata.open("statement.txt");
  if(!indata)
  {
    cout << " Can't open input file. ";
    return 1;
  }
  indata >> process >> money;
  indata2 >> firstBalance;
  while(indata)
 {
   if(process == 'W')
   {
    Makewithdrawal(money, firstBalance);
    numtransac ++;
    outdata << " Transaction " << numtransac << ":" << endl;
    outdata << " The amount of the deposit; $ " << money << endl;
    outdata << " Current balance after the deposit: $ " << firstBalance << endl;
   }
   else
   {
    Makedeposit(money, firstBalance);
    numtransac ++;
    outdata << " Transaction " << numtransac << ":" << endl;
    outdata << " The amount of the deposit: $ " << money << endl;
    outdata << " Current balance after the deposit: $ " << firstBalance << endl;
   }
  indata >> process >> money;
}
 outdata << numtransac << " Total Transcations " << endl;
 outdata << firstBalance << " The ending Balance " << endl;
 return 0;
}
void Makewithdrawal(float money, float& firstBalance) // void
{
  if(firstBalance < 0.00)
  firstBalance = firstBalance - 30.00;
  firstBalance = firstBalance - money;
}
void Makedeposit(float money, float& firstBalance) //void
{
  firstBalance = firstBalance + money;
}