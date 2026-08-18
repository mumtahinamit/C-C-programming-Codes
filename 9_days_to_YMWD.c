#include<stdio.h>
int main (){
    int days;
    printf("Enter no. of days : ");
    scanf("%d",&days);
    int years=days/365;
    days=days%365;
    int months=days/30;
    days=days%30;
    int weeks=days/7;
    days=days%7;
    printf("Years=%d Months=%d Weeks=%d Days=%d",years,months,weeks,days);
    return 0;
}