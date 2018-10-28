#include<conio.h>
#include<stdio.h>
#include<String.h>
// B1. nhap mang 2 5 8 9
void NhapMang(int mang[100],int n)
{
	
	for ( int i=0;i<n;i++)
	{
		printf("mang[%d] = ",i);
		scanf("%d",&mang[i]);
	
	}
	
}
// B2. in mang 
void InMang(int mang[100],int n)
{
	printf("Cac phan tu trong mang la : ");
	for (int i=0;i<n;i++)
	{
		printf(" %d ",mang[i]);
			
		
	}
}
// B3.bai Tinh tong hinh nhu dung con tro ma e lam hoai k ra 

int GiaiThua(int n){

	int gt=1;

	for(int i=1;i<=n;i++)
	{
		gt=gt*i;
	
	}
	printf(" giai thua cua so n %d ",gt);
}
//B4.Dem ki tu trong chuoi

int ChuoiKiTu(char chuoi[50])
{
	int dem=0;
	for(int i=0;i<strlen(chuoi);i++)
	{
		if(chuoi[i]=' ') dem++;
    }	
		printf("chuoi da nhap co %d ki tu",dem);
		return dem;
	
}


int	main(){
	char chuoi[50];
	printf("nhap vao chuoi bat ki ");
	scanf("%s",chuoi );
	ChuoiKiTu(chuoi);
	printf("\n");
	int n;
	int mang[100];
	printf("nhap n \n");
	scanf("%d",&n);
	NhapMang(mang,n);
	InMang(mang,n);
	printf("\n");
	GiaiThua( n);
	
}
