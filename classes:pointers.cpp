#include <iostream> // cout and cin operations
using namespace std;
#include <fstream> // to read in or out of the file


struct nodetype{
  int coeff,exp; // data members 
  nodetype *next; // the connection to the next link
};

class link{
  private:
  nodetype *begin, *last; //nodetype points to begin
  int length;

public:
  link(); // default constructor: It is called by the invoking obj. When its created

  // method to insert an item in the linked list in a sorted order
  void insertitem(int, int);
  // method to output all the items in the linked list
  void printlist(ofstream &);
  // Method to add two equation. equation add(equation e2);
  void equations(link e1, link e2);
};
 link::link(){
   begin = NULL;
    
 }

 void link::insertitem(int a, int b){
   nodetype *temp; // t points to a address of node a type location
   
   temp = new nodetype; // create a node 
   
   temp->coeff = a; // assign a node
   temp->exp = b;
  //  t->next = NULL;
   
   // identify the location
   if(begin == NULL) { // 
     begin = temp; // begin arrow points to same location as t // 
   } // list is empty
   else{
     temp -> next = begin;  // points in the same direction as begin
     begin = temp; // points in the same direction as temp
   }
 }



 void link :: printlist(ofstream & outFile){
   nodetype *temp = begin; // t points to the same directions as begin
   //while (temp !=NULL)
   if (temp !=NULL) // to print out a single line at a time
   {
    outFile << temp->coeff << " x " << temp->exp << endl;
    temp = temp->next;
   }

   }

 void link:: equations(link e1, link e2){
  nodetype *temp;
  if(begin == NULL){
    begin = temp;
  }
    else{
     temp -> next = begin;  // points in the same direction as begin
     begin = temp;

    }
  }




int main() { 
  link equation; // equation is the object of link
  link equation2;
  ifstream inFile , inFile2;;
  ofstream outFile;

  int x, y;
  char z;
  inFile.open("eqFile.1txt"); // read the file 
  outFile.open("outfile.txt"); // output file
   
  
  // read in first equation 
  for (int i = 0; i<5; i++) // loop to read file 
    { 
    inFile >> x >> y;
    equation.insertitem(x,y); // insert from file 
    equation.printlist(outFile); 
    }

   outFile << endl;

   // read infile for second equation.
   inFile2.open("eqFile.2txt");
   for (int i = 0; i<6; i++) // loop to read file 
    {
    inFile2 >> x >> y;
    equation2.insertitem(x,y); // insert from file 
    equation2.printlist(outFile);}
    equation.equations(equation, equation2);

   inFile.close();
   inFile2.close();
   outFile.close();

   
   
  return 0;
}

  
