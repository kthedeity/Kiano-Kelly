/*Program demonstrates the usage of arrays using integers*/
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
void GetNumbers(int[], int);   //function reads in the numbers into an array
void Reverse(const int[], int);  //function prints the numbers in reverse
void Cube(const int[], int);  //function prints the numbers cubed

int main() {
  int numbers[10];  //array of 10 integers
  
//function calls
GetNumbers(numbers, 10);
Reverse(numbers, 10);
Cube(numbers, 10);
 
 return 0;
}
/***********function getnumbers ********/
void GetNumbers(int values[], int)
{
 ifstream inFile;
  //open the data inFile
  inFile.open("integers.txt");
  if(!inFile)
  {
    cout << "Error: Data file not found" << endl;
    exit(1);
  }
//read in numbers and store in the array
 for (int x=0; x<10;x++)
  inFile >> values[x];
}
/***** Function Reverse*****/
void Reverse(const int values[], int num)
{
//print the numbers in reverse of the order read in
cout << "These are the numbers in reverse" << endl;
for (int x = num-1; x>=0; x--)
  cout << values[x] << endl;
}
/***** Function Cube*****/
void Cube(const int values[], int num)
{
cout << "Each number raised to the power of 3" << endl;
for (int x=0; x<num; x++)
  cout << pow(values[x], 3.0) << endl;
}