#include <iostream>
#include <string>
using namespace std;

// Project 1 — Cesar Flores 
// CIS 5 Week 04 · Student card

int main() {
  const int CURRENT_YEAR = 2026;

  string firstName = "";
  int age = 0;
  int credits = 0;
  double gpa = 0.0;
  int grad_year = CURRENT_YEAR + 4;
  

  cout << "Enter First Name: ";
  cin >> firstName;

  cout << "Enter Age: ";
  cin >> age;

  cout << "Enter Credits: ";
  cin >> credits;

  cout << "Enter GPA: ";
  cin >> gpa;
  
  cout << endl;

  cout << "=== Student Card ===" << endl;
  cout << "Name: " << firstName << endl;
  cout << "Age: " << age << endl;
  cout << "Credits: " << credits << endl;
  cout << "GPA: " << gpa << endl;
  cout << "Expected Graduation: " << grad_year << endl;
  cout << endl;



  return 0;
}
