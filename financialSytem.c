#include <stdio.h>

int main(){
    char MUNName[50], MayorName[50];
    int Population;

    printf("Municipal Finance Management System \n");
    
    printf("Enter Municipality: \n");
    fgets(MUNName, sizeof(MUNName), stdin);

    printf("Enter Mayor: \n");
    fgets(MayorName, sizeof(MayorName), stdin);

    printf("Enter Population: \n");
    scanf("%d", &Population);

    printf("-------------------------------- \n");

    printf("Municipality: %s \n", MUNName);
    printf("Mayor: %s \n", MayorName);
    printf("Population: %d", Population);

    return 0;
}