#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while ( gets( line ) )
	{
		if ( t>1 ) printf("\n");
		//printf("Test %d\n",t)
		int ans[256]={};
		for ( int i=0;line[i]!=0;i++ )
		{
			char c=line[i];
			ans[c]++;//字母出現次數
		}//字串迴圈 得到每一個字母

		for ( int c=128;c>=32;c-- )
		{
			if ( ans[c]!=0 ) printf("%d %d\n",c,ans[c]);
		}
		t++;
	}
	return 0;
}
