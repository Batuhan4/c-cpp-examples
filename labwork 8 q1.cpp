#include<stdio.h>
int main()
{
	int grades[4][3];
	int i, j, sumExam, sumStudent=0;
	float avgExam, avgStudent=0;
	
	for(i=0; i<4; i++)
	{
		printf("Enter 3 exam grades for Student %d ", i+1);
		for(j=0; j<3; j++)
		{
			scanf("%d", &grades[i][j]);
		}
	}
	
	for(i=0; i<4; ++i)
	{
		sumStudent=0;
		for(j=0; j<3; ++j)
		{
			sumStudent+=grades[i][j];
		}
		avgStudent = sumStudent/3.0;
		printf("%d. Student's average is %.2f\n", i+1, avgStudent);
	}
	
	
	for(j=0; j<3; j++)
	{
		sumExam=0;
		for(i=0; i<4; i++)
		{
			sumExam+=grades[i][j];
		}
		avgExam = sumExam/4.0;
		printf("%d. exam's average is %.2f\n", j+1, avgExam);
	}
	
	return 0;
}
