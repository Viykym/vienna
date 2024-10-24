//c structure
/*program for prompt book
author:vienna kimani
reg:CT102/G/24668/24
Date:22/10/2024
*/
#include<stdio.h>
#include<string.h>//stcrpy
struct book
{
	char title[30];
	char author[30];
	int publicationyear;
	char ISBN[13];
	float price;
	
} book;

int main()
{
	//struct book;
	   printf("Enter title: ");
        scanf("%s", &book.title);
        
            printf("Enter author: ");
    scanf("%s",&book.author);
    
        printf("Enter publicationyear: ");
    scanf("%d",&book.publicationyear);
    
        printf("Enter ISBN : ");
    scanf("%s", &book.ISBN);
    
        printf("Enter price: ");
    scanf("%f",&book.price);
    
    printf("\n");

	
	
	printf("title:%s \n",book.title);
	printf("author:%s \n",book.author);
	printf("publication year:%d \n",book.publicationyear);
	printf("ISBN:%s \n",book.ISBN);
	printf("price:%.2f \n",book.price);
}