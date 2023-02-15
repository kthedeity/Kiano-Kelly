//Kiano Kelly 10/19/20
/* A program to determine if they are eligible to particpate in the intake process for soroities and fraternities at their University. */
//libary
#include <iostream>
#include <fstream>
using namespace std;
//main fuction 
int main()
{
  //read in data 
ifstream inData; 
// open input file using file-variable
 inData.open("studentinfo.txt"); 
  // read in credit hours and gpa
double gpa;
double credithours;
cout << " Please enter your gpa and credit hours to see if you are eligible to join sorority or fraernity at your Unveristy? " << endl << endl;
inData >> gpa >> credithours;
  // Print out eligible or ineligible to participate 
  if (gpa>=2.8 && credithours>=30)
  {
    cout << " You are eligible to participate! ";
  }
  else if (gpa>=2.8 && credithours <=30) 
  {
    cout << " You are ineligible. Credit hours got to be equal to or higher than 30. ";
  }
  else if (gpa<=2.8 && credithours>=30) 
  {
    cout << " You are not ineligible. Gpa got to be equal to or higher than 2.8. ";
  }
  else if (gpa<=2.8 && credithours <=30) 
  {
    cout << " You are ineligible to participate. The gpa must be greater than or equal to 2.8 and the number of credit hours has to be greater than or equal to 30. ";
   }
  else 
  {
    cout << "Invalid gpa and or credit hours";
  }
  inData.close();
  return 0;
}

