#include<stdio.h>
int main()
{
	int a[10][10],m,n,i,j,d,sum1 = 0,sum2=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
			n = m-i-1;
			if(i==j)
			{
				sum1 = sum1 + a[i][j];
			}
			if(j==n)
			{
				sum2 = sum2 + a[i][j];
			}
			else
			{
				continue;
			}
		}
	}
	d = sum1 -sum2;
	if(d<0)
	{
		d = d * -1;
	}
	printf("%d",d);
	return 0;
}
