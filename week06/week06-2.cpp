#include <stdio.h>
///char line[2000];//改讀到全部的陣列
char tree[1000000][40]///改讀到tree的陣列
///       1百萬顆 40個字母
///  tree[0] tree[2] tree[3]
int main()
{
	int T;
	scanf("%d\n\n",&T);

	for ( int t=1;t<=T;t++ )
	{
		int N=0;
		while ( gets( tree[N] )///while ( gets( line ) )
		{
			if ( tree[N][0]=='\0' ) break;///if ( line[0]=='\0' ) break;
			N++;
		}
		if ( t>1 ) printf("\n");
		printf("Test Case %d: %d lines\n",t,N);
	}
}



