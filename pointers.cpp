// Name:
// Student Number:
// Date:

// Filename: pointers.cpp
// Purpose: To work with pointers and dynamically allocate
//           an array for the marks of a student as outlined
//           in the exercise description.

#include <string>
#include <iostream>
using namespace std;


struct Student
{
  string name;
  int id;
  int mark[3];
};

void inputStudent(Student* stuPtr);   // function prototype for inputting
                                   // function prototype for printing

//*********************** Main Function ************************//
int main ()
{
  Student stu;		         // instantiating a Student object
  Student* studentPtr = &stu;  // defining a pointer for the Student object

  // NOTE: you could send studentPtr OR &stu, both refer to the same address!
  inputStudent(&stu);	     // inputting from the keyboard into the instance
                     	     // printing the object



  return 0;
} // end of main

//-----------------Start of functions----------------------------// 