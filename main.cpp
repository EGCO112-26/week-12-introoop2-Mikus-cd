#include <iostream>
using namespace std;

#include "student.h"
#define N 3
int main(int argc, char* argv[]) {
  student s1,s2;

  student a[N];
  // Set age and set name for the first two ppl
  int i,age,youngest,temp;
  string n;
   // 1. Ask for N names and N age using cin
  for(i=0;i<N;i++){
    cout<<"Student "<<i+1<<endl;
    a[i].get_name();
    a[i].get_age();
  }

  //2. Print name and age of all N ppl
  for(i=0;i<N;i++){
    a[i].print_name();
    a[i].print_age();

  }
  
  
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
  
  


