#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks obtained by the candidate");
	scanf("%d",&marks);
	if(marks>=90)
	{printf("grade-A");
	}
	else
	{
	if(marks>=80)
	{printf("grade-B");
	}
	else
	{if(marks>=70)
	{printf("Grade-C");
	}
	else
	{printf("Fail");
	}
	}
	
	}
	return 0;
	
}
