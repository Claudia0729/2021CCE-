#include <stdio.h>
char line[2000][80];//�P����Ҹ�
int main()
{
	int N;
	scanf("%d\n",&N);//���歫�n


	for ( int i=0;i<N;i++ )
	{
		gets( line[i] );//�]���Ů椣���scanf

	}

	for ( int i=0;i<N;i++ )
	{
		printf("%s\n",line[i]);
	}
}
