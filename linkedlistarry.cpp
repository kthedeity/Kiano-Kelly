/* this program reads in linked list of numbers into a linked list. the program prints the even numbers to a file and the odd numbers to a separtae file. The main program prints the number of even and odd.*/

#include <iostream>
#include <fstream>
using namespace std;

// create a struct for the linked list
struct Numbers{
  int num;
  Numbers* nextnum;
};

//functions Specifications 
int PrintEven(Numbers*);
int PrintOdd(Numbers*);


int main() {
  ifstream fin("numbers.txt");
  int evenNums = 0; // function call to my even function
  Numbers* head;
  Numbers* newnode;

  if(!fin){
    cout << "error: file can not be found" << endl;
    exit(1);
  }
  // read in data
  // begin to create in linked list
  //priming read
  head = new Numbers();
  fin >> head->num;// read in the first data item 
  head->nextnum = NULL;

  //continue to read
  while(fin) // end of file loop 
  {
    //1. create the new node
    newnode = new Numbers();
    //2. read in the data
    if (fin >> newnode->num){ 
    //3. point to the head
    newnode->nextnum = head;
    //4. head becomes the new node
    head = newnode;
    }
    }
    // Call the Print Even Functions 
   evenNums = PrintEven(head);
   cout << " The number of even numbers are: " << evenNums;
   cout << " The number of odd numbers are: " << PrintOdd(head) << endl;

  // print the linked list 
  while (head!=NULL){
    cout << head-> num << endl;
    head = head->nextnum;
  }
  
  return 0;
}

/**** print Even ***** functions***/
int PrintEven(Numbers* h)
{
  int numeven =0;
  ofstream fout("evennums.txt");
  int remainder;
  // loop for the linked list 
  while(h!=NULL){
    remainder = (h->num%2); // check the remainder
    if (remainder == 0){
      fout << h->num << " is even " << endl;
      numeven++;
    }
    h=h->nextnum; // move the head
  }
  return numeven;
}
/**** print Even ***** functions***/
int PrintOdd(Numbers* h)
{
  int numodd =0;
  ofstream fout("oddnums.txt");
  int remainder;
  // loop for the linked list 
  while(h!=NULL){
    remainder = (h->num%2); // check the remainder
    if (remainder != 0){
      fout << h->num << " is odd " << endl;
      numodd++;
    }
    h=h->nextnum; // move the head
  }
  return numodd;
}