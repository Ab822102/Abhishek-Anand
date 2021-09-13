#include<stdio.h>
#include<stdlib.h>
int menu();
void two();
void three();
void four();
void status();
void delete();
int ntwo=0,nthree=0,nfour=0,count=0,amount=0;
int main()
{
    while(1)
    {
    switch(menu())
    {
        case 1:
            two();
            break;
        case 2:
            three();
            break;
        case 3:
            four();
            break;
        case 4:
            status();
            break;
        case 5:
            delete();
            break;
        case 6:
            exit(0);
    default:
        printf("\n Wrong Choice \n");
    }
    }
}
int menu()
{
    int choice;
    printf("1. Enter Two Wheeler");
    printf("\n2. Enter Three Wheeler");
    printf("\n3. Enter Four Wheeler");
    printf("\n4. Show Status");
    printf("\n5. Delete");
    printf("\n6. Exit \n");
    printf("\nEnter Your Choice \n");
    scanf("%d",&choice);
    return(choice);
}
void status()
{
    printf("\nNo. Of Two Wheelers = %d",ntwo);
    printf("\nNo. Of Three Wheelers = %d",nthree);
    printf("\nNo. Of Four Wheelers = %d",nfour);
    printf("\nTotal No. Of Vehicles = %d",count);
    printf("\nTotal Amount = %d \n\n",amount);
}
void delete()
{
    ntwo=0;
    nthree=0;
    nfour=0;
    amount=0;
    count=0;
}
void two()
{
    printf("\nEntered Successfully\n\n");
    ntwo++;
    amount=amount+30;
    count++;
}
void three()
 {
     printf("\nEntered Successfully\n\n");
     nthree++;
     amount=amount+50;
     count++;
 }
 void four()
 {
     printf("\nEntered Successfully\n\n");
     nfour++;
     amount=amount+80;
     count++;
 }
