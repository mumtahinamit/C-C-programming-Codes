/*Write a C program to input electricity unit charges and calculate total elec-
tricity bill according to the given condition:

For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/
#include <stdio.h>
int main (){
    printf("Enter the unit charges : ");
    float a,bill;
    scanf("%f",&a);
    if (a<=50) bill=(a*0.5);
    else if (a<=150) bill=(50*0.5)+((a-50)*0.75);
    else if (a<=250) bill=(50*0.5)+(100*0.75)+((a-150)*1.2);
    else bill=(50*0.5)+(100*0.75)+(100*1.2)+((a-250)*1.5);
    printf("Total bill = %f",(bill+(bill*0.2)));
    return 0; 
}