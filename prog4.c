/* An electricity board charges the following rates for the use of electricity: 
for the first 200 units, 80 paise per unit;for the next 100 units, 90 paise per unit;beyond 300 units, Rs 1 per unit.
All users are charged a minimum of Rs 100 as meter charge . If the total amount is more than Rs 400, 
then an additional surcharge of 15% of total amount is charged. Write a program to read the name of a user, number of units consumed
and print out the charges */

#include <stdio.h>
int main()
{
    float units,amt=0,mc=100;
    char name[20];
    printf("Enter the name :\n");
    scanf("%s",name);
    printf("Enter the number of units comsumed :\n");
    scanf("%f",&units);

    if(units<=200)
        amt=units*0.8;
    else if(units>200 && units<=300)
         amt=160 + (units-200)*0.9;
    else if(units>300)
        amt=240 + (units-300)*1;
        
    amt+=mc;
    if(amt>400)
        amt+=0.15*amt;
        
    printf("The total bill for %s is %f",name,amt);
    
    return 0;
}