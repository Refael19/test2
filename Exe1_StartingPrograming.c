#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void Q2();
void Q3();
void Q4();
void Q7();
void Q10();
void Q11();
void Q12();


void main()
{
	printf("Exe1 StartingPrograming:\n========================\n");
	Q12();
}


void Q2()
{
	int num1, num2, sum=0;

	printf("Enter two numbers:");
	scanf("%d%d", &num1, &num2);
	
	if (num1 > num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	for (int i = num1; i <= num2; i++)
	{
		sum += i;
	}	

	printf("The sum of the numbers between %d to %d is %d", num1, num2, sum);
}

void Q3()
{
	int age = 0, old = 0, young = 0, result = 0;

	printf("Enter the age:");
	scanf("%d", &age);
	young = age;
	old = age;

	for (int N = 0; N < 4; N++)
	{
		printf("Enter the age:");
		scanf("%d", &age);
		if (age < young)
		{
			young = age;
		}

		if (age > old)
		{
			old = age;
		}
	}	
	result = old - young;

	if (result > 3)
	{
		printf("The class is called heterogeneous.");
	}
	else
	{
		printf("The class is called homogeneous.");
	}
}

void Q4()
{
	int M = 0, N = 0, num = 0, max1 = 0, max2 = 0, temp = 0, result = 0;

	printf("Enter a number to chech:");
	scanf("%d", &M);

	printf("How many numbers would you like to compare:");
	scanf("%d", &N);

	printf("Enter a number:");
	scanf("%d", &num);

	max1 = num;

	printf("Enter a number:");
	scanf("%d", &num);
	max2 = num;
	
	for (int n = 2; n < N; ++n)
	{
		printf("Enter a number:");
		scanf("%d", &num);

		if (max2 > max1)
		{
			temp = max1;
			max1 = max2;
			max2 = temp;
		}
		if (num > max2)
		{
			max2 = num;
		}
	}
	result = max1 + max2;
	if (result > M)
	{
		printf("%d + %d > %d", max1, max2, M);
	}
	if (M > result)
	{
		printf("%d > %d + %d", M, max1, max2);
	}
	if (M == result)
	{
		printf("%d = %d + %d", M, max1, max2);
	}
}

void Q7()
{
	int num = 0, hour = 0, minute = 0, second = 0;

	printf("Enter number of seconds:");
	scanf("%d", &num);

	if (num > 86400)
		return printf("The number of seconds is longer than a day");

	second = num % 60;
	minute = num / 60;
	hour = minute / 60;
	minute = minute % 60;
	printf("The time is %d : %d : %d", hour, minute, second);
}

void Q10()
{
	int a1 = 0, q = 0, n = 0;

	printf("Enter a1 , q , n :");
	scanf("%d%d%d", &a1, &q, &n);

	printf("a1=%d q=%d n=%d\n", a1, q, n);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", a1);
		a1 = a1 * q;
	}	
}

void Q11()
{
	int sum = 0;
	for (int i = 1; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}	
	}
	printf("The sum is: %d",sum);
}

void Q12()
{
	int num = 0;

	printf("Enter a number > 0 and < 19: ");
	scanf("%d", &num);

	if (num < 1)
		return printf("Error");
	if (num > 18)
		return printf("Error");

	for (int i = 0; i < 100; i++)
	{
		int num1 = 0, num2 = 0, result = 0;
		num1 = i / 10;
		num2 = i % 10;
		result = num1 + num2;
		if (num == result)
		{
			printf("%d ", i);
		}
	}
}
