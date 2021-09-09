#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sid,char sname[20]) {
  studentID=sid;
 strcpy(name,sname);
}

// Display StudentId and Name
 void Student::display() {
  cout<<"student id is "<<studentID<<endl;
  cout<<"student name is "<<name;
}
