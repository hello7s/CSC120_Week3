// Exercise 3.15 Solution: HeartRates.h
// HeartRates class for computing target heart rates.
#include <string>

class HeartRates
{
public:
   // Constructor
   HeartRates(std::string first, std::string last, int m, int d, int y)
      : firstName{first}, lastName{last}, birthMonth{m}, 
	    birthDay{d}, birthYear{y} {
   } 

   // set first name
   void setFirstName(std::string first) {
      firstName = first;
   } 

   // get first name
   std::string getFirstName() {
      return firstName;
   } 

   // set last name
   void setLastName(std::string last) {
      lastName = last;
   } 

   // get last name
   std::string getLastName() {
      return lastName;
   } 

   // set birth month
   void setBirthMonth(int m) {
      birthMonth = m;
   } 

   // get birth month
   int getBirthMonth() {
      return birthMonth;
   } 

   // set birth day
   void setBirthDay(int d) {
      birthDay = d;
   } 

   // get birth day
   int getBirthDay() {
      return birthDay;
   } 

   // set birth year
   void setBirthYear(int y) {
      birthYear = y;
   } 

   // get birth year
   int getBirthYear() {
      return birthYear;
   } 

   // calculate age
   int getAge() {
      // if current date has not yet been set, get it from user
      if (0 == currentYear) {
         std::cout << "Please enter today's month, day, and year: ";
         std::cin >> currentMonth >> currentDay >> currentYear;
      } 

      if (currentMonth < birthMonth) {
         return currentYear - birthYear - 1;
      }
      else if (currentMonth == birthMonth) {
         if (currentDay < birthDay) {
            return currentYear - birthYear - 1;
         }
      }

      return currentYear - birthYear;
   } 

   // get maximum heart rate
   int getMaximumHeartRate() {
      return 220 - getAge();
   } 

   // calculate minimum target heart rate
   int getMinimumTargetHeartRate() {
      return 50 * getMaximumHeartRate() / 100;
   } 

   // calculate maximum target heart rate
   int getMaximumTargetHeartRate() {
      return 85 * getMaximumHeartRate() / 100;
   } 
private:
   std::string firstName; // user's first name
   std::string lastName; // user's last name
   int birthMonth{0}; // user's birth month
   int birthDay{0}; // user's birth day
   int birthYear{0}; // user's birth year
   int currentMonth{0}; // current month
   int currentDay{0}; // current day
   int currentYear{0}; // current year
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
