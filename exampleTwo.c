#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Hello\nWorld\n");
//	1.Declare and initialise basic variables
int age = 20;
float gpa = 3.85f;
double pi = 3.14159265359;
char letter = 'A';
//2.print variables using the format specifiers
printf("Age:  %d\n",age);
printf("GPA: %.2f\n",gpa);
printf("PI: %.11lf\n",pi);
getch();
printf("Letter: %c\n",letter);
printf("Hello \nSatimon");
	return 0;
}
