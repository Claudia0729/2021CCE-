#include <stdio.h>
#include <vector>///沒有h因為是c++ 付出的代價 std::vector<Student>
#include <algorithm>///付出的代價 std::sort()直接排序
class Student
{
public:///公開給別人用,所以main()可以存取到裡面的資料
    char name[300];///名字(30個字母)
    int grade;///分數
};
///Student student[100];///(大寫)Student student[100];//有100個學生
            ///大寫       大寫
bool compare ( Student a, Student b )
{
    return ( a.grade > b.grade );
}
int main()
{
    FILE * fin = fopen("input.txt","r");
    int N;
    fscanf( fin , "%d" , &N );
            ///大寫     小寫
    std::vector<Student> student(20);///用圓括號 大小事20的student
    for ( int i=0;i<N;i++ )
    {
                            ///小寫           ///小寫
        fscanf( fin ,"%s %d" , student[i].name, &student[i].grade );
                                    ///的
    }
            ///小寫           ///小寫
    std::sort( student.begin(), student.end(), compare );
                ///開始位置      ///結束位置
    for ( int i=0;i<N;i++ )///印資料
    {
        printf("%s %d\n",student[i].name,student[i].grade);
                        ///小寫           小寫
    }
}
