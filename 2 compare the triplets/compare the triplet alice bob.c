#include<stdio.h>
int main()
{
   int i, a[100],b[100],m =0,n =0;
    for(i=0;i<3;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
    {
    	scanf("%d",&b[i]);
	}
    for(i=0;i<3;i++)
    {
    	if(a[i] > b[i])
    	{
    		m = m+1;
		}
		else if(a[i]<b[i])
		{
			n = n +1 ;
		}
		else
		{
			continue;
		}
	}
	printf("%d %d",m,n);
	return 0;
}
