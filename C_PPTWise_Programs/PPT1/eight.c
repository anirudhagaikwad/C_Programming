/*

Write a C program to evaluate the net salary of an employee.
Given the following constrains and we have to calculate net salary of an employee.

Basic salary : $ 12000
DA : 12% of Basic salary
HRA : $150
TA : $120
Others : $450
Tax cuts – a) PF :14% of Basic salary and b) IT: 15% of Basic salary
Net Salary = Basic Salary + DA + HRA + TA + Others – (PF + IT)
*/
#include <stdio.h>

//main program
int main()
{
	//variable to store values
	float basic, da, hra, ta, others;
	float pf,it;
	float net_salary;

	//input required fields
	printf("Enter Basic Salary ($): ");
	scanf("%f",&basic);
	printf("Enter HRA ($): ");
	scanf("%f",&hra);
	printf("Enter TA ($): ");
	scanf("%f",&ta);
	printf("Enter others ($): ");
	scanf("%f",&others);

	//calculate DA 12% of Basic Salary
	da = (basic*12)/100;
	//calculate PF 14% of Basic salary
	pf = (basic*14)/100;
	//calculate IT, 15% of Basic salary
	it = (basic*15)/100;

	//calculate net salary
	net_salary = basic + da + hra + ta + others - (pf+it);

	//printing Net salary
	printf("Net Salary is: $ %.02f\n",net_salary);

	return 0;
}
