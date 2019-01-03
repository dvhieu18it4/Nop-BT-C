#include <stdio.h>
#include<conio.h>
#include<String.h>
struct book
{
	char name[50];
	char author[50];
	float price;
	int edn;
};
//struct book1;
//struct book2;
void NhapSach(struct book b[],int n)
{
	for (int i = 0; i < n; i++)
	{
		/* code */
	fflush(stdin); // cai' nay` chac la danh cho gets cho no khoi nhay lung tung
	printf("Name Book[%d] is : ",i);
	gets(b[i].name);
	printf("Nam SX :  ");
	scanf("%d",&b[i].edn);
	printf("Price is :  " );
	scanf("%f",&b[i].price);
	}
}
void InSach(struct book b[],int n)
{
	for (int i = 0; i < n; i++)
	{
		/* code */
		printf("Name book[%d]     : %s \n",i,b[i].name);
		printf("Nam SX book[%d]   : %d \n",i,b[i].edn);
		printf("Price   book[%d]  : %f \n ",i,b[i].price);

	}
}
float MinPrice(struct book b[], int n)
{
	float min;
	for (int i = 0; i < n; i++)
	{
		/* code */
		min=b[0].price;
		if(min<b[i].price) b[i].price=min;

	}
	return min;

}
void Search(struct book b[],int n,char x[50])
{
	for (int i = 0; i < n; i++)
	{
		/* code */
		if(strstr(b[i].name,x) != NULL)
		{
			printf("Name      : %s  \n",b[i].name );
			printf("Nam SX    : %d  \n",b[i].edn );
			printf("Price     : %f  \n",b[i].price );
		}

	}
}
void InSachNho(struct book b[],int n)
{
	for (int i = 0; i < n; i++)
	{
		/* code */
		if(b[i].price==MinPrice(b,n))
		{
			printf("Name is  : %s ",b[i].name);
			printf("\n");
			printf(" Nam SX  : %d ",b[i].edn );
		}
	}
}
main ()
{
struct book b[100];
int 	n;
char x[50];
printf("Nhap n : ");
scanf("%d",&n);
NhapSach(b,n);
printf("\n");
InSach(b,n);
printf("\n");
printf(" Get Book You want to search : ");
scanf("%s",&x);
Search(b,n,x);
printf("\n");
printf("Book has a min price : %f ",MinPrice(b,n));
printf("\n");
InSachNho(b,n);



}
