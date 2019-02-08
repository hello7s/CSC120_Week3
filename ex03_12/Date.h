// Exercise 3.15 Solution: Date.h
// Definition of class Date.
#include <iostream>

// class Date definition
class Date {
public:
   // Date constructor that initializes the three data members
    Date(int m, int d, int y)
      : month{m}, day{d}, year{y} {

      if (month < 1) {
        month = 1;
      }

      if (month > 12) {
        month = 1;
      }
   } 

   // set month
   void setMonth(int m) {
      month = m;

      if (month < 1) {
         month = 1;
      }

      if (month > 12) {
         month = 1;
      }
   } 

   // return month
   int getMonth() {
      return month;
   } 

   // set day
   void setDay(int d) {
      day = d;
   } 

   // return day
   int getDay() {
      return day;
   } 

   // set year
   void setYear(int y) {
      year = y;
   } 

   // return year
   int getYear() {
      return year;
   } 

   // print Date in the format mm/dd/yyyy
   void displayDate() { 
      std::cout << month << '/' << day << '/' << year << std::endl; 
   } 

private:
   int month{1}; // the month of the date
   int day{1}; // the day of the date
   int year{2017}; // the year of the date
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
