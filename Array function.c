//C functions
/*
program for funtion
Auther:Brian muriuki joseph
Reg No:CT102/G/22804/24
Date:17/10/2024
*/
//preprocessor directive-printf(),scanf() 

#include<stdio.h>//scanf(),printf()
#include<math.h>//sin(),cos(),tan(),
int sum(int a,int b,int c);//function prototype
float division(float x,float y);//function prototype

int main(){
	int result, a,b,c;
	float div_1,x,y;
	
	printf("Enter 3 values:");
	scanf("%d%d%d", &a,&b,&c);
	
	result =sum(a,b,c);//fuction calling
	
	printf("Enter 2 values:");
	scanf("%f%f",&x,&y);
	div_1= division(x,y);//function calling
	
	printf("The sum is %d \n",result);
	printf("The division is %.2f \n",div_1);
	return 0;
}
//function definiton
int sum(int a,int b,int c){
	int result;
	result =a+b+c;
	return result;
}
//function defintion
float division(float x,float y){
	float div;
	div =x/y;
	return div;
}

