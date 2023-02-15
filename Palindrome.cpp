#include <iostream>
#include <fstream>
#include <string>
using namespace std;


struct st
{
    string info;
    st *next;
};

class Stack
{
st *top;
 public:
 Stack(); // default constructor 
 void push(string x);
 string pop(); // 
 bool isempty(); // meaning if it is not empty can pop 
 bool isfull(); // meaing if it is not full then you can push
};

Stack::Stack()
{
  top = NULL; // setting top to null
};

void Stack::push(string x){
    st* temp; // Declare node 
    temp = new st; // points to the same direction as new temp
    temp -> info = x; //assign the node
    temp -> next = NULL;  
    if(top==NULL){
      top = temp;// top points to the same location as temp
    }
    else 
    {
     temp-> next = top;
     top = temp;
    }
     
};

string Stack::pop()
{ 
   
    string ans; 
    st* t; //declare node
    t = top; // t points in same direection as top
    ans = top->info; // ans points to top and acess info

    top = top -> next; // 
    t -> next = NULL;
    delete(t);
    return (ans);
};

bool Stack::isempty()
{
 if(top == NULL) // if temp is equal to NULL
 {
  cout << " it is empty" << endl;
  return (true);
  }
  else 
{
  return (false);
 }
};

bool Stack::isfull()
{
  st* temp;
  temp = new st;
  if (temp == NULL)
  { 
   return true; 
   
  }

   else
   {
    delete temp;
    return false;
   }
   
   
};


//}
 

/*class Quenes 
{ 
    st* Front; //  check
    st* Rear;
    public:
    Quenes();
    void enterq(int);
    int deleteq();
    bool isempty(); // meaning if it is not empty can pop 
    bool isfull();

};*/  

/* Quenes::Quenes(){
    Front = NULL; // check 
    Rear = NULL;
}
void Quenes::enterq(int x){
  st* temp; // Declare node 
  temp = new st; // points to the same direction as new temp
  temp -> info = x; //assign the node  
  temp -> next = NULL; 
  if (Front == NULL)
  {
    Rear = temp; // top points to the same location as temp
    Front = temp;
  }
  else
    {
        Rear->next = temp;
    }
  }

int Quenes::deleteq(){
int ans; 
  st* t; //declare node
  ans = Front->info; // ans points to top and acess info
  t = Front; // t points in same direection as top
  Front = Front -> next; // 
  t -> next = NULL;
  delete(t);
  return (ans);
}

bool Quenes::isempty()
 {
 st *temp; // delcare node 
 temp = new st; // points to new node
 if(temp == NULL) // if temp is equal to NULL
 {
  return (true);
  }
  else 
{
  delete temp;
  return (false);
 }
}

bool Quenes::isfull(){
{
  if (Front == NULL)
  { 
   return true; 
  }
   else return (false);
}
}
*/


int main(){
    Stack obj;
    ifstream inFile;
    ofstream outFile;
    string line1, line2;
  
  
    inFile.open("inputFile.txt");
    outFile.open("outputFile.txt");
    {

    if(!obj.isfull()){

    
    while(getline(inFile,line1)){ 
    
       obj.push(line1);

       if(!obj.isempty()){
        string x;
        x = obj.pop();
        outFile << x << endl;
       }
    
    }
    }
    }
    

   inFile.close();
   outFile.close();

    return 0;
}               