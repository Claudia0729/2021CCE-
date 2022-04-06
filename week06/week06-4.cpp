#include <stdio.h>
///char line[2000];//改讀到全部的陣列
#include <stdlib.h>///qusort的宣告
#include <string.h>
char tree[1000000][40]///改讀到tree的陣列
///       1百萬顆 40個字母
///  tree[0] tree[2] tree[3]
int compare ( const void *p1, const void *p2 )///比較的函式
{
    char * s1=(char*) p1;///兩個互換
    char * s2=(char*) p2;
    return strcmp(s1,s2);
}
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

		qsort ( tree, N,  40,      compare );///排序字串
		///要排陣列  n個 單位大小 比大小的函式

        for ( int i=0;i<N;i++ )///印出字串
        {
            printf("%s\n",tree[i]);
        }
		///printf("Test Case %d: %d lines\n",t,N);
	}
}



