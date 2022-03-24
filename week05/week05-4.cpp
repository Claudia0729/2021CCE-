#include <stdio.h>
char line[40];///一行不超過30字母，40夠大
int main()
{
		int T;
		scanf("%d\n\n",&T);///2個跳行

		for ( int t=1;t<=T;t++ )
		{
			if ( t>1 ) printf("\n");
			printf("現在是第%d堆資料\n",t);
			while ( gets(line) )
			{
				if ( line[0]==0 ) break;///空白行離開迴圈
			}
		}
}
