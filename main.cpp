 // Kiano Kelly Comp 2336
#include <iostream>// cout and cin operations
using namespace std; 
#include <fstream> // to read in or out of the file 
#include <iomanip>

class dancer // delcaring class
{
   int ID, HRS; // delcaring varibles  // data members 
   float Rate; 



 public: // class is by default 
 dancer(); // deafult constroucor 

 // The functions
 void read_val(ifstream &); // read from file
 void print_val(ofstream &); // write on file
 void sort_by_id(dancer a[], int);
 void sort_by_rate(dancer a[], int);
 int couple_counter(dancer a[], int); // use this 

 // Total amount earned by each couple and the number of sponsers
 void u_id(dancer a[], ofstream &);

 // money earned from each performance
 float get_earnings(dancer a[], int); // use this 
 int get_id();
 int get_hrs();
 float get_rate();

 // total money earned by ALL Dancers 
 float total_raised(dancer a[]); // use this 
 void swap(int,int, dancer a[]);

 void best_couple(dancer a[], ofstream &);
 };
 dancer::dancer(){
    ID = 0;
    HRS = 0;
    Rate = 0;
 }
 // delcaring arugment for inside()x
 void dancer::read_val(ifstream &fin) // ifstream is the address of fin ?? explain
 { 
   
    fin >> ID >> HRS >> Rate; //  reading from file the right data type
 } 

 void dancer::print_val(ofstream &out)  // ofstream is the address of fin ?? explain
 {
    out << ID << " " << HRS << " " << Rate << endl;  // putting date type in a new file that been read
 } 

 void dancer:: sort_by_id(dancer a[], int size) {
    int i, j, i2,i3;
    for(i=0; i< size ; i++)// first loop go through first object created 
    {
       for (j=0; j< size -1 -i; j++) // acess the data in the array 
       {
         i2 = a[j].get_id();
         i3 = a[j+1].get_id();
         if(i2>i3){
            a[j].swap(j,j+1,a);
         }
      }
    }
 }

    void dancer:: sort_by_rate(dancer a[], int z)
 {
    int i, k2,k3;
    float r,r2;
    for(i=0; i< z- 1; i++)// first loop go through first object created 
    { 
       k2 = a[i].get_id();
       k3 = a[i+1].get_id();
       if(k2==k3){
          r = a[i].get_rate();
          r2 = a[i+1].get_rate();
          if(r>r2){
             a[i].swap(i,i+1,a);
          } 
      }
    }
 }

 void dancer::swap(int i,int j, dancer a[]){ 
    dancer temp; // temp is the object 
    temp.ID = a[j].ID;
    a[j].ID = a[i].ID;
    a[i].ID = temp.ID;

    temp.HRS = a[j].HRS;
    a[j].HRS = a[i].HRS;
    a[i].HRS = temp.HRS;

    temp.Rate = a[j].Rate;
    a[j].Rate = a[i].Rate;
    a[i].Rate = temp.Rate;

 }
  int dancer :: get_id(){
     return ID;
  }
  int dancer:: get_hrs(){
     return HRS;
  }
  float dancer:: get_rate(){
     return Rate;
  }
  int dancer:: couple_counter(dancer a[], int c){
     int couples = 0;
     for (int i =1; i<c; i++){
        if (a[i].get_id() != a[i+1].get_id()){
           couples +=1;
        }

     }
     return couples;
  }
  // total money earned by ALL Dancers 
 float dancer:: total_raised(dancer a[]){
    float total = 0;
    for(int i =0; i<12; i++){
       total +=a[i].get_earnings(a,i);
    }
    return total; 
 } 

 float dancer:: get_earnings(dancer a[], int s){
    float total;
    total = (a[s].get_rate() * a[s].get_hrs());
    return total;
 }
 void dancer:: u_id(dancer a[], ofstream& o){
    int sponsor = 0;
    float total = 0;

    for (int i = 0; i<12; i++){
       if(a[i].get_id()== a[i+1].get_id()){
          sponsor +=1;
          total += a[1].get_earnings(a, i);
       }
    
       else{
          sponsor +=1;
          total += a[1].get_earnings(a, i);

          o << a[i].get_id()<< "; " << sponsor << " sponsors, $ " << setprecision(2) << fixed << showpoint << total << endl;

          sponsor = 0;
          total = 0;
       }
    }
 }
 void dancer:: best_couple(dancer a[], ofstream &){


 }


  


 int main(){
   cout << endl << endl << endl;
   dancer ob1[12]; // creating a object and array
   ifstream inFile; // read in contain file
   inFile.open("sponsers.txt");  // open the file delcare name 
   if(!inFile) // if file dont open
   {
      cout << " Error can not open file ";
      exit(0);
    }
    else
   {  
      for (int i = 0; i < 12; i++)  // creating a loop 
      {
       ob1[i].read_val(inFile);  /* system reads infile and put it into a array*/
      }
   }
   inFile.close();
   ofstream outFile; // open a file 
   outFile.open("outputFile.txt");
   outFile << "Original List:\n";
   for (int i=0; i < 12; i++)
   {
      ob1[i].print_val(outFile); // print the values that has been read to a new file.
   }
    outFile << endl << "==============================================================\n Sorted List " << endl;

    ob1[0].sort_by_id(ob1,12); 
    ob1[0].sort_by_rate(ob1,12);
    for(int a=0; a<12; a++){
      ob1[a].print_val(outFile);
    }

    outFile << endl << "==============================================================\n  " ;

    outFile << "12 sponsors\t" << ob1[0].couple_counter(ob1,12) <<  " couples " << ob1[0].total_raised(ob1) << endl << endl;
    outFile << 
    "==============================================================\n  " << endl;

    ob1[0].u_id(ob1, outFile);

    outFile << endl << "==============================================================\n  " << endl;

    


    // 12 spomsers 5 couples $ 114.15
    outFile.close();

   return 0;
}