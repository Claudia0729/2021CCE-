#include <stdio.h>
#include <vector>///�S��h�]���Oc++ �I�X���N�� std::vector<Student>
#include <algorithm>///�I�X���N�� std::sort()�����Ƨ�
class Student
{
public:///���}���O�H��,�ҥHmain()�i�H�s����̭������
    char name[300];///�W�r(30�Ӧr��)
    int grade;///����
};
///Student student[100];///(�j�g)Student student[100];//��100�Ӿǥ�
            ///�j�g       �j�g
bool compare ( Student a, Student b )
{
    return ( a.grade > b.grade );
}
int main()
{
    FILE * fin = fopen("input.txt","r");
    int N;
    fscanf( fin , "%d" , &N );
            ///�j�g     �p�g
    std::vector<Student> student(20);///�ζ�A�� �j�p��20��student
    for ( int i=0;i<N;i++ )
    {
                            ///�p�g           ///�p�g
        fscanf( fin ,"%s %d" , student[i].name, &student[i].grade );
                                    ///��
    }
            ///�p�g           ///�p�g
    std::sort( student.begin(), student.end(), compare );
                ///�}�l��m      ///������m
    for ( int i=0;i<N;i++ )///�L���
    {
        printf("%s %d\n",student[i].name,student[i].grade);
                        ///�p�g           �p�g
    }
}
