// Exercise 3.11 Solution: Employee.h
// Employee class definition.
#include <string> // program uses C++ standard string class

// Employee class definition
class Employee {
public:
   // Employee constructor initializes the three data members
   Employee(std::string first, std::string last, int salary) 
	  : firstName{first}, lastName{last} { 

      if (salary >= 0) { // if salary is valid
         monthlySalary = salary; // set monthlySalary to salary
      }
   } 

   // set first name
   void setFirstName(std::string name) {
      firstName = name; // no validation needed
   } 

   // return first name
   std::string getFirstName() {
      return firstName;
   } 

   // set last name
   void setLastName(std::string name) {
      lastName = name; // no validation needed
   } 

   // return last name
   std::string getLastName() {
      return lastName;
   } 

   // set monthly salary; if not positive, set to 0
   void setMonthlySalary(int salary) { 
      if (salary >= 0) { // if salary is valid
         monthlySalary = salary; // set monthlySalary to salary
      }

      if (salary < 0) { // if salary is negative
         monthlySalary = 0; // set monthlySalary to 0
      }
   } 

   // return monthly salary
   int getMonthlySalary() {
      return monthlySalary;
   } 
private:
   std::string firstName; // Employee's first name
   std::string lastName; // Employee's last name
   int monthlySalary{0}; // Employee's salary per month
}; 



/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
