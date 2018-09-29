#include<stdio.h>
void main()
{
   int i, a[100],n,sum = 0;
   printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("\nEnter %d integers", n);
   for (i = 0; i < n; i++)
   {
   	scanf("%d",&a[i]);
   	sum = sum + a[i];
   }
   printf("\nThe sum is = %d",sum);
   
}
