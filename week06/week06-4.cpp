#include <stdio.h>
///char line[2000];//��Ū��������}�C
#include <stdlib.h>///qusort���ŧi
#include <string.h>
char tree[1000000][40]///��Ū��tree���}�C
///       1�ʸU�� 40�Ӧr��
///  tree[0] tree[2] tree[3]
int compare ( const void *p1, const void *p2 )///������禡
{
    char * s1=(char*) p1;///��Ӥ���
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

		qsort ( tree, N,  40,      compare );///�ƧǦr��
		///�n�ư}�C  n�� ���j�p ��j�p���禡

        for ( int i=0;i<N;i++ )///�L�X�r��
        {
            printf("%s\n",tree[i]);
        }
		///printf("Test Case %d: %d lines\n",t,N);
	}
}



