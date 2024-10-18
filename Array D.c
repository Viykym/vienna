//Arrays in C - 1d arrays
/*
program for 1D arrys
Auther:Brian muriuki joseph
Reg No:CT102/G/22804/24
Date:17/10/2024
*/
//preprocessor directive-printf(),scanf() 
#include<stdio.h>
int main(){
	int i;
	int marks[5]={50,90,60,70,40};
	for(i=0;i<5;i++){
		printf("marks[%d]=%d \n",i,marks[i]);
	}
	return 0;
}