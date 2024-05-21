#include<stdio.h>
struct empo 
{
    char name[20];
    char adrs[40];
    int age;
    float sal;
};
int main()
{
struct empo e[100];
int n,i;
float temp;
float avg=0;
printf("How many Employee are there?");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    printf("Enter the Employee  imformation %d",i++);
    printf("\nEmployee Name:\t");
    scanf("%s",e[i].name);
    printf("\nEmployee Address:\t");
    scanf("%s",e[i].adrs);
    printf("\nEmployee Age:\t");
    scanf("%d",&e[i].age);
    printf("\nEmployee Salary:\t");
    scanf("%f",&temp);
    e[i].sal=temp;
}
printf("\n\n");
printf("\nEmployee name\t Address\t Age\t Salary");
for(i=0;i<n;i++)
printf("\n%s\t\t\t%s\t%d\t%f\n",e[i].name,e[i].adrs,e[i].age,e[i].sal);
for(i=0;i<n;i++)
avg=avg+e[i].sal;
avg=avg/n;
printf("Averege salary=%f",avg);
}