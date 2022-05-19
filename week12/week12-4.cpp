#include <iostream>
using namespace std;
class Student
{
	public:
	char name[30];
	int grade;
};
Student stu[100];
int main()
{
	int N;
	///scanf("%d",&N);
	///std::cin>>N;
    cin >>N;
	///std::vector<Student> stu(N);
	for ( int i=0;i<N;i++ )
	{
		///scanf("%s %d",stu[i].name,&stu[i].grade);
		///std::cin >> stu[i].name;
		cin >> stu[i].name;
		///std::cin >> stu[i].grade;
		cin >> stu[i].grade;

	}

	///std::stable_sort(stu.begin(), stu.end(), compare );

	for ( int i=0;i<N;i++ )
	{
		///printf("%s %d\n",stu[i].name,stu[i].grade );
		///std::cout<< stu[i].name << " ";
		cout << stu[i].name << " ";
		///std::cout<< stu[i].grade << "\n";
		cout << stu[i].grade << "\n";

	}
}


