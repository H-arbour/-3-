#include <stdio.h>

int main()
{
	int i,j,n;
	while (2>1)
	{
		printf("请输入n的值(-8848结束):");
		scanf("%d",&n);
		if (n==-8848)
		break;
		
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n-i+1;j++)
			printf("*");
			
			for(j=1;j<=2*i-1;j++)
			printf(" ");
			
			for(j=1;j<=2*(n-i)+1;j++)
			printf("*");
			
			for(j=1;j<=2*i-1;j++)
			printf(" ");
			
			for(j=1;j<=n-i+1;j++)
			printf("*");
			
			printf("\n");
		}
	}
	return 0;
}
