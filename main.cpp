#include <iostream>
#include <string>

using namespace std;

#include "student.h"
int main(int argc, char* argv[]) {
  int N = (argc-1)/2;
  student a[N];
  
  if(N<1){
    return 0;
  }

for(int i=0;i<N;i++){
  a[i].set_name(argv[i*2+1]);
  a[i].set_age(stoi(argv[i*2+2]));
}
  // Set age and set name for the first two ppl
  int i,age,youngest,temp;
  string n;
   // 1. Ask for N names and N age using cin

  //2. Print name and age of all N ppl
  
  
  
  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest person
 for(i=1;i<N;i++){
    youngest=a[0].show_age();
    if(youngest>a[i].show_age()){
      youngest=a[i].show_age();
    }
    cout<<"Youngest student"<<endl;
    for(i=0;i<N;i++){
      if(a[i].show_age()==youngest){
        a[i].print_name();
        a[i].print_age();
      }
    }
 }
  
  // Print all info for the yougest person
  //4. Change input from cin to argv


  
 return 0;

    
  }
  
  


