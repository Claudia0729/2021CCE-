#include <stdio.h>
char name[100][30];
int grade[100];
int main()
{
    FILE * fin = fopen("input.txt","r");

    int N;
    ///scanf("%d",&N);
    fscanf( fin , "%d" , &N );
    ///���Uprintf("Ū��N�O: %d\n", N );

    for ( int i=0;i<N;i++ )
    {
        ///�H�e�Oscanf("%s %d",name[i],&grade[i] );
        fscanf( fin ,"%s %d" , name[i],&grade[i]);
        ///���Uprintf("Ū��F %s %d\n",name[i],grade[i] );
    }

    for ( int i=0;i<N;i++ )///�L���
    {
        printf("%s %d\n",name[i],grade[i]);
    }
}
