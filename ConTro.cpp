#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void Nhap(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("arr[%d]= ",i);
		scanf("%d",arr+i);
	}
}
void In(int *arr,int n)
{
	int i;
	for( i=0;i<n;i++)
	{
	printf("arr = %d ", *(arr+i));
	}

}
void Gtnn(int *arr,int n)
{
	int min=*arr;
	for(int i=0;i<n;i++)
	{
	
	if(min>*(arr+i)) min=*(arr+i);
	}
	printf(" gia tri nho nhat la %d",min);
}
float TBC(int *arr,int n)
{
	float tong=0;
	for(int i=0;i<n;i++)
	{
		tong = *(arr+i)+tong;
	}
 	 float avg;
 	 avg =tong/n;
 	 printf("Trung Binh Cong la : %f",avg);
 	 return avg;
}
main(){
	int n;
	printf("nhap n :");
	scanf("%d",&n);
	int *p=(int *)malloc(n*sizeof(int));
	Nhap(p,n);
	In(p,n);
	printf("\n");
	Gtnn(p,n);
	printf("\n");
	TBC(p,n);
}
