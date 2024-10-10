//program to calculate electric bill
/*
program to calculate electric bill
Auther:vienna kimani
Reg No:CT102/G/2466/24
Date:8/10/2024
*/
//preprocessor directive-printf(),scanf() 

#include <stdio.h>

int main() {
    int customerID;
    char customerName[100];
    float unitsConsumed;
	float totalcharges;
	
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
	printf("Customer ID: %d\n", customerID);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName); 
    printf("Customer Name: %s\n", customerName);
    
    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    
    if(unitsConsumed<=83.5){
    	totalcharges=100
    	;printf("The totalcharges is %.1f \n",totalcharges);}
    	
    else if(unitsConsumed <=199){
		  totalcharges=unitsConsumed*1.20;
		  printf("The totalcharges is %.2f \n",totalcharges);
	  }
	
	else if(unitsConsumed<=399){
		  totalcharges=unitsConsumed*1.50;
		  printf("The totalcharges is %.2f \n",totalcharges);
	  }
	else if(unitsConsumed<=599){
		  totalcharges=unitsConsumed*2.07;
		  printf("The totalcharges is %.2f \n",totalcharges);
	  }
	else{
			(unitsConsumed>=600);
		  totalcharges=unitsConsumed*2.3;
		  printf("The totalcharges is %.2f \n",totalcharges);
	  }
	  
    return 0;
}
