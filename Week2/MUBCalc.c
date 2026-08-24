#include <stdio.h>
int main(){
    double TotalRevenue, TotalExpenses, payroll, procurement, assets;
    int departments, Employees;

    printf("MUNICIPAL BUDGET CALCULATOR \n");

    printf("Enter the total revenue: ");
    scanf("%lf", &TotalRevenue);

    printf("Enter the total expenses: ");
    scanf("%lf", &TotalExpenses);

    double balance = TotalRevenue - TotalExpenses;

    printf("Enter the amount of employees: ");
    scanf("%d", &Employees);
    printf("Enter the total payroll: ");
    scanf("%lf", &payroll);
    printf("Enter the amount of departments: ");
    scanf("%d", &departments);
    printf("Enter the amount of assets: ");
    scanf("%lf", &assets);
    printf("Enter the Procurement value: ");
    scanf("%lf", &procurement);

    printf("MUNICIPAL FINANCIAL SUMMARY \n");
    printf("------------------------- \n");
    printf("Employees: %d \n", Employees);
    printf("Procurement: %.2lf \n", procurement);
    printf("Departments: %d \n", departments);
    printf("Assets: %lf \n", assets);
    printf("Payroll: %.2lf \n", payroll);
    printf("Total Revenue: %.2f \n ", TotalRevenue);
    printf("Total Expenses: %.2f \n ", TotalExpenses);
    printf("Balance: %.2f \n", balance);

    return 0;
}