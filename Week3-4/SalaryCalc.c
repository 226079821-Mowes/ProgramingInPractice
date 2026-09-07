#include <stdio.h>

int main(){
    printf("Welcome to the employee salary calculator \n");
    double BasicSalary, HousingAllowance,TransportAllowance,Tax;
    double GrossSalary, NetSalary;

    printf("ENter the employee basic salary: ");
    scanf("%lf", &BasicSalary);

    printf("Enter the employee housing allowance: ");
    scanf("%lf", &HousingAllowance);

    printf("Enter the employee transport allowance: ");
    scanf("%lf", &TransportAllowance);

    printf("Enter the tax amount: ");
    scanf("%lf", &Tax);

    GrossSalary = BasicSalary + HousingAllowance + TransportAllowance;
    NetSalary = GrossSalary - Tax;
    printf("\n");
        
    printf("EMPLOYEE SALARY CALCULATOR \n");
    printf("--------------------------- \n");
    printf("Gross Salary: %.2lf \n", GrossSalary);
    printf("Net Salary: %.2lf \n", NetSalary);
    printf("---------------------------");

    return 0;
}