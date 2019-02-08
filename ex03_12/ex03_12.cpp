// Exercise 3.12 Solution: ex03_12.cpp
// Demonstrates class Date's capabilities.
#include <iostream>
#include "Date.h" // include definition of class Date from Date.h
using namespace std;

// function main begins program execution
int main()
{
   Date date{8, 6, 2016}; // create a Date object for August 6, 2016
   
   // display the values of the three Date data members
   cout << "Month: " << date.getMonth();
   cout << "\nDay: " << date.getDay();
   cout << "\nYear: " << date.getYear();

   cout << "\n\nOriginal date: ";
   date.displayDate(); // output the Date as 8/6/2016

   // modify the Date 
   date.setMonth(13); // invalid month
   date.setDay(1);
   date.setYear(2017);
   
   cout << "\nNew date: ";
   date.displayDate(); // output the modified date (1/1/2017)
} 


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
