//electric bill using fanction
/*
Author: vienna kimani
Reg No:CT102/G/246608/24
Date:17/10/2024
*/
#include <stdio.h>
float totalbill(int unitconsumed,float chargesperunit)
{
return unitconsumed*chargesperunit;
}
float Surcharge (float Totalbill)
{
Totalbill*1.15;
}
int main () {

int customerID;
int unitconsumed;
float chargesperunit;
float surcharge=0;
float TotalBill;
char customername[60];
 

printf("\nEnter the customerID:");
scanf("%d", &customerID);

printf("\nEnter the customername:");
scanf("%s", &customername);

printf ("\nEnter the unitconsumed:");
scanf("%d", &unitconsumed);

if(unitconsumed <200)
   {
   chargesperunit = 1.20;
}
else if (unitconsumed >= 200 && unitconsumed <= 400)
     {
     chargesperunit=1.50;
     }

else if (unitconsumed >400 && unitconsumed <= 600)
    {
    chargesperunit = 1.80;
}
else
{
    chargesperunit = 2.00;
    }
    
   TotalBill = totalbill (unitconsumed,chargesperunit);

      if(TotalBill>400)
{
      surcharge = Surcharge(TotalBill);
      TotalBill+=surcharge;

}
      if(TotalBill<100){
      TotalBill=100;
      }


printf("Customers Name:%s\n",customername);
printf("Customers Id No.:%d\n",customerID);
printf("Total units consumed:%d\n", unitconsumed);
printf("Charges Per Unit consumed:%.2f\n",chargesperunit);
printf("Total Bill:%.2f\n", TotalBill);

return 0;
}
