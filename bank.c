#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TRUE 1

    


int main(){
   
    long int acc;

    float blc;

    float amt;
    char name[20];
    int choice;
    int age;
    char adrs[20];
        	int num;
        	int n;
    printf("1.Deposit.\n");
    printf("2.Withdraw.\n");
    printf("3.Create a New account\n");
    printf("4.Exit\n");
    printf("Enter the choice:\t");
    scanf("%d",&choice);
   
    switch(choice)
    while(TRUE)
    {
        case 1: 
		printf("Enter you Account number:\t");
        scanf("%ld",&acc);
        printf("Enter you name:\t");
     scanf("%s",name);
        printf("Enter the Amount to deposit:\t");
        scanf("%d",&amt);
        printf("\n\tAmount deposited succussfully.");
        break;
        case 2:
        		printf("Enter you Account number:\t");
        scanf("%ld",&acc);
        printf("Enter your name:\t");
     scanf("%s",name);
        printf("Enter the Withdrawl Amount:\t");
        scanf("%d",&amt);
        printf("\n\tAmount Withdrwal succussfully.");
        break;
        case 3:
        	printf("\tEnter you details properly\t");
        
        printf("\nEnter you name:\t");
     scanf("%s",name);
     		printf("\nEnter your number:\t");
        scanf("%ld",&acc);
        printf("\nEnter you age:\t");
        scanf("%d",&age);
        printf("\nEnter you address:\t");
        scanf("%s",adrs);
        printf("\nEnter your citizenship/valid id card number:\t");
        scanf("%d",&num);
        
        printf("\n\tAmount has been created .");
        printf("\n\tThank you for choosing us");
        break;
        case 4:
        	exit(0);
        	default:
        		printf("wronge choice....");
    }
}

