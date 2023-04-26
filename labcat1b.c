#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Employee 
{
    char name[50];
    int age;
    char position[50];
    char doj[11];
};

void sortByName(struct Employee emp[], int n) 
{
    int i, j;
    struct Employee temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (strcmp(emp[i].name, emp[j].name) > 0) 
            {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}

void sortByDOJ(struct Employee emp[], int n) 
{
    int i, j;
    struct Employee temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (strcmp(emp[i].doj, emp[j].doj) > 0) 
            {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}

int main() 
{
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for (i = 0; i < n; i++) 
    {
        printf("Enter details of employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Age: ");
        scanf("%d", &emp[i].age);
        printf("Position: ");
        scanf("%s", emp[i].position);
        printf("Date of Joining: ");
        scanf("%s", emp[i].doj);
    }
    printf("\nEmployee List sorted by name:\n\n");

    sortByName(emp, n);

    for (i = 0; i < n; i++) 
    {
        printf("Name: %s\n", emp[i].name);
        printf("Age: %d\n", emp[i].age);
        printf("Position: %s\n", emp[i].position);
        printf("Date of Joining: %s\n\n", emp[i].doj);
    }

    printf("\nEmployee List sorted by date of joining:\n\n");

    sortByDOJ(emp, n);

    for (i = 0; i < n; i++) 
    {
        printf("Name: %s\n", emp[i].name);
        printf("Age: %d\n", emp[i].age);
        printf("Position: %s\n", emp[i].position);
        printf("Date of Joining: %s\n\n", emp[i].doj);
    }

    return 0;
}