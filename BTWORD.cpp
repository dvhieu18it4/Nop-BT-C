#include<stdio.h>
#include<conio.h>
#include<malloc.h>
// 1
void Init(int B[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("B[%d]=",i);
		scanf("%d",&B[i]);
	}
}
// 2
void Display(int B[],int n)
{
	printf("In Mang B = ");
	for(int i=0;i<n;i++)
	{
		printf(" %d ",B[i]);
	}
}
// 3
double Average (int B[],int n)
{
	int tong=0;
	for(int i=0;i<n;i++)
	{
		tong=tong+B[i];	
	}	
	double avg=0;
	avg=(double)tong/n;
	printf("TBC la : %lf",avg);
	return avg;
}
// 4
void Dec(int B[],int n)
{
	int tmp;
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		if(B[i]>B[j])
		{
			tmp=B[i];
			B[i]=B[j];
			B[j]=tmp;
		}
	}
	printf("Sap xep tang dan : ");
	Display(B,n);
}
main(){
	int B[100];
	int n;
	printf("Nhap n :");
	scanf("%d",&n);
	Init(B,n);
	Display(B,n);
	printf("\n");
	Average(B,n);
	printf("\n");
	Dec(B,n);
	}
