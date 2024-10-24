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
	
	strcpy(book.title,"introduction to programming");
	strcpy(book.author,"john smith");
	book.publicationyear= 2022;
	strcpy(book.ISBN,"978013110367");
	book.price = 49.99;
	
	printf("title:%s \n",book.title);
	printf("author:%s \n",book.author);
	printf("publication year:%d \n",book.publicationyear);
	printf("ISBN:%s \n",book.ISBN);
	printf("price:%.2f \n",book.price);
}