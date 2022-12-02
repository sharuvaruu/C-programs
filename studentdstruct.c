#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char name[50];
	char department[50];
	char course[20];
	int y_o_j;
}n_o_s[450] = { 03, "Awantika Dhumane", "CSE", "B.tech", 2020,
10, "Sharvari Salodkar", "Chemical Engineering", "B.Tech", 2021,
53, "Harita Wandhare", "Mechanical Engineering", "Diploma", 2019,
13, "Karan Dhage", "Electrical Engineering", "M.Tech", 2020,
1, "Aakash Dixit", "Civil Engineering", "M.tech", 2018,
2, "Ramesh", "IT", "Phd", 2018
};
void student_in_year(int year)
{
	int i;
	printf("\n\t\tYear of joining : %d\n\n", year);
	for (i = 0; i <= 450; i++)
	{
		if (n_o_s[i].y_o_j == year)
		{

			printf("\nRoll Number : %d", n_o_s[i].roll);
			printf("\nName : %s", n_o_s[i].name);
			printf("\nDepartment : %s", n_o_s[i].department);
			printf("\nCourse : %s\n", n_o_s[i].course);
		}
	}
}
void student_data(int en_roll)
{
	int i;
	printf("\nRoll number : %d", en_roll);
	for (i = 0; i <= 450; i++)
	{
		if (n_o_s[i].roll == en_roll)
		{
			printf("\nName : %s", n_o_s[i].name);
			printf("\nDepartment : %s", n_o_s[i].department);
			printf("\nCourse : %s\n", n_o_s[i].course);
			printf("\nYear of joining : %d\n", n_o_s[i].y_o_j);
		}
	}
}
int main()
{
	int yoj, roll;
	printf("\nEnter year of joining of the students : ");
	scanf("%d", &yoj);
	student_in_year(yoj);
	_getch();
	printf("\nEnter the roll number of the studnet you want data : ");
	scanf("%d", &roll);
	student_data(roll);
	_getch();
	return 0;
}
