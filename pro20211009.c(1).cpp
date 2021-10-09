//此代码关于：输入n值，n值代表输入n行字符图案，若输入的n值为3时，则图案如下：
// ABCBA
//  ABA
//   A

#include <stdio.h>

int main()
{
	int i,j,n;
	char ch;
	while (2>1)
	{
		printf("请输入n的值(-8848结束)：");
		scanf("%d",&n);
		if (n==-8848)
		break;
		
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			printf(" ");
			
			ch='A';
			for(j=1;j<=n-i+1;j++)
			{
				printf("%c",ch);
				ch++;
			}
			
			ch--;
			for(j=1;j<=n-i;j++)
			{
				ch--;
				printf("%c",ch);
			}
			
			printf("\n");
		}
	}
	return 0;
}
