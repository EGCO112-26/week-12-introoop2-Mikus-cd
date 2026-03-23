#include <iostream>
using namespace std;

class student{
private:

    string name;
    int age;
public:
    void set_name(string="Yme");
    void print_name();
    void set_age(int );
    int get_age();
    string get_name();
    void print_age();
    int show_age();
    };

    int student::get_age(){
        cout<<"Input your age:";
        cin>>age;
        return age;
    }

    void student::set_age(int x){
        if(x>80) age=20;
        else if(x<13) age=13;
        else age=x;

    }

    void student::set_name(string n){
        name=n;
    }

    void student::print_name(){
      cout<<"Name: "<<name<<endl;
    }
    string student::get_name(){
        cout<<"Input your name:";
        cin>>name;
        return name;
    
    }void student::print_age(){
        cout<<"age: "<<age<<endl;
    }
    int student::show_age(){
        return age;
    }




