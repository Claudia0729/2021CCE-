#include <stdio.h>
char line[40];///�@�椣�W�L30�r���A40���j
int main()
{
		int T;
		scanf("%d\n\n",&T);///2�Ӹ���

		for ( int t=1;t<=T;t++ )
		{
			if ( t>1 ) printf("\n");
			printf("�{�b�O��%d����\n",t);
			while ( gets(line) )
			{
				if ( line[0]==0 ) break;///�ťզ����}�j��
			}
		}
}
