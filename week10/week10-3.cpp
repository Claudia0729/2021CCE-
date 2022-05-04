#include <stdio.h>
class Student
{
public:///公開給別人用,所以main()可以存取到裡面的資料
    char name[300];///名字(30個字母)
    int grade;///分數
};

Student student[100];///(大寫)Student student[100];//有100個學生
int main()
{
    FILE * fin = fopen("input.txt","r");
    int N;
    fscanf( fin , "%d" , &N );
    for ( int i=0;i<N;i++ )
    {
        fscanf( fin ,"%s %d" , student[i].name,&student[i].grade );
                                    ///的
    }

    for ( int k=0;k<N-1;k++ )
    {
        for ( int i=0;i<N-1;i++ )
        {
            if ( student[i].grade < student[i+1].grade )
            {
                Student temp = student[i];
                student[i] = student[i+1];
                student[i+1] = temp;
            }
        }
    }
    for ( int i=0;i<N;i++ )///印資料
    {
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}

