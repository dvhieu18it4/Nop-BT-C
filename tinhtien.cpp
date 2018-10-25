#include<stdio.h>
#include<conio.h>
double tinhtien(float somoi,float socu)
{
	if(somoi>socu)
	{
		double tt;
		double tien;
		tt=somoi-socu;
		printf("so tieu thu la : %lf",tt);
		printf("\n");
		if(tt<=50)
		{
			tien=tt*1500;
			printf("so tien tieu thu la : %lf",tien);
		}
		else if(50<tt<=150)
		{
			tien=50*1500+(tt-50)*2000;
			printf("so tien tieu thu la : %lf ",tien);
		}
		else
		{
			tien=50*1500+100*2000+(tt-150)*3000;
		 	printf("so tien tieu thu la : %lf ",tien);
		}
			return tien;
	}
	else printf("Chu nha xem lai so dien moi va so dien cu nha ! ");

}
main()
{
	float somoi,socu;
	printf("nhap so moi : ");
	scanf("%f",&somoi);
	printf("nhap so cu : ");
	scanf("%f",&socu);
	tinhtien(somoi,socu);
	
}
