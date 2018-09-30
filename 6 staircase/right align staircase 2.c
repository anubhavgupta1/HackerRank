#include<stdio.h>
int main()
{
	int i, h, n;
	scanf("%d",&n);
	for (i = 0; i < n; i++)
    {
        for (h = 0; h < i; h++)
        {
            printf("#");
        }
        printf("\n");
    }
	return 0;
}
