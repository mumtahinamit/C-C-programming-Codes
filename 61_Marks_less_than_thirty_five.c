#include<stdio.h>
int main (){
    int no_of_students;
    printf("Enter no. of students : ");
    scanf("%d",&no_of_students);
    int marks[no_of_students];
    printf("Enter the marks : ");
    for (int i=0 ; i<no_of_students  ; i++){
        scanf("%d",&marks[i]); //Index i => Indicates roll
        if(marks[i]<35) printf("roll : %d\n",i+1); // printing roll
    }

    // Or...............

    printf("Enter the marks : ");
    for (int i=0 ; i<no_of_students  ; i++){
        scanf("%d",&marks[i]); //Index i => Indicates roll
    }

    printf("ROLL NO : ");
    for (int i=0 ; i<no_of_students  ; i++){
        if(marks[i]<35) printf("%d ",i+1); // printing roll
    }



}