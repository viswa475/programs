#include <stdio.h>
#include <conio.h>
void dummy(){
	float a,*a1;
	*a1=a;
}



struct stud{
	char name[100];
	int rollnumber;
	int sem;
	float cgpa;
	};
	int main()
	{
		struct stud s[10];
		int i,n;
		
		printf("enter the number of student\n");
		scanf("%d",&n);
		printf("enter the student details\n");
		for(i=0;i<n;i++)
		{
		printf("enter the student name\n");
		scanf("%s",&s[i].name);
		printf("enter the student roll number\n");
		scanf("%d",&s[i].rollnumber);
		printf("enter the semester\n");
		scanf("%d",&s[i].sem);
		printf("enter the student cgpa\n");
		scanf("%f",&s[i].cgpa);
		}
		printf("name\trollnumber\tsemester\tcgpa\t\n");
		for(i=0;i<n;i++)
		{
		printf("%s\t",s[i].name);
		printf("   %d\t",s[i].rollnumber);
		printf("%d \t",s[i].sem);
		printf("%f\t",s[i].cgpa);
		printf("\n");
		}

		return 0 ;
		}
