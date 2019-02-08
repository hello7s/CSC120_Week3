// Exercise 3.16 Solution: HealthProfile.h
// HealthProfile class for storing medical data.
#include <string>

class HealthProfile
{
public:
   // Constructor
   HealthProfile(std::string first, std::string last, char g,
      int m, int d, int y, int h, int w)
      : firstName{first}, lastName{last}, gender{g}, birthMonth{m}, 
	    birthDay{d}, birthYear{y}, height{h}, weight{w} {
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

   // set gender
   void setGender(char g) {
      gender = g;
   } 

   // get gender
   char getGender() {
      return gender;
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

   // set height
   void setHeight(int h) {
      height = h;
   } 

   // get height
   int getHeight() {
      return height;
   } 

   // set weight
   void setWeight(int w) {
      weight = w;
   } 

   // get weight
   int getWeight() {
      return weight;
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

   // calculate body mass index
   int getBodyMassIndex() {
      return getWeight() * 703 / (getHeight() * getHeight());
   } 
private:
   std::string firstName; // person's first name
   std::string lastName; // person's last name
   char gender; // person's gender
   int birthMonth{0}; // person's birth month
   int birthDay{0}; // person's birth day
   int birthYear{0}; // person's birth year
   int height{0}; // person's height in inches
   int weight{0}; // person's weight in pounds
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
