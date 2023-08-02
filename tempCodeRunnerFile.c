#include <stdio.h>

int main() {

    //--| YOUR CODE HERE
    char EmployeeID[10];
    float hours;
    float salaryperhours;
    float salary;

    printf("Input the Employees ID:\n");
    scanf("%s",EmployeeID);
    printf("Input the working hrs:\n");
    scanf("%f",&hours);
    printf("Salary amount/hr:\n");
    scanf("%f",&salaryperhours);

    salary = salaryperhours * hours;
    printf("Expected Output:\n");
    printf("Employees ID = %s\n",EmployeeID);
    printf("Salary = U$ %0.2f\n",salary);

    return 0;
}//end main function