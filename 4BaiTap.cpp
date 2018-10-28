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
// B3.Tinh Tong Giai Thua, bai nay hinh nhu dung con tro ma e ko biet nen lam cach nay

int TongGiaiThua(int mang [100],int n){

	int tonggiaithua=0;	

	for(int i=0;i<n;i++)
	{
		int tich=1;
		int gt	=0;
		for(int j=1;j<=mang[i];j++)
		{
			tich=tich*j;
		}
		gt+=tich;
		printf("  giai thua cua phan tu [%d] la %d \n",i,gt);
		tonggiaithua+=gt;
	
	}

	printf("tong la %d",tonggiaithua);
	
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
	TongGiaiThua(mang,n);
	
}
