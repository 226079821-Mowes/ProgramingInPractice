#include <stdio.h>

void main()
{
    double Salaries[50], total, AverageSalary, Lowest;
    float highest = 0;

    printf("MUNICIPAL EMPLOYEE SALARY ANALYSIS \n");
    // Input the salaries
    for (int i = 0; i < 50; i++)
    {
        printf("Enter the employee salary: ");
        scanf("%lf", &Salaries[i]);
        total += Salaries[i];
    }

    // Display the salaries
    for (int i = 0; i < 50; i++)
    {
        printf("Employee: %.2lf \n", Salaries[i]);
    }
    // Calculate the total salary
    printf("The total amount of salaries to be paid: %.2lf \n", total);

    // Calculate the average salary
    AverageSalary = total / 50;
    printf("The average salary is: %.2lf \n", AverageSalary);

    // Find the highest salary and display
    for (int i = 0; i < 10; i++)
    {
        if (Salaries[i] > highest)
        {
            highest = Salaries[i];
        }
    }
    printf("The highest salary is: %.2lf \n", highest);

    // Find the Lowest salary
    // When finding the lowest value in an array always set the variable equal to the first entry in the array and start the for loop on the 2 entry

    Lowest = Salaries[0];
    for (int i = 1; i < 50; i++)
    {
        if (Salaries[i] < Lowest)
        {
            Lowest = Salaries[i];
        }
    }
    printf("The lowest salary is: %.2lf \n", Lowest);
    printf("\n");

    printf("EMPLOYEE SALARY ANALYSIS \n");
    printf("------------------------ \n");
    printf("Total salary   : %.2lf \n", total);
    printf("Average salary : %.2lf \n", AverageSalary);
    printf("Highest salary : %.2lf \n", highest);
    printf("Lowest salary  : %.2lf \n", Lowest);
    printf("------------------------ \n");
}