/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>
int main()
{
	int m1,m2;
	float avg;
	printf("enter mark one:");
	scanf("%",&m1);
	
	printf("enter mark one:");
	scanf("%d",&m2);
	avg=(m1+&m2)/2.0;
	printf("avg is:%.2f",avg);
	
	return0;

