#include <stdio.h>
char name[100][30];
int grade[100];
int main()
{
    FILE * fin = fopen("input.txt","r");

    int N;
    ///scanf("%d",&N);
    fscanf( fin , "%d" , &N );
    ///輔助printf("讀到N是: %d\n", N );

    for ( int i=0;i<N;i++ )
    {
        ///以前是scanf("%s %d",name[i],&grade[i] );
        fscanf( fin ,"%s %d" , name[i],&grade[i]);
        ///輔助printf("讀到了 %s %d\n",name[i],grade[i] );
    }

    for ( int i=0;i<N;i++ )///印資料
    {
        printf("%s %d\n",name[i],grade[i]);
    }
}
