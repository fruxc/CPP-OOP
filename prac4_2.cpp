#include <iostream> 
using namespace std;
 
class Student {
   public:
      string name;
      int roll_no;
      Student() {
      	  cout<<"Enter students name: ";
       	  cin>>name;
          cout<<"Enter Roll no.: ";
          cin>>roll_no;
      }
};

class Marks: public Student {
   public:
        int marks1, marks2;
  
        
       Marks() {
       	  cout<<"Enter marks1: ";
       	  cin>>marks1;
          cout<<"Enter marks2: ";
          cin>>marks2;
            
        }
};

class FinalTotal: public Marks {
   public: 
        int total_marks;
   
      int calc() { 
         total_marks = marks1 + marks2; 
         
         return total_marks;
      }
      
      FinalTotal() {
          cout<<"\n Students name: "<<name;
          cout<<"\n Roll no: "<<roll_no;
          cout<<"\n Total marks: "<<calc();
      }
};

// Main function for the program
int main() {

   FinalTotal ft;
   ft.calc();
   
   
   return 0;
}
