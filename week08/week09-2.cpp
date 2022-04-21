#include <stdio.h>///簡化從大到小
///若快排好了,可提早結束
int grade[10]={9,8,1,2,3, 7,6,5,4,0};
int main()
{
    int N=10;
    for ( int k=0;k<10;k++ )
    {
        int change=0;///沒有修改
        for ( int i=0;i<N-1;i++ )
        {
            if ( grade[i]<grade[i+1])///反了
            {
                int temp=grade[i];
                grade[i]=grade[i+1];
                grade[i+1]=temp;

                change++;///有一個修改
            }
        }
        if ( change==0 ) break;///如果沒有修改,就離開可以少跑好幾次
        for ( int i=0;i<N;i++ )

            printf("%d ",grade[i]);
            printf("\n");///印結果

    }

}

