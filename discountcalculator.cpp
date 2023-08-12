#include<iostream>

using namespace std;
int main()
{
   float amount, discount, topaid;
   cout<<"Enter Total Amount: ";
   cin>>amount;
   if(amount<=100)
      cout<<"Amount to be Paid: "<<amount;
   else
   {
      if(amount>=100 && amount<500)
      {
         discount = (amount*10)/100;
         topaid = amount-discount;
      }
      else if(amount>=500)
      {
         discount = (amount*20)/100;
         topaid = amount-discount;
      }
      
      cout<<"Amount to be Paid: "<<topaid;
   }
   cout<<endl;
   return 0;
}
