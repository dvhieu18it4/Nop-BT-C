#include<stdio.h>
#include<conio.h>
void NhapM(int m[50],int n )
{
	for (int i = 0; i < n; i++)
	{
		/* code */
		printf("Nhap M[%d]: ",i);
		scanf("%d",&m[i]);

	}
}
void InM(int m[50],int n)
{	printf("Mang la : ");
	for (int i = 0; i < n; i++)
	{
		/* code */
		printf(" %d ",m[i]);
	}
}

int BPSL(int m[50],int n)
{	int t=0;
	for (int i = 0; i < n; i++)
	{
		/* code */
		if(i%2!=0) 
		{
			t+=i*2;
		}
	}
	printf("BPSL : %d ",t );
	return t;
}
int Max(int m[50],int n)
{
	int max=m[0];
	for (int i = 0; i < n; ++i)
	{
		/* code */
//		int max=m[0];
		if(max<m[i]) max = m[i] ;
	}
	printf("Max : %d ",max );
	return max;

}
int Min(int m[50],int n)
{	
	int min=m[0];
	for (int i = 0; i < n; ++i)
	{
		/* code */
//		int	min=m[0];
		if(min>m[i]) min = m[i] ;
	}
	printf("Min : %d ",min);
	return min;

}
int giaithua(int m[50],int n)
{	
	int gt;
	for(int i=1;i<=n;i++)
	{
		gt*=i;
	}
	printf("GT: %d ",gt);
	return gt;
}

	main()
{
	/* code */
	int n;
	int m[50];
	printf("Nhap N : ");
	scanf("%d",&n);
	NhapM(m,n);
	printf("\n");
	InM(m,n);
	printf("\n");
	BPSL(m,n);
	printf("\n");
	Max(m,n);
	printf("\n");
	Min(m,n);
	printf("\n");
	giaithua(m,n);
}
