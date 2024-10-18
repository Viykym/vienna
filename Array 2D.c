//Arrays in C-2D arrays
/*
program for 2D arrys
Auther:vienna kimani
Reg No:CT102/G/24668/24
Date:17/10/2024
*/
//preprocessor directive-printf(),scanf() 
#include<stdio.h>
int main (){
	int i,j;
	int marks[2][3]={{50,90,60},{40,70,40}};
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("marks[%d][%d]=%d\n",i,j, marks[i][j]);
			}
			
}
	return 0;
}
