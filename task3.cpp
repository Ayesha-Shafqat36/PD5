#include <iostream>
using namespace std;
float taxCalculator(char vehicle,float itemPrice,float tax,float finalPrice);
main()
{
    char vehicle;
    float itemPrice;
    float tax;
    float finalPrice; 
    cout << "Enter Item Price=";
    cin >> itemPrice;
    cout << "Enter Vehicle code=";
    cin >> vehicle;
    finalPrice=taxCalculator(vehicle,itemPrice,tax,finalPrice);
    cout << "Final Price="<< finalPrice << endl;

}
float taxCalculator(char vehicle,float itemPrice,float tax,float finalPrice)
{ 
    tax=itemPrice/100;
    finalPrice=itemPrice+tax;
   if(vehicle == 'M')
   {
      tax=tax*6;
      finalPrice=itemPrice+tax;
   }
   if(vehicle == 'E')
   {
      tax=tax*8;
      finalPrice=itemPrice+tax;
   }
   if(vehicle == 'S')
   {
      tax=tax*10;
      finalPrice=itemPrice+tax;
   }
   if(vehicle == 'V')
   {
       tax=tax*12;
       finalPrice=itemPrice+tax;
   }
   if(vehicle == 'T')
   {
       tax=tax*15;
       finalPrice=itemPrice+tax;
   }
   return finalPrice;
}