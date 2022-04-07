#include <stdio.h>
char line[2000][80];//同今日考試
int main()
{
	int N;
	scanf("%d\n",&N);//跳行重要


	for ( int i=0;i<N;i++ )
	{
		gets( line[i] );//因有空格不能用scanf

	}

	for ( int i=0;i<N;i++ )
	{
		printf("%s\n",line[i]);
	}
}
