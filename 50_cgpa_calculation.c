// CGPA Calculation : 
#include <stdio.h>
int main (){
    printf("Enter the no. of subjects :\n");
    int no_of_sub;
    scanf("%d",&no_of_sub);
    float credit, CGPA, sum_of_credit=0;
    float sum_of_credit_into_CGPA=0;
    for (int i=1 ; i<=no_of_sub ; i++ ){
        printf("%d. Credit of subject : ",i);
        scanf("%f",&credit);
        printf("   CGPA :");
        scanf("%f",&CGPA);
        sum_of_credit +=credit;
        sum_of_credit_into_CGPA +=credit*CGPA;
    }
    printf("Overall CGPA : %f",sum_of_credit_into_CGPA/sum_of_credit);
}