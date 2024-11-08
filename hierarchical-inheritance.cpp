#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    void setPerson(string n , int a){
        name = n;
        age = a;
    };

    void dispalyPerson(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class student : public Person{
    public:
    int rollnumber;

    void setStudentDetails(string n  , int a , int r){
        setPerson(n , a);
        rollnumber = r;
    }

    void displayStudent(){
        dispalyPerson();
        cout<<"Rollnumber: " <<rollnumber<<endl;
    }
};

class Teacher : public Person{
    public:

    string subject;

    void setTeacher(string n , int a , string sub ){
        setPerson(n , a);
        subject = sub;
    }

    void displayTeacher(){
        dispalyPerson();
        cout<<"Subject: "<<subject<<endl;
    }
};
int main(){
    student s;
    Teacher t;

    s.setStudentDetails("Brahm", 12 , 44);
    t.setTeacher("kapil", 52 , "math");

    cout<<"Student Details"<<endl;
    s.displayStudent();

    cout<<"Teacher Details"<<endl;
    t.displayTeacher();
    return 0; 
}