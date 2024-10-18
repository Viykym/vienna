//Arrays in C -3D arrays
/*
program for 3D arrys
Auther:Brian muriuki joseph
Reg No:CT102/G/22804/24
Date:17/10/2024
*/
//preprocessor directive-printf(),scanf() 

#include<stdio.h>
int main (){
	int i,j,k;
	int marks[2][2][3]={{{50,90,60},{40,70,80}},{{50,60,70},{49,60,10}} };
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<3;k++){
				printf("marks[%d][%d][%d]=%d \n",i,j,k,marks[i][j][k]);
			}
		}
	}
	return 0;
}