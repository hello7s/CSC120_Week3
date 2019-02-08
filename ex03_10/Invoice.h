// Exercise 3.10 Solution: Invoice.h
// Definition of Invoice class that represents an invoice
// for an item sold at a hardware store.
#include <string> // program uses C++ standard string class

// Invoice class definition
class Invoice {
public:
   // Invoice constructor initializes the class's four data members
   Invoice::Invoice(std::string number, std::string description, int count, int price) 
    : partNumber{number}, partDescription{description} {
      if (count > 0) { // if quantity is valid
         quantity = count; // set quantity to count
      }

      if (price > 0) { // if price is positive
         pricePerItem = price; // set pricePerItem to price
      }
   } 

   // set part number
   void Invoice::setPartNumber(std::string number) {
      partNumber = number; // no validation needed
   } 

   // get part number
   std::string Invoice::getPartNumber() {
      return partNumber;
   } 

   // set part description
   void Invoice::setPartDescription(std::string description) {
      partDescription = description; // no validation needed
   } 

   // get part description
   std::string Invoice::getPartDescription() {
      return partDescription;
   } 

   // set quantity; if not positive, set to 0
   void Invoice::setQuantity(int count) {
      if (count > 0) { // if quantity is valid
         quantity = count; // set quantity to count
      }

      if (count <= 0) { // if quantity is not positive
         quantity = 0; // set quantity to 0
      } 
   } 
      
   // get quantity
   int Invoice::getQuantity() {
      return quantity;
   } 
      
   // set price per item; if not positive, set to 0
   void Invoice::setPricePerItem(int price) {
      if (price > 0) { // if price is positive
         pricePerItem = price; // set pricePerItem to price
      }

      if (price <= 0) { // if price is not positive
         pricePerItem = 0; // set pricePerItem to 0
      } 
   } 

   // get price per item
   int Invoice::getPricePerItem() {
      return pricePerItem;
   } 

   // calulates invoice amount by multiplying quantity x price per item
   int Invoice::getInvoiceAmount() {
      return getQuantity() * getPricePerItem();
   } 

private:
   std::string partNumber; // the number of the part being sold
   std::string partDescription; // description of the part being sold
   int quantity{0}; // how many of the items are being sold
   int pricePerItem{0}; // price per item
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
